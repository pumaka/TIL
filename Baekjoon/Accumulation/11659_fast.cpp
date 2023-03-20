// source : https://www.acmicpc.net/source/7329241

#include <unistd.h>

namespace io
{
  const int is = 1024 * 1024, os = 1024 * 512;
  char ib[is], *ip = ib;
  char ob[os + 16], *op = ob;

  inline char get()
  {
    if(ib + is == ip) syscall(0, 0, ip = ib, is);
    return *ip;
  }

  inline int scan()
  {
    int n = 0;
    while(get() <= ' ') ip++;
    while(get() >= '0') n = (n * 10) + (*ip++ & 15);
    return n;
  }

  inline void flush() { syscall(1, 1, op = ob, op - ob); }
  struct f { ~f() { flush(); } } flusher;

  inline void print(int n)
  {
    char temp[16], *t = temp;
    do *t++ = n % 10 | 48; while(n /= 10);
    do *op++ = *--t; while(t != temp);
    *op++ = '\n';
    if(op >= ob + os) flush();
  }
}

int main()
{
	int a[100001]{};
	int n = io::scan(), m = io::scan();
	for (int i = 1; i <= n; i++)
		a[i] = io::scan() + a[i - 1];
	for (int i = 1; i <= m; i++)
    {
		int x = io::scan(), y = io::scan();
		io::print(a[y] - a[x - 1]);
    }
}