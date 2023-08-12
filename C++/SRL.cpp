//1. pair : 두가지 자료형을 하나의 쌍으로 뭈을 수 있게 해 줌 (vector, algorithm 헤더 파일에 포함)
#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
pair<int, char> p;

scanf("%d %c", &p.first, &p.second);
printf("%d %c\n", p.first, p.second);

p.first = 1;
p.second = 'a';
printf("%d %c\n", p.first, p.second);

p = make_pair(3,'b');
printf("%d %c\n", p.first, p.second);

}

// //2. vector : 크기가 가변적인 배열, 동적으로 할당되어 크기를 자우자재로 변경할 수 있음
// #include <iostream>
// #include <cstdio>
// #include <vector>
// using namespace std;

// int main(int argc, const char * argv[]) {
// vector<int> v1 = {1, 2, 3};
// vector<pair<int, char>> v2;
// int a, b;
// char c, d;

// v1.push_back(5);
// v1.push_back(6);
// for (int i=0; i < v1.size(); i++) {
// printf("%d ", v1[i]);

// }
// printf("\n");

// a = v1.front();
// b = v1.back();
// printf("front: %d, back: %d\n", a, b);
// v1.pop_back();
// for (int i=0; i < v1.size(); i++) {
// printf("%d ", v1[i]);

// }
// printf("\n"); //vector에 pair도 들어간다!

// v2.push_back(make_pair(1, 'a'));
// v2.push_back(make_pair(2, 'b'));
// v2.push_back(make_pair(3, 'c'));
// for (int i=0; i < v2.size(); i++) {
// printf("<%d %c> ", v2[i].first, v2[i].second);

// }
// printf("\n");

// a = v2.front().first;
// c = v2.front().second;
// b = v2.back().first;
// d = v2.back().second;
// printf("front: <%d %c>\n", a, c);
// printf("back: <%d %c>\n", b, d);
// v2.clear();

// }

// //3. queue : FIFO 자료구조 queue헤더 파일로 사용 BFS에 매우 유용
// #include <iostream>
// #include <cstdio>
// #include <queue>
// using namespace std;

// int main(int argc, const char * argv[]) {
// queue<int> q1;
// queue<pair<int, char>> q2;
// int a, b;
// int n;
// char c, d;

// q1.push(1);
// q1.push(2);
// q1.push(3);
// q1.push(4);
// q1.push(5);
// q1.push(6);
// a = q1.front();
// b = q1.back();
// n = q1.size();

// for(int i=0; i<n; i++){
// printf("%d ", q1.front()); q1.pop();

// }
// printf("\n");

// printf("front: %d, back: %d\n", a, b);
// q2.push(make_pair(1, 'a'));
// q2.push(make_pair(2, 'b'));
// q2.push(make_pair(3, 'c'));
// q2.push(make_pair(4, 'd'));
// q2.push(make_pair(5, 'e'));

// a = q2.front().first;
// c = q2.front().second;
// b = q2.back().first;
// d = q2.back().second;
// n = q2.size();
// for(int i=0; i<n; i++){
// printf("<%d %c> ", q2.front().first, q2.front().second);
// q2.pop();

// }
// printf("\n");
// printf("front: <%d %c>, back: <%d %c>\n", a, c, b, d);

// }

// //4. stack : LIFO(Last In First Out)자료구조 stack 헤더파일 사용
// #include <iostream>
// #include <cstdio>
// #include <stack>
// using namespace std;

// int main(int argc, const char * argv[]) {
// stack<int> s1;
// stack<pair<int, char>> s2;
// int a, b;
// int n;
// char c, d;

// s1.push(1); s1.push(2); s1.push(3);
// s1.push(4); s1.push(5); s1.push(6);

// a = s1.top();
// n = s1.size();

// for(int i=0; i<n; i++){
// printf("%d ", s1.top()); s1.pop();

// }
// printf("\n"); printf("top: %d\n", a);

// s2.push(make_pair(1, 'a'));
// s2.push(make_pair(2, 'b'));
// s2.push(make_pair(3, 'c'));
// s2.push(make_pair(4, 'd'));
// s2.push(make_pair(5, 'e'));

// a = s2.top().first;
// c = s2.top().second;
// n = s2.size();
// for(int i=0; i<n; i++){
// printf("<%d %c> ", s2.top().first, s2.top().second);
// s2.pop();

// }
// printf("\n");
// printf("top: <%d %c>\n", a, c);

// }
// //5. set : 연관컨테이너, key라 불리는 원소들의 집합으로 이뤄짐, 중복 허용되지 않고 insert()로 삽입, 오름차순 정렬
// #include <iostream>
// #include <cstdio>
// #include <set>
// using namespace std;

// int main(int argc, const char * argv[]) {
// set<int> s1;
// s1.insert(1); s1.insert(2); s1.insert(6);
// s1.insert(5); s1.insert(4); s1.insert(3);

// set<int>::iterator it;

// for (it = s1.begin(); it != s1.end(); it++) {
// printf("%d ", *it);

// }
// printf("\n");

// it = s1.find(7);
// printf("%d\n", *it);

// it = s1.find(6);
// printf("%d\n", *it);

// }
// //6. map : 연관컨테이너, <key, value>쌍으로 저장, key 중복 허용되지 않고 insert()로 삽입, 오름차순 정렬, []연산자 제공으로 바로 원소 value에 접근 가능
// #include <iostream>
// #include <cstdio>
// #include <map>

// using namespace std;

// int main(int argc, const char * argv[]) {
// map<char, int> m1;
// m1.insert(make_pair('a', 1)); m1.insert(make_pair('e', 5));
// m1.insert(make_pair('c', 3)); m1.insert(make_pair('d', 4));
// m1.insert(make_pair('b', 2));

// m1['e'] = 6;
// m1['f'] = 7;

// map<char, int>::iterator it;
// for (it = m1.begin(); it != m1.end(); it++) {
// printf("<%c %d> ", (*it).first, (*it).second);

// }
// printf("\n");
// it = m1.find('c');
// printf("%d\n", (*it).second);
// it = m1.find('d');
// printf("%d\n", (*it).second);
// m1.erase('a');
// m1.erase('c');

// for (it = m1.begin(); it != m1.end(); it++) {
// printf("<%c %d> ", (*it).first, (*it).second);

// } printf("\n");

// }

// //7. priority queue : 우선순위 queue를 구현한것 queue 헤더파일 사용, 기본적으로 내림차순으로 정렬
// #include <iostream>
// #include <cstdio>
// #include <queue>

// using namespace std;

// int main(int argc, const char * argv[]) {
// priority_queue< int, vector<int>, less<int> > q;
// int n;
// q.push(3); q.push(2);
// q.push(5); q.push(4);
// q.push(1); q.push(6);

// printf("top: %d\n", q.top());
// n = q.size();

// for(int i=0; i<n; i++){
// printf("%d ", q.top());
// q.pop();

// }
// printf("\n");

// }