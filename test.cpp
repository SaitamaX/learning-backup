#include <bits/stdc++.h>
using namespace std;
// static auto _ = [](){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     return nullptr;
// }();

//?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7 ?1?7?1?7?0?8
// #include <bits/stdc++.h>
// using namespace std;

// struct TreeNode{
//     char val;
//     TreeNode *left, *right;
//     TreeNode(char value) : val(value), left(nullptr), right(nullptr){}
// };

// void createTree(TreeNode* &p, int &i, vector<char> &tree, int size){
//     if(i < size && tree[i] != '#')
//         p = new TreeNode(tree[i]);
//     else
//     {
//         p = nullptr;
//         return;
//     }
//     queue<TreeNode*>body;
//     body.push(p);
//     i++;
//     TreeNode * pre;
//     while(!body.empty()){
//         pre = body.front();
//         body.pop();
//         if(i < size){
//             if(tree[i] == '#'){
//                 pre->left = nullptr;
//             }
//             else
//             {
//                 pre->left = new TreeNode(tree[i]);
//                 body.push(pre->left);
//             }
//         }
//         i++;
//         if(i < size){
//             if(tree[i] == '#')
//                 pre->right = nullptr;
//             else
//             {
//                 pre->right = new TreeNode(tree[i]);
//                 body.push(pre->right);
//             }
//         }
//         i++;
//     }
// }

// void dfs(TreeNode *p){
//     if(!p)
//         return;
//     dfs(p->left);
//     dfs(p->right);
//     if(p->left && p->right){
//         TreeNode *q = p->left;
//         p->left = p->right;
//         p->right = q;
//     }
//     else if(p->left && !p->right){
//         p->right = p->left;
//         p->left = nullptr;
//     }
//     else if(!p->left && p->right){
//         p->left = p->right;
//         p->right = nullptr;
//     }
// }

// int main(){
//     char c, ch;
//     vector<char> res;
//     int treeSz = 0, pos = 0;
//     vector<char> tree;
//     TreeNode *root = nullptr;
//     while((cin >> c).get(ch)){
//         tree.push_back(c);
//         treeSz++;
//         if(ch == '\n')
//             break;
//     }
//     createTree(root, pos, tree, treeSz);
//     if(!root){
//         cout << "[]" << endl;
//         return 0;
//     }

//     dfs(root);
//     queue<TreeNode*> body;
//     int tmp, count = 1;
//     body.push(root);
//     res.push_back(root->val);
//     while(!body.empty())
//     {
//         tmp = count;
//         count = 0;
//         for(int i = 0; i < tmp; ++i){
//             root = body.front();
//             body.pop();
//             if(root->left){
//                 body.push(root->left);
//                 count++;
//                 res.push_back(root->left->val);
//             }
//             else{
//                 res.push_back('#');
//             }
//             if(root->right){
//                 body.push(root->right);
//                 count++;
//                 res.push_back(root->right->val);
//             }
//             else{
//                 res.push_back('#');
//             }
//         }
//     }
//     count = res.size();
//     for(int i = res.size() - 1; i >= 0; --i){
//         if(res[i] == '#')
//             count--;
//         else
//             break;
//     }
//     //res.resize(count+1);
//     res.resize(treeSz);
//     string str = "[";
//     for(int i = 0; i < res.size(); ++i){
//         if(i != res.size()-1){
//             str += res[i];
//             str += ' ';
//         }
//         else
//             str += res[i];
//     }
//     str += ']';
//     cout << str << endl;
//     system("pause");
//     return 0;
// }

//?1?7?1?7kС?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, k;
//     double tmp;
//     char c;
//     cin >> n;
//     vector<double> body;
//     unordered_map<double, vector<int> > list;
//     priority_queue<double, vector<double>, greater<double> > heap;
//     for(int i = 0; i < n; ++i)
//     {
//         cin >> k;
//         while((cin >> tmp).get(c))
//         {
//             body.push_back(tmp);
//             if(c == '\n')
//                 break;
//         }
//         for(int j = 0; j < body.size()-1; ++j){
//             heap.push(body[j]/body[body.size()-1]);
//             list[body[j]/body[body.size()-1]].push_back(j);
//             list[body[j]/body[body.size()-1]].push_back(body.size()-1);
//         }
//         for(int j = 0; j < k-1; ++j){
//             double temp = heap.top();
//             int l = list[temp][0], r = list[temp][1];
//             heap.pop();
//             if(r-1 != l){
//                 heap.push(body[l] / body[r-1]);
//                 list[body[l]/body[r-1]].push_back(l);
//                 list[body[l]/body[r-1]].push_back(r-1);
//             }
//         }
//         cout << (int)body[list[heap.top()][0]] << " " << (int)body[list[heap.top()][1]] << endl;
//         list.clear();
//         body.resize(0);
//         while(!heap.empty())
//             heap.pop();
//     }
//     system("pause");
//     return 0;
// }

//?1?7?1?7?1?7?1?7?1?7?1?7?0?1?1?7?1?7(?1?7?1?7?1?7?1?7?1?7?1?3?1?7?1?7?1?7?0?0?0?0),?1?7?1?7?1?7?1?7?1?7?1?7?1?7?0?7?1?7?0?5?1?7?1?7?1?7?1?7?1?7?1?7?0?5?1?7?1?7?1?7?1?7?1?7?0?9?1?7?1?7?1?7?1?7?1?7?0?1?1?7?1?7?1?7?0?8?0?5?0?4?1?7?1?2?1?7?1?7?1?7?1?7?0?3?0?1?1?7?1?7?1?7?1?7?0?5?0?1?1?7?1?7?1?7?1?7?1?7?9?0?0?7?1?7?0?2?0?1?1?7?1?7?1?7?1?7
// #include <bits/stdc++.h>
// using namespace std;

// int ans = 0;
// void dfs(int start, int index, vector<vector<int>> &v, vector<int> &fa, vector<int> &jl)
// {
//     int s = v[start].size();
//     for(int i = 0; i < s; i++)
//     {
//         if(v[start][i] != fa[start])
//         {
//             fa[v[start][i]] = start;
//             dfs(v[start][i], index + 1, v, fa, jl);
//             fa[v[start][i]] = 0;
//         }
//     }
//     if(index > ans)
//         ans = index;
//     jl[start]  = index;
//     return;
// }

// int main(){
//     int N, M, l, r;
//     cin >> N;
//     for(int i = 0; i < N; ++i)
//     {
//         vector<vector<int>> v;
//         vector<int> fa;
//         vector<int> jl;
//         cin >> M;
//         v.resize(M+1);
//         fa.resize(M+1);
//         jl.resize(M+1);
//         for(int j = 1; j < M; ++j)
//         {
//             cin >> l;
//             cin >> r;
//             v[l].push_back(r);
//             v[r].push_back(l);
//         }
//         dfs(1, 0, v, fa, jl);
//         int end;
//         for(int j = 1; j <= M; j++)
//         {
//             if(jl[j] == ans)
//             {
//                 end = j;
//                 break;
//             }
//         }
//         dfs(end, 0, v, fa, jl);
//         cout << ans << endl;
//         ans = 0;
//     }
//     system("pause");
//     return 0;
// }
//?1?7?1?7?0?0?1?7?1?7?0?1?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?0?8?1?7?1?7?1?7?0?4?1?7?1?7?0?3?1?7?1?7?1?7?1?7?0?5?1?7?1?7?0?2?0?0?1?7?1?7?0?1?1?7?1?7
// #include <bits/stdc++.h>
// using namespace std;
// static auto _ = [](){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     return nullptr;
// }();

// int main(){
//     int N, M, lNode, rNode, ans = 0;//N:?0?0?1?7?0?0?1?7?1?7?1?7 M:?0?7?1?7?1?7?0?0?1?7?0?5?1?7?1?7?1?7?1?7
//     cin >> N;
//     for(int i = 0; i < N; ++i)
//     {
//         cin >> M;//M:?0?0?1?7н?1?7?1?7?0?0?1?7?1?7?1?7
//         vector<vector<int> > dis(M+1, vector<int>(M+1, 0));
//         for(int j = 0; j < M; ++j)
//         {
//             cin >> lNode;
//             cin >> rNode;
//             dis[lNode][rNode] = 1;
//             dis[rNode][lNode] = 1;
//         }
//         //M+1:?0?0?1?7б?1?1?0?0?1?7?1?7?1?7
//         for(int j = 1; j < M+1; ++j)
//             for(int k = 1; k < M+1; ++k){
//                 if(dis[j][k] != 1 && j != k)
//                     dis[j][k] = 10000;
//             }
//         for(int j = 1; j < M+1; ++j)
//             for(int k = 1; k < M+1; ++k)
//                 for(int t = 1; t < M+1; ++t)
//                     if(dis[k][t] > dis[k][j]+dis[j][t])
//                         dis[k][t] = dis[k][j]+dis[j][t];
//         for(int j = 1; j < M+1; ++j)
//             for(int k = 1; k < M+1; ++k)
//                 if(dis[j][k] != 10000)
//                     ans = max(ans, dis[j][k]);
//         cout << ans << endl;
//         // for(int j = 1; j < M+1; ++j){
//         //     for(int k = 1; k < M+1; ++k)
//         //         cout << dis[j][k] << " ";
//         //     cout << endl;
//         // }
//         ans = 0;
//         dis.clear();
//     }
//     system("pause");  
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// static auto _ = [](){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     return nullptr;
// }();

// int main(){
//     int N, tmp;
//     char c;
//     vector<int> body;
//     cin >> N;
//     for(int i = 0; i < N; ++i)
//     {
//         while((cin >> tmp).get(c)){
//             body.push_back(tmp);
//             if(c == '\n')
//                 break;
//         }
//         for(auto num : body)
//             cout << num << ' ';
//         cout << endl;
//         body.clear();
//     }
//     system("pause");
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define INF 0xfffffff
// vector<int> lists;
// int dp[1001][2001];
// int main(){
// 	int n,k;
//     cin >> n;
//     cin >> k;
//     lists.resize(n+1);
//     for(int i = 1; i <= n; ++i){
//         cin >> lists[i];
//     }
//     sort(lists.begin(), lists.end());
//     for(int i = 1; i <= n; i++){
//         dp[0][i]=0;
//     }
//     for(int i = 1; i <= k; i++){
//         int j;
//         for(j = 2*i; j <= n; j++){
//             if(j>2*i)
//                 dp[i][j]=dp[i][j-1];
//             else
//                 dp[i][j]=INF;
//             if(dp[i][j]>dp[i-1][j-2]+(lists[j]-lists[j-1])*(lists[j]-lists[j-1]))
//                 dp[i][j]=dp[i-1][j-2]+(lists[j]-lists[j-1])*(lists[j]-lists[j-1]);
//         }
//     }
//     cout << dp[k][n] << endl;
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define Inf 0xfffffff;
// static auto _ = [](){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     return nullptr;
// }();

// void helper(int beg, int end, vector<int> &cost, vector<bool> &visited, int &res){
//     int tmp = Inf; 
//     int pos = -1;
//     for(int i = beg; i < end; ++i){
//         if(!visited[i] && cost[i] < tmp){
//             tmp = cost[i];
//             pos = i;
//         }
//     }
//     visited[pos] = true;
//     res += tmp;
// }

// int main(){
//     int n, res = 0;
//     string brac;
//     cin >> brac;
//     n = brac.size();
//     vector<int> cost(n+1, 0);
//     stack<int> body;
//     vector<bool> visited(n+1, false);
//     for(int i = 0; i < n+1; ++i)
//         cin >> cost[i];
//     for(int i = 0; i < n; ++i){
//         if(brac[i] == '(')
//             body.push(i);
//         else if(!body.empty()){
//             body.pop();
//         }
//         else{
//             helper(0, i+1, cost, visited, res);
//         }
//     }
//     while(!body.empty()){
//         int pos = body.top();
//         helper(pos+1, n+1, cost, visited, res);
//         body.pop();
//     }
//     cout << res << endl;
//     system("pause");
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// static auto _ = [](){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     return nullptr;
// }();


// class Test
// {
//     public:
//         Test() {}
//         Test(int i) {}
//         void func() {}
// };

// int main()
// {
//     Test t1(1);
//     Test *t2 = new Test();
//     t1.func();
//     t2->func();
//     return 0;
// }
//?1?7?1?7?1?7?1?7c++?1?7?1?7main?1?7?1?7?1?7?1?7?0?8?0?2?1?7?1?7?1?7е?0?3?1?7?1?7?1?7
//#include <bits/stdc++.h>
//using namespace std;

// class A{
//     public:
//     A(){
//         cout << "third" << endl;
//     }
// };
// A a;//?0?6?1?7?0?6?0?7?1?7?0?5?1?7?1?7

// __attribute__((constructor))void before() {//?0?6?1?7?0?6?0?7?1?7?1?7?1?7?1?7?1?7
//     cout << "first" << endl;
// }

// static auto _ = [](){//?0?6?1?7?0?6?0?7?1?2?1?7?1?7?1?7
//     cout << "second" << endl;
//     return nullptr;
// }();

// //?0?6?1?7?0?6?0?7?1?7?0?5?1?7?1?7?1?7?1?7?1?2?1?7?1?7?1?7?1?7?1?7?0?5?1?7?0?3?1?7?1?7?0?0?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?1?1?7?1?7?0?5?1?7λ?1?7?0?0?1?7?0?6?1?7?0?6?0?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7λ?1?7?1?7?1?7?1?1?1?5?1?7?1?7?1?7?1?7?1?7?0?5?1?7?1?7?0?3?1?2?1?7?1?7?1?7?1?7?0?3?1?7?1?7?1?7?1?7?1?7?0?6?1?7?0?5?1?7

// int main(){
//     cout << "main process" << endl;
//     system("pause");
//     return 0;
// }
//?1?7麯?1?7?1?7?1?7?1?0?1?7麯?1?7?1?7?1?7?1?7?1?7?0?9?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?0?3?1?7?1?7?1?7?1?7?1?7
// class A{
//     public:
//         A(){}
//         virtual void func(){
//             cout << "class A" << endl;
//         }
//         virtual ~A() = 0;
// };

// A::~A(){
//     cout << "kill A" << endl;
// }

// class B : public A{
//     public:
//         virtual void func(){
//             cout << "class B" << endl;
//         }
//         ~B(){
//              cout << "kill B" << endl;
//         }
    
// };

// class C: public B{
//     public:
//         void func(){
//             cout << "class C" << endl;
//         }
//         ~C(){
//             cout << "kill C" << endl;
//         }
// };

// int main(){
//     A* p = new B;
//     p->func();
//     B* q = new C;
//     q->func();
//     delete p;
//     delete q;
//     A* c = new C;
//     c->func();
//     delete c;
//     system("pause");
//     return 0;
// }
//?1?7?1?7?1?7?1?7?1?7?1?7?1?7?0?0?1?7?1?7?1?7?1?7?1?7?1?7+::?1?7?1?7?1?7?0?3?1?7?1?7?1?7protected?1?7?1?7public?1?7?0?5?1?7?0?3?1?7?1?7?1?7?1?7
// class Base  //abstract class  
// {  
//     public:  
//         virtual ~Base(){}//virtual, not pure  
//         virtual void Hiberarchy() const = 0;//pure virtual  
// };  

// void Base::Hiberarchy() const //pure virtual also can have function body  
// {  
//    cout <<"Base::Hiberarchy" << endl;  
// }  

// class Derived : public Base  
// {  
//     public:  
//         Derived(){}  
//         virtual void Hiberarchy() const  
//         {  
//             Base::Hiberarchy();  
//             cout <<"Derived::Hiberarchy" << endl;  
//         }  
//         virtual void foo(){}  
// };  


// int main()  
// {  
//    Base* pb=new Derived();  
//    pb->Hiberarchy();  
//    pb->Base::Hiberarchy();  
//    system("pause");
//    return 0;  
// }

/**************?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?1****************/
//?0?8?1?7?1?7?1?7?1?7?1?7?1?7
// void bubbleSort(vector<int> &body){
//     int n = body.size();
//     bool flag = false;
//     for(int i = 0; i < n; ++i)
//     {
//         for(int j = 1; j < n; ++j){
//             if(body[j] < body[j-1]){
//                 swap(body[j], body[j-1]);
//                 flag = true;
//             }
//         }
//         if(flag)
//             flag = false;
//         else
//             break;
//     }
// }

// //?0?1?1?7?1?7?0?5?1?7?1?7?1?7?1?7?1?7?1?7
// void directSelect(vector<int> &body){
//     int n = body.size(), index = 0;
//     for(int i = 0; i < n; ++i)
//     {
//         index = i;
//         for(int j = i+1; j < n; ++j){
//             if(body[j] < body[index])
//                 index = j;
//         }
//         int tmp = body[i];
//         body[i] = body[index];
//         body[index] = tmp;
//     }
// }

// //?0?1?1?7?0?0?1?7?1?7?1?7?1?7?1?7?1?7?1?7
// void directInsert(vector<int> &a){
//     int n = a.size();
//     for(int i = 1; i < n; ++i){
//         int j, val = a[i];
//         for(j = i-1; j >= 0 && val < a[j]; --j)
//         {
//             a[j+1] = a[j];
//         }
//         a[j+1] = val;
//     }
// }

// //?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7
// void quickSort(vector<int>& a, int beg, int end){
//     if(beg >= end)
//         return;
//     int tmp = a[beg], i = beg, j = end;
//     while(i < j){
//         while(i < j && a[j] > tmp)
//             --j;
//         if(i < j)
//             a[i] = a[j];
//         while(i < j && a[i] <= tmp)
//             ++i;
//         if(i < j)
//             a[j] = a[i];
//     }
//     a[i] = tmp;
//     quickSort(a, beg, i-1);
//     quickSort(a, i+1, end);
// }
// //?1?7?1?7?1?7?1?7?1?7?1?7
// void updateHeap(vector<int>& a, int i, int n){
//     int iMax = i;
//     if(2*i+1 < n && a[2*i+1] > a[iMax])
//         iMax = 2*i+1;
//     if(2*(i+1) < n && a[2*(i+1)] > a[iMax])
//         iMax = 2*(i+1);
//     if(iMax != i){
//         int tmp = a[iMax];
//         a[iMax] = a[i];
//         a[i] = tmp;
//         updateHeap(a, iMax, n);
//     }
// }

// void heapSort(vector<int>& a){
//     int n = a.size();
//     for(int i = (n-1)/2; i >= 0; --i){
//         updateHeap(a, i, n);
//     }
//     for(int i = n-1; i > 0; --i)
//     {
//         int tmp = a[0];
//         a[0] = a[i];
//         a[i] = tmp;
//         updateHeap(a, 0, i);
//     }
// }

// int main(){
//     int n, num;
//     char ch;
//     cin >> n;
//     vector<int> test;
//     for(int i = 0; i < n; ++i){
//         while((cin >> num).get(ch)){
//             test.push_back(num);
//             if(ch == '\n')
//                 break;
//         }
//         //directSelect(test);
//         //directInsert(test);
//         //bubbleSort(test);
//         //quickSort(test, 0, test.size()-1);
//         //heapSort(test);
//         for(auto num : test)
//             cout << num << " ";
//         cout << endl;
//         test.clear();
//     }
//     system("pause");
//     return 0;
// }

//?1?7?1?7?1?7?0?0?1?7?1?7?1?7?1?7?1?7?0?8?1?7亯?1?7?1?7?1?7?1?7?1?7?1?5?1?7?1?7?1?4?1?7?1?7壬?1?7?1?7д?0?8?1?7?1?7?0?1?1?7?0?3
// class CBase
// {
// public:
//     void  my(int a,int b){
//         cout << "?1?7?1?7?1?7?1?7" << endl;
//     }
// };

// class CDerivedA : public CBase
// {
// public:
//     void my(int a ){
//         cout << "?1?7?1?7?1?7?1?7" << endl;//?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?1?7?0?4
//     }
// };

// int main()
// {
//     CDerivedA ptr;
//     CBase* p = new CDerivedA();
//     ptr.my(5);//?1?7?1?71?1?7?1?7?1?7?1?7?1?7?1?7?0?5?1?7?1?7?1?7?1?7?1?7?1?7
//     ptr.CBase::my(5,5);//
//     system("pause");
//     return 0;
// }

//?1?7?1?7?1?7?1?7memcpy,?1?7?1?7?1?7?1?7c?1?7?1?7?1?7?1?7?0?7?1?7?1?7?1?7?1?7?1?7β?0?8?1?7?1?7'\0'?1?7?1?7?1?7?0?8?1?7?1?7?0?5?0?2?1?7?0?5?1?7?1?7?1?7?1?7?1?7string?1?7?1?7?0?3?1?7?1?7?1?7?0?7?1?7?0?5
// int main(){
//     char ch [] = " helloworld";
//     char* str = ch;
//     string body = "";
//     char *p = str;
//     while(*p != '\0'){
//         if(*p != ' ')
//             body += *p;
//         else
//             body += "%20";
//         p++;
//     }
//     cout << body << endl;
//     str = &body[0];
//     //memcpy(str, &body[0], strlen(body.c_str())+1);
//     //memcpy(str, &body[0], body.size()+1);
//     while(*str != '\0'){
//         cout << *str;
//         str++;
//     }
//     cout << '/' << endl;
//     system("pause");
//     return 0;
// }

// bool test(unordered_map<char, int>& list, unordered_map<char, int>& now){
//     for(auto it : list)
//         if(it.second > now[it.first])
//             return false;
//     return true;
// }

// string minWindow(string s, string t) {
//     unordered_map<char, int> list, now;
//     for(auto ch : t)
//         list[ch]++;
//     int n = s.size(), l = 0, r = 1, minL = 0, minR, minLen = s.size();
//     vector<pair<char, int>> body;
//     for(int i = 0; i < n; ++i){
//         if(list[s[i]] != 0){
//             body.push_back(make_pair(s[i], i));
//             ++now[s[i]];
//         } 
//     }
//     if(!test(list, now))
//         return "";
//     now.clear();
//     n = body.size();
//     minR = n-1;
//     ++now[body[l].first];
//     while(1){
//         while(r < n && !test(list, now)){
//             ++now[body[r].first];
//             ++r;
//         }
//         if(r == n && !test(list, now))
//             break;
//         --r;
//         --now[body[r].first];
//         // if(body[l].second == 3){
//         //     for(auto it : now)
//         //         cout << it.first << now[it.first] << endl;
//         // }
//         while(l <= r)
//         {
//             // if(!test(list, now))
//             //     cout << "ok" << endl;
//             --now[body[l].first];
//             ++l;
//             if(!test(list, now)){
//                 --l;
//                 ++now[body[l].first];
//                 if(body[r].second-body[l].second+1 < minLen){
//                     minL = l;
//                     minR = r;
//                     //cout << body[minL].second << " " << body[minR].second << endl;
//                     minLen = body[minR].second - body[minL].second + 1;
//                 }
//                 --now[body[l].first];
//                 ++l;
//                 break;
//             }
//         }
//     }
//     return s.substr(body[minL].second, minLen);
// }
// int main(){
//     string s = "ADOBCCODEBAC", t = "ABC";
//     string ans = minWindow(s, t);
//     cout << ans << endl;
//     system("pause");
//     return 0;
// }


//BFPRT算法，找到前k个值得最优算法，最坏时间复杂度O(n),
// int InsertSort(int array[], int left, int right);
// int GetPivotIndex(int array[], int left, int right);
// int Partition(int array[], int left, int right, int pivot_index);
// int BFPRT(int array[], int left, int right, int k);

// int main()
// {
//     int k = 8; // 1 <= k <= array.size
//     int array[20] = { 11,9,10,1,13,8,15,0,16,2,17,5,14,3,6,18,12,7,19,4 };

//     cout << "原数组：";
//     for (int i = 0; i < 20; i++)
//         cout << array[i] << " ";
//     cout << endl;

//     // 因为是以 k 为划分，所以还可以求出第 k 小值
//     cout << "第 " << k << " 小值为：" << array[BFPRT(array, 0, 19, k)] << endl;

//     cout << "变换后的数组：";
//     for (int i = 0; i < 20; i++)
//         cout << array[i] << " ";
//     cout << endl;
//     system("pause");
//     return 0;
// }

// /**
//  * 对数组 array[left, right] 进行插入排序，并返回 [left, right]
//  * 的中位数。
//  */
// int InsertSort(int array[], int left, int right)
// {
//     int temp;
//     int j;

//     for (int i = left + 1; i <= right; i++)
//     {
//         temp = array[i];
//         j = i - 1;

//         while (j >= left && array[j] > temp)
//         {
//             array[j + 1] = array[j];
//             j--;
//         }

//         array[j + 1] = temp;
//     }

//     return ((right - left) >> 1) + left;
// }

// /**
//  * 数组 array[left, right] 每五个元素作为一组，并计算每组的中位数，
//  * 最后返回这些中位数的中位数下标（即主元下标）。
//  *
//  * @attention 末尾返回语句最后一个参数多加一个 1 的作用其实就是向上取整的意思，
//  * 这样可以始终保持 k 大于 0。
//  */
// int GetPivotIndex(int array[], int left, int right)
// {
//     if (right - left < 5)
//         return InsertSort(array, left, right);

//     int sub_right = left - 1;

//     // 每五个作为一组，求出中位数，并把这些中位数全部依次移动到数组左边
//     for (int i = left; i + 4 <= right; i += 5)
//     {
//         int index = InsertSort(array, i, i + 4);
//         swap(array[++sub_right], array[index]);
//     }

//     // 利用 BFPRT 得到这些中位数的中位数下标（即主元下标）
//     return BFPRT(array, left, sub_right, ((sub_right - left + 1) >> 1) + 1);
// }

// /**
//  * 利用主元下标 pivot_index 进行对数组 array[left, right] 划分，并返回
//  * 划分后的分界线下标。
//  */
// int Partition(int array[], int left, int right, int pivot_index)
// {
//     swap(array[pivot_index], array[right]); // 把主元放置于末尾

//     int partition_index = left; // 跟踪划分的分界线
//     for (int i = left; i < right; i++)
//     {
//         if (array[i] < array[right])
//         {
//             swap(array[partition_index++], array[i]); // 比主元小的都放在左侧
//         }
//     }

//     swap(array[partition_index], array[right]); // 最后把主元换回来

//     return partition_index;
// }

// /**
//  * 返回数组 array[left, right] 的第 k 小数的下标
//  */
// int BFPRT(int array[], int left, int right, int k)
// {
//     int pivot_index = GetPivotIndex(array, left, right); // 得到中位数的中位数下标（即主元下标）
//     int partition_index = Partition(array, left, right, pivot_index); // 进行划分，返回划分边界
//     int num = partition_index - left + 1;
//     if (num == k)
//         return partition_index;
//     else if (num > k)
//         return BFPRT(array, left, partition_index - 1, k);
//     else
//         return BFPRT(array, partition_index + 1, right, k - num);
// }

// union  dt
// {
//     int  a;   
//     char  b;  
//     double  c;
// }data2;
 
// int j = 0;
// const int i = 42;
static int const b = 0;
const int c = 0;
class B{
    public:
        static const int SIZE1 = 0 ;
        int array[SIZE1];
};
class A{
    protected:  static int const Inity = 10; 
    const int SIZE = 1;
};
//const int A::Inity = 10;

#define S(x) 4*x*x+1
int main(){
    //constexpr const int *p = &i;
    //int *const q1 = &j;
    //constexpr int *q = &j;
    B bb;
    int aa[B::SIZE1];  
    int cc[0];
    int i = 6, j = 8;
    printf("%d\n", S(i+j));
    char c='a';
    if ('a'<c<='z') 
        printf("Low");
    else 
        printf("UP");
    double x = 2.0, y;
    y = x + 3/2;
    cout << y << endl;
    cout << x << endl;
    system("pause");
    return 0;
}
    
