int a, b;
  a = 5;
  b = a * (a++);
  printf("%d\n", b);

  a = 5;
  b = a * ++a;
  printf("%d\n", b);

  a = 5;
  b = a * a++;
  printf("%d\n", b);