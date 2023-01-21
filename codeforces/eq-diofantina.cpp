/*
  Atividade extra de Matemática discreta 2
  Professor:  Matheus Bernardini
  Alunos:
    Matheus Phillipo Silverio Silva 150154348
    

  Para compilar e rodar o programa execute o seguinte comando:
  g++ -std=c++17 main.cpp ; ./a.out

ou rode o programa no seguinte link do OnlineGDB https://www.onlinegdb.com/online_c++_compiler

Por favor, escolher o compilador do C++17 no site listado

*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll oa, ob; // valores originais de a.
void swap(ll *a, ll *b)
{
    ll t = *a;
    *a = *b;
    *b = t;
}

/*
    Algoritmo de euclides para achar os coeficientes com os quais é possível escrever,
    o mdc de a e b como uma combinação linear.
*/
pair<ll, ll> euclides_bezout(ll a, ll b)
{
    a = abs(a);
    b = abs(b);

    // Algoritmo de Euclides para achar os quocientes.
    vector<ll> quo;
    while (b != 0)
    {
        ll c;
        c = a / b;
        quo.push_back(c);

        swap(&a, &b);
        b = b % a;
    }

    // Remover o último e o zero.
    quo.pop_back();
    reverse(quo.begin(), quo.end());
    cout << "Quocientes para achar s e t: : ";
    for (auto x : quo)
        cout << x << ' ';
    cout << "\n\n";

    // Achar t e s de fato, (segunda etapa).
    ll prev = 0;
    ll curr = 1;
    vector<ll> ans;
    ans.push_back(1);
    ans.push_back(1);
    for (int i = 0; i < (int)quo.size(); ++i)
    {
        ll prev2 = curr;
        curr = quo[i] * curr + prev;
        prev = prev2;
        ans.push_back(curr);
    }
    // caso o total de quocientes seja ímpar o penúltimo é negativo, analogamente o contrário.
    cout << "Multiplicações dos quocientes : ";
    for (auto x : ans)
        cout << x << ' ';
    cout << "\n\n";
    ll s, t;
    s = ans.back();
    ans.pop_back();
    t = ans.back();
    ans.pop_back();

    // O maior em módulo é o t, pois vai pra b, que aqui é o min(a,b);
    if (s > t)
        swap(s, t);

    if ((int)quo.size()%2)
        t = -t;
    else
        s = -s;

    return {s, t};
}
void solve(ll a, ll b, ll c)
{
    // critério do mdc.
    ll mdc_ab = __gcd(a, b);
    cout << "mdc(a,b) = " << mdc_ab << "\n\n";

    if (c % mdc_ab != 0)
    {
        cout << "O mdc de a e b não divide c, portanto NÃO EXISTEM SOLUÇÕES. \n";
        return;
    }

    // Caso existam soluções, achar o primeiro caso base, pela relação de Bezout.
    pair<ll, ll> s_t = euclides_bezout(a, b);
    auto [s, t] = s_t;
    cout << "s: " << s_t.first << " t: " << s_t.second << "\n\n";
    ll k = c / mdc_ab;

    printf("A solução base é : %lli*%lli + %lli*%lli = %lli\n\n\n", a, s * k, b, t * k, mdc_ab * k);

    if(abs(ob) > abs(oa)){// inverteu tudo pq fiz os ca
      printf("A solução geral é x = (%lli) + (%lli)*t e y = (%lli) - (%lli)*t\n\n\n", t * k, a / mdc_ab, s * k, b / mdc_ab);
    }else{
            printf("A solução geral é x = (%lli) + (%lli)*t e y = (%lli) - (%lli)*t\n\n\n", t * k, b / mdc_ab, s * k, a / mdc_ab);
    }
    
}
int main(void)
{
    ll a, b, c;
    printf("Insira o valor de a: ");
    cin >> oa;
    printf("Insira o valor de b: ");
    cin >> ob;
    printf("Insira o valor de c: ");
    cin >> c;

    if(abs(oa) < abs(ob)){
      a = ob;
      b = oa;
    }
    else{
      a = oa;
      b = ob;
    }
    solve(a, b, c);
  
    return 0;
}