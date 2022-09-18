int x = -5;
  float f = 2.5;
  char c;
  
  c = f;
  
	f = x;
  printf("Conervsão em Decimal: %.2f\n", f);
  f *= 5;
  printf("Operação Atribuída: %.2f\n", f);

  x = c;
  printf("Conervsão em Inteiro: %d\n", x);
  x += 3;
  printf("Operação Atribuída: %d\n", x);