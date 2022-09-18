char resposta;

  printf("Em que hórario você estuda?\n ");
  printf("Digite m-matutino ou v-Vespertino ou n-Noturno:\n");
  scanf("%s", &resposta);
    if (resposta == 'm')
    {
      printf("Bom dia!\n");
    }
    else if (resposta == 'v')
    {
      printf("Boa tarde!\n");
    }
    else if (resposta == 'n')
    {
      printf("Boa noite!\n");
    }
    else{
      printf("Inválido");
    }