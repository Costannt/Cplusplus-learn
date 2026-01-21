auto会略去顶层const，decltype保留。
int i = 0, &r = i;
//相同
auto a = i;
decltype(i) b = i;

//不同 d 是一个 int&
auto c = r;
decltype(r) d = r;