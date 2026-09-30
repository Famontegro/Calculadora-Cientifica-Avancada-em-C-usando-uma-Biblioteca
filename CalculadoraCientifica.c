#include <stdio.h>

int pag1, pagCreditos, pag2, pag3;

void menuP(){
    printf("\n\n\033[1mCalculadora Cientifica\033[0m");
    printf("\n\nEscolha uma opcao:");
    
    printf("\n(1): Soma");
    printf("\n(2): Subtracao");
    printf("\n(3): Multiplicacao");
    printf("\n(4): Divisao");
    printf("\n(5): Outros");
    printf("\n(6): Creditos");
    printf("\n(0): Encerrar programa");
    printf("\nEscolha: ");
    scanf("%d", &pag1);
}

float calcularSoma(){   
     float n1, n2, resultado;
     printf("\nDigite um numero: ");
     scanf("%g", &n1);
     printf("\nDigite outro numero: ");
     scanf("%g", &n2);
     
     return n1 + n2;    
}
void menuSoma(){
      int pagSoma;
      do{
            printf("\n\n(1): Calcular Soma");
            printf("\n(0): Voltar para primeira pagina");
            printf("\nEscolha: ");
            scanf("%d", &pagSoma);
            if(pagSoma == 1){
                        printf("A soma dos numero eh igual a %g", calcularSoma());
            }else if(pagSoma == 0){
                  
            }else{
                  printf("\nMensagem Fora dos parametros");
            }
      }while(pagSoma != 0);
}

float calcularSub(){
      float n1, n2, resultado;
      printf("\nDigite um numero: ");
      scanf("%g", &n1);
      printf("\nDigite outro numero: ");
      scanf("%g", &n2);
      
      return n1 - n2;
}
void menuSub(){
      int pagSub;
      do{
            printf("\n\n(1): Calcular Subtracao");
            printf("\n(0): Voltar para primeira pagina");
            printf("\nEscolha: ");
            scanf("%d", &pagSub);
            if(pagSub == 1){
                  printf("A subtracao dos numero eh igual a %g", calcularSub());
            }else if(pagSub == 0){
                  
            }else{
                  printf("\nMensagem Fora dos parametros");
            }
      }while(pagSub != 0);
}

float calcularMul(){
      float n1, n2;
      printf("\nDigite um numero: ");
      scanf("%g", &n1);
      printf("\nDigite outro numero: ");
      scanf("%g", &n2);
      
      return n1 * n2;
}
void menuMul(){
     int pagMul;
       do{
            printf("\n\n(1): Calcular Multiplicacao");
            printf("\n(0): Voltar para primeira pagina");
            printf("\nEscolha: ");
            scanf("%d", &pagMul);
            if(pagMul == 1){
                       printf("A multiplicacao dos numero eh igual a %g", calcularMul());
            }else if(pagMul == 0){
                  
            }else{
                  printf("\nMensagem Fora dos parametros");
            }
    }while(pagMul != 0); 
}

float calcularDiv(){
      float n1, n2;
      printf("\nDigite um numero: ");
      scanf("%g", &n1);
      printf("\nDigite um divisor: ");
      scanf("%g", &n2);
      
      if(n2 == 0){
            return 0;      
      }else{
            return n1 / n2;
      }
}
void menuDiv(){
     int pagDiv;
     float resultadoDiv;

       do{
            printf("\n\n(1): Calcular Divisao");
            printf("\n(0): Voltar para primeira pagina");
            printf("\nEscolha: ");
            scanf("%d", &pagDiv);
            if(pagDiv == 1){
                      resultadoDiv = calcularDiv();
                      if(resultadoDiv == 0){
                                     printf("\nIndeterminado");
                      }else{
                                    printf("A divisao dos numero eh igual a %g", resultadoDiv);
                      }
            }else if(pagDiv == 0){
                  
            }else{
                  printf("\nMensagem Fora dos parametros");
                  printf("\n");
            }
    }while(pagDiv != 0); 
}

void menuP2(){
     printf("\n\nEscolha uma opcao:");
      printf("\n(1): Calcular Raiz Quadrada");
      printf("\n(2): Calcular Fatorial");
      printf("\n(3): Calcular com Expoente");
      printf("\n(4): Porcentagem");
      printf("\n(5): Numeros primos");
      printf("\n(6): Formulas Gerais");
      printf("\n(0): Voltar para o Menu");
      
      printf("\nEscolha: ");
      scanf("%d", &pag2);        
}

float raizQuadrada(float numero){
      float chute, anterior;
      
      chute = numero;
      
      do{
            anterior = chute;
            chute = (chute + numero / chute) / 2;
      }while(chute != anterior);
      
      return chute;
}
void menuRaizQ(){
      int pagRaiz;
      float numero;
      do{
            printf("\n\n(1): Calcular Raiz Quadrada");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagRaiz);
            
            if(pagRaiz == 1){
                  printf("Digite um numero: ");
                  scanf("%g", &numero);

                  if(numero >= 0){
                        printf("A raiz quadrada do numero eh igual a %g", raizQuadrada(numero));
                  }else{
                        printf("Nao existe raiz quadrada de numero negativo");
                  }
            }else if(pagRaiz == 0){
            
            }else{
                  printf("\nMensagem Fora dos parametros");
            }
      }while(pagRaiz != 0);
}

long long calcularFat(){
     long long resultado = 1;
      int i, numero;
      
      printf("Digite um numero: ");
      scanf("%d", &numero);
      
      for(i=1; i <= numero; i++){
            resultado = resultado * i;         
      }
      
      return resultado;
}
void menuFat(){
      int pagFat;
      do{
            printf("\n\n(1): Calcular Fatorial");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagFat);

            if(pagFat == 1){
                  printf("O fatorial do numero eh igual a %lld", calcularFat());
            }else if(pagFat == 0){

            }else{
                  printf("\nMensagem Fora dos parametros");
            }  
      }while(pagFat != 0);
}

long long calcularExp(){
     long long n1, resultado = 1;
     int i, n2;
     
     printf("Digite um numero: ");
     scanf("%lld", &n1);
     printf("Digite o expoente: ");
     scanf("%d", &n2);
     
     for(i=1; i <= n2; i++){
              resultado = resultado * n1;         
     } 
     return resultado;
}
void menuExp(){         
      int pagExp;
      do{
            printf("\n\n(1): Calcular Expoente");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagExp);
            
            if(pagExp == 1){
                        printf("O resultado da exponenciacao eh igual a %lld", calcularExp());
            }else if(pagExp == 0){
            
            }else{
                        printf("\nMensagem Fora dos parametros");
            }  
      }while(pagExp != 0);
}

float calcularPor(){
      float n1, n2, resultado;
      
      printf("Digite a porcentagem: ");
      scanf("%g", &n1);
      printf("Digite um numero: ");
      scanf("%g", &n2);
      
      n1 = n1 / 100;
      resultado = n2 * n1;
      
      return resultado;
}
void menuPor(){
     int pagPor;
     do{
            printf("\n\n(1): Calcular Porcentagem");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagPor);
            
            if(pagPor == 1){
                        printf("O resultado da porcentagem eh igual a %g", calcularPor());
            }else if(pagPor == 0){
            
            }else{
                        printf("\nMensagem Fora dos parametros");
            } 
     }while(pagPor != 0);
}

int numeroPrimo(){
      int numero, i;

      printf("Digite um numero: ");
      scanf("%d", &numero);

      if(numero < 2){
            return 0;
      }

      for(i = 2; i < numero; i++){
            if(numero % i == 0){
                  return 0;
            }
      }

      return 1;
}
void menuNP(){
      int pagNP, resultadoNP;
      do{
            printf("\n\n(1): Verificar se eh Numero Primo");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagNP);
            
            if(pagNP == 1){
                  resultadoNP = numeroPrimo();
                  if(resultadoNP == 0){
                        printf("O numero digitado eh primo");
                  }else if (resultadoNP == 1){
                        printf("O numero digitado nao eh primo");     
                  }
            }else if(pagNP == 0){
            
            }else{
                  printf("\nMensagem Fora dos parametros");
                  printf("\n");
            } 
      }while(pagNP != 0);
}


void menuP3(){
     printf("\n\nEscolha uma opcao:");
     printf("\n(1): Formulas do Cotidiano");
     printf("\n(2): Formulas de Formas Geometricas");
     printf("\n(3): Formulas Matematicas");
     printf("\n(4): Formulas da Fisica"); 
     printf("\n(0): Voltar para pagina anterior");
     printf("\nEscolha: ");
     scanf("%d", &pag3);   
}


void calculoCelciusFahrenheit(){
      float cel, resultado;

      printf("Digite uma temperatura em graus Celcius: ");
      scanf("%g", &cel);

      resultado = (cel * 1.8) + 32;

      printf("o resultado da conversao de graus para fahrenheit eh igual a %g", resultado);
}
void calculoCelciusKelvin(){
      float cel, resultado;

      printf("Digite uma temperatura em graus Celcius: ");
      scanf("%g", &cel);

      resultado = cel + 273.15;

      printf("o resultado da conversao de graus para kelvin eh igual a %g", resultado);
}
void calculoFahrenheitCelcius(){
      float fah, resultado;

      printf("Digite uma temperatura em Fahrenheit: ");
      scanf("%g", &fah);

      resultado = (fah - 32) * 5.0 / 9.0;
      
      printf("o resultado da conversao de fahrenheit para celcius eh igual a %g", resultado);
}
void calculoFahrenheitKelvin(){
      float fah, resultado;

      printf("Digite uma temperatura em Fahrenheit: ");
      scanf("%g", &fah);

      resultado = (fah - 32) * (5.0 / 9.0) + 273.15;
      
      printf("o resultado da conversao de fahrenheit para celcius eh igual a %g", resultado);
}
void calculoKelvinCelcius(){
      float kel, resultado;

      printf("Digite uma temperatura em Kelvin: ");
      scanf("%g", &kel);

      resultado = kel - 273.15;
      
      printf("o resultado da conversao de kelvin para celcius eh igual a %g", resultado);
}
void calculoKelvinFahrenheit(){
      float kel, resultado;

      printf("Digite uma temperatura em Kelvin: ");
      scanf("%g", &kel);

      resultado = (kel - 273.15) * 1.8 + 32;
      
      printf("o resultado da conversao de kelvin para fahrenheit eh igual a %g", resultado);
}
void menuTemperatura(){
      int pagTemperatura;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Converter Celcius para Fahrenheit");
            printf("\n(2): Converter Celcius para Kelvin");
            printf("\n(3): Converter Fahrenheit para Celcius");
            printf("\n(4): Converter Fahrenheit para Kelvin");
            printf("\n(5): Converter Kelvin para Celcius");
            printf("\n(6): Converter Kelvin para Fahrenheit"); 
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagTemperatura); 
            
            if(pagTemperatura < 0 || pagTemperatura > 6){
                  printf("Mensagem fora dos parametros");
            }else if(pagTemperatura == 1){
                  calculoCelciusFahrenheit();
            }else if(pagTemperatura == 2){
                  calculoCelciusKelvin();
            }else if(pagTemperatura == 3){
                  calculoFahrenheitCelcius();
            }else if(pagTemperatura == 4){
                  calculoFahrenheitKelvin();
            }else if(pagTemperatura == 5){
                  calculoKelvinCelcius();
            }else if(pagTemperatura == 6){
                  calculoKelvinFahrenheit();
            }
      }while(pagTemperatura != 0);
}

void calculoIMC(){
      float IMC, peso, altura;

      printf("Digite o peso: ");
      scanf("%g", &peso);
      printf("Digite a altura em metros: ");
      scanf("%g", &altura);

      if(altura <= 0 || peso <= 0){
            printf("Pessoa invalida!");
      }else{
            IMC = peso / (altura * altura);
            printf("\nO IMC eh igual a %g", IMC);
            if(IMC < 18.5 && IMC > 0){
                printf("\nA pessoa esta abaixo do peso");
            }else if(IMC >= 18.5 && IMC <= 24.9){
                printf("\nA pessoa esta no peso ideal");
            }else if(IMC >= 25 && IMC <= 29.9){
                printf("\nA pessoa esta acima do peso");
            }else{
                printf("\nA pessoa esta obesa");
            }
      }
}

void calculoJSDias(){
      float capital, taxa, tempo, juros, montante;

      printf("Digite o capital inicial: ");
      scanf("%g", &capital);

      printf("Digite a taxa de juros (em %%): ");
      scanf("%g", &taxa);

      printf("Digite o tempo em dias: ");
      scanf("%g", &tempo);

      taxa = taxa / 100;

      juros = capital * taxa * tempo;
      montante = capital + juros;

      printf("\nOs juros sao iguais a R$ %g", juros);
      printf("\nO montante final eh igual a R$ %g", montante);
}
void calculoJSMeses(){
      float capital, taxa, tempo, juros, montante;

      printf("Digite o capital inicial: ");
      scanf("%g", &capital);

      printf("Digite a taxa de juros (em %%): ");
      scanf("%g", &taxa);

      printf("Digite o tempo em Meses: ");
      scanf("%g", &tempo);

      taxa = taxa / 100;

      juros = capital * taxa * tempo;
      montante = capital + juros;

      printf("\nOs juros sao iguais a R$ %g", juros);
      printf("\nO montante final eh igual a R$ %g", montante);
}
void calculoJSAnos(){
      float capital, taxa, tempo, juros, montante;

      printf("Digite o capital inicial: ");
      scanf("%g", &capital);

      printf("Digite a taxa de juros (em %%): ");
      scanf("%g", &taxa);

      printf("Digite o tempo em Anos: ");
      scanf("%g", &tempo);

      tempo = tempo * 12;

      taxa = taxa / 100;

      juros = capital * taxa * tempo;
      montante = capital + juros;

      printf("\nOs juros sao iguais a R$ %g", juros);
      printf("\nO montante final eh igual a R$ %g", montante);
}
void menuJS(){
      int pagJS;

      printf("\nEscolha a unidade da taxa e do tempo:");
      printf("\n(1): Dias");
      printf("\n(2): Meses");
      printf("\n(3): Anos");
      printf("\nEscolha: ");
      scanf("%d", &pagJS);

      if(pagJS < 1 || pagJS > 3){
            printf("Mensagem fora dos parametros");
      }else if(pagJS == 1){
            calculoJSDias();
      }else if(pagJS == 2){
            calculoJSMeses();
      }else if(pagJS == 3){
            calculoJSAnos();
      }
}

void calculoJC(int unidadeTempo, int unidadeTaxa){
      float capital, taxa, tempo, montante, juros;
      int i;

      printf("\nDigite o capital inicial: ");
      scanf("%f", &capital);

      printf("Digite a taxa de juros (em %%): ");
      scanf("%f", &taxa);

      printf("Digite o tempo: ");
      scanf("%f", &tempo);

      taxa = taxa / 100;

      if(unidadeTaxa == 1){
            if(unidadeTempo == 2){
                  tempo = tempo * 30;
            }else if(unidadeTempo == 3){
                  tempo = tempo * 365;
            }

      }else if(unidadeTaxa == 2){
            if(unidadeTempo == 1){
                  tempo = tempo / 30;
            }else if(unidadeTempo == 3){
                  tempo = tempo * 12;
            }

      }else if(unidadeTaxa == 3){
            if(unidadeTempo == 1){
                  tempo = tempo / 365;
            }else if(unidadeTempo == 2){
                  tempo = tempo / 12;
            }
      }

      montante = capital;

      for(i = 0; i < tempo; i++){
            montante = montante * (1 + taxa);
      }

      juros = montante - capital;

      printf("\nOs juros sao iguais a R$ %g", juros);
      printf("\nO montante final eh igual a R$ %g", montante);
}
void menuJC(){
      int pagTempoJC, pagTaxaJC;

      printf("\nEscolha a unidade de tempo:");
      printf("\n(1): Dias");
      printf("\n(2): Meses");
      printf("\n(3): Anos");
      printf("\nEscolha: ");
      scanf("%d", &pagTempoJC);

      printf("\n\nEscolha a unidade de taxa:");
      printf("\n(1): Dias");
      printf("\n(2): Meses");
      printf("\n(3): Anos");
      printf("\nEscolha: ");
      scanf("%d", &pagTaxaJC);

      if(pagTempoJC < 1 || pagTempoJC > 3 || pagTaxaJC < 1 || pagTaxaJC > 3){
            printf("Mensagem fora dos parametros");
      }else{
            calculoJC(pagTempoJC, pagTaxaJC);
      }
}

void calculoPorcentagemAumento(){
      float valor, porcentagem, aumento, valorFinal;

      printf("\nDigite o valor: ");
      scanf("%f", &valor);

      printf("Digite a porcentagem de aumento: ");
      scanf("%f", &porcentagem);

      aumento = valor * (porcentagem / 100);
      valorFinal = valor + aumento;

      printf("\nO aumento foi de R$ %g", aumento);
      printf("\nO valor final eh R$ %g", valorFinal);
}
void menuPorcentagemAumento(){
      int pagPorcentagemAumento;

      do{
            printf("\n\n(1): Calcular Porcentagem de Aumento");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagPorcentagemAumento);

            if(pagPorcentagemAumento == 1){
                  calculoPorcentagemAumento();
            }else if(pagPorcentagemAumento == 0){
            
            }else{
                  printf("\nMensagem Fora dos parametros");
            }
      }while(pagPorcentagemAumento != 0);
}
void calculoPorcentagemDesconto(){
      float valor, porcentagem, desconto, valorFinal;

      printf("\nDigite o valor: ");
      scanf("%f", &valor);

      printf("Digite a porcentagem de desconto: ");
      scanf("%f", &porcentagem);

      desconto = valor * (porcentagem / 100);
      valorFinal = valor - desconto;

      printf("\nO desconto foi de R$ %g", desconto);
      printf("\nO valor final eh R$ %g", valorFinal);
}
void menuPorcentagemDesconto(){
      int pagPorcentagemDesconto;
      
      do{
            printf("\n\n(1): Calcular Porcentagem de Desconto");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagPorcentagemDesconto);

            if(pagPorcentagemDesconto == 1){
                  calculoPorcentagemDesconto();
            }else if(pagPorcentagemDesconto == 0){
            
            }else{
                  printf("\nMensagem Fora dos parametros");
            }
      }while(pagPorcentagemDesconto != 0);
}

void calcularCV(int unidadeOrigem, int unidadeDestino){
      float velocidade, resultado;

      printf("\nDigite a velocidade: ");
      scanf("%f", &velocidade);

      if(unidadeOrigem == 1){
            if(unidadeDestino == 2){
                  resultado = velocidade / 3.6;
            }else if(unidadeDestino == 3){
                  resultado = velocidade / 1.609;
            }else{
                  resultado = velocidade;
            }

      }else if(unidadeOrigem == 2){
            if(unidadeDestino == 1){
                  resultado = velocidade * 3.6;
            }else if(unidadeDestino == 3){
                  resultado = velocidade * 2.237;
            }else{
                  resultado = velocidade;
            }

      }else if(unidadeOrigem == 3){
            if(unidadeDestino == 1){
                  resultado = velocidade * 1.609;
            }else if(unidadeDestino == 2){
                  resultado = velocidade / 2.237;
            }else{
                  resultado = velocidade;
            }
      }

      printf("\nResultado: %g", resultado);
}
void menuCV(){
      int unidadeOrigem, unidadeDestino;

      printf("\nEscolha a unidade de origem:");
      printf("\n(1): km/h");
      printf("\n(2): m/s");
      printf("\n(3): mph");
      printf("\nEscolha: ");
      scanf("%d", &unidadeOrigem);

      printf("\n\nEscolha a unidade de destino:");
      printf("\n(1): km/h");
      printf("\n(2): m/s");
      printf("\n(3): mph");
      printf("\nEscolha: ");
      scanf("%d", &unidadeDestino);

      if(unidadeOrigem < 1 || unidadeOrigem > 3 ||
         unidadeDestino < 1 || unidadeDestino > 3){
            printf("\nMensagem fora dos parametros");
      }else{
            calcularCV(unidadeOrigem, unidadeDestino);
      }
}

void conversaoDistancia(int unidadeOrigem, int unidadeDestino){

      float distancia, metros, resultado;

      printf("\nDigite a distancia: ");
      scanf("%f", &distancia);

      if(unidadeOrigem == 1){
            metros = distancia;
      }else if(unidadeOrigem == 2){
            metros = distancia * 1000;
      }else if(unidadeOrigem == 3){
            metros = distancia / 100;
      }else if(unidadeOrigem == 4){
            metros = distancia * 1609.344;
      }else if(unidadeOrigem == 5){
            metros = distancia * 0.3048;
      }

      if(unidadeDestino == 1){
            resultado = metros;
            printf("\nResultado: %g metros", resultado);
      }else if(unidadeDestino == 2){
            resultado = metros / 1000;
            printf("\nResultado: %g Quilometros", resultado);
      }else if(unidadeDestino == 3){
            resultado = metros * 100;
            printf("\nResultado: %g Centimetros", resultado);
      }else if(unidadeDestino == 4){
            resultado = metros / 1609.344;
            printf("\nResultado: %g Milhas", resultado);
      }else if(unidadeDestino == 5){
            resultado = metros / 0.3048;
            printf("\nResultado: %g Pes", resultado);
      }
}
void menuCD(){
      int unidadeOrigem, unidadeDestino;

      printf("\nEscolha a unidade de origem:");
      printf("\n(1): Metros");
      printf("\n(2): Quilometros");
      printf("\n(3): Centimetros");
      printf("\n(4): Milhas");
      printf("\n(5): Pes");
      printf("\nEscolha: ");
      scanf("%d", &unidadeOrigem);

      printf("\n\nEscolha a unidade de destino:");
      printf("\n(1): Metros");
      printf("\n(2): Quilometros");
      printf("\n(3): Centimetros");
      printf("\n(4): Milhas");
      printf("\n(5): Pes");
      printf("\nEscolha: ");
      scanf("%d", &unidadeDestino);

      if(unidadeOrigem < 1 || unidadeOrigem > 5 ||
         unidadeDestino < 1 || unidadeDestino > 5){
            printf("\nMensagem fora dos parametros");
      }else{
            conversaoDistancia(unidadeOrigem, unidadeDestino);
      }
}

void menuCotidiano(){
      int pagCotidiano;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Conversao de temperatura");
            printf("\n(2): IMC");
            printf("\n(3): Juros Simples");
            printf("\n(4): Juros Composto");
            printf("\n(5): Porcentagem de Aumento");
            printf("\n(6): Porcentagem de desconto");
            printf("\n(7): Conversao de velocidade");
            printf("\n(8): Conversao de distancia");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagCotidiano); 
            
            if(pagCotidiano < 0 || pagCotidiano > 8){
                  printf("Mensagem fora dos parametros");
            }else if(pagCotidiano == 1){
                  menuTemperatura();
            }else if(pagCotidiano == 2){
                  calculoIMC();
            }else if(pagCotidiano == 3){
                  menuJS();
            }else if(pagCotidiano == 4){
                  menuJC();
            }else if(pagCotidiano == 5){
                  menuPorcentagemAumento();
            }else if(pagCotidiano == 6){
                  menuPorcentagemDesconto();
            }else if(pagCotidiano == 7){
                  menuCV();
            }else if(pagCotidiano == 8){
                  menuCD();
            }
      }while(pagCotidiano != 0);
}


void areaQuadrado(){
      float lado, resultado;

      printf("Digite o lado de um quadrado equilatero: ");
      scanf("%f", &lado);

      resultado = lado * lado;

      printf("A area do quadrado eh igual a %g", resultado);
}
void areaRetangulo(){
      float base, altura, resultado;

      printf("Digite a altura do retangulo: ");
      scanf("%f", &altura);
      printf("Agora digite a base: ");
      scanf("%f", &base);

      resultado = base * altura;

      printf("A area do retangulo eh igual a %g", resultado);
}
void areaTriangulo(){
      float base, altura, resultado;

      printf("Digite a altura do triangulo equilatero: ");
      scanf("%f", &altura);
      printf("Agora digite a base: ");
      scanf("%f", &base);

      resultado = (base * altura) / 2;

      printf("A area do triangulo eh igual a %g", resultado);
}
void areaCirculo(){
      float raio, resultado;

      printf("Digite o raio (diametro / 2) do circulo: ");
      scanf("%f", &raio);

      resultado = 3.141592 * (raio * raio);

      printf("A area do circulo eh igual a %g", resultado);
}
void menuGeometriaAreas(){
      int pagGeometriaAreas;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Area de um quadrado");
            printf("\n(2): Area de um retangulo");
            printf("\n(3): Area de um triangulo");
            printf("\n(4): Area de um circulo");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagGeometriaAreas);

            if(pagGeometriaAreas < 0 || pagGeometriaAreas > 4){
                  printf("Mensagem fora dos parametros");
            }else if(pagGeometriaAreas == 1){
                  areaQuadrado();
            }else if(pagGeometriaAreas == 2){
                  areaRetangulo();
            }else if(pagGeometriaAreas == 3){
                  areaTriangulo();
            }else if(pagGeometriaAreas == 4){
                  areaCirculo();
            }
      }while(pagGeometriaAreas != 0);    
}

void volumeCubo(){
      float lado, resultado;

      printf("Digite um dos lados de um cubo: ");
      scanf("%f", &lado);

      resultado = (lado * lado * lado);

      printf("O volume do cubo eh igual a %g", resultado);
}
void volumeParalelepipedo(){
      float largura, altura, comprimento, resultado;

      printf("Digite a largura do paralelepipedo: ");
      scanf("%f", &largura);
      printf("Agora digite o comprimento: ");
      scanf("%f", &comprimento);
      printf("Por ultimo, a altura: ");
      scanf("%f", &altura);

      resultado = largura * altura * comprimento;

      printf("O volume do paralelepipedo eh igual a %g", resultado);
}
void volumeCilindro(){
      float raio, altura, resultado;

      printf("Digite o raio (diametro / 2) de um cilindro: ");
      scanf("%f", &raio);
      printf("Agora digite a altura: ");
      scanf("%f", &altura);

      resultado = 3.141592 * (raio * raio) * altura;

      printf("O volume do cilindro eh igual a %g", resultado);
}
void volumeEsfera(){
      float raio, resultado;

      printf("Digite o raio (diametro / 2) da esfera: ");
      scanf("%f", &raio);

      resultado = (4 * 3.141592 * (raio * raio * raio)) / 3;

      printf("O volume da esfera eh igual a %g", resultado);
}
void volumeCone(){
      float raio, altura, resultado;

      printf("Digite o raio (diametro / 2) do cone: ");
      scanf("%f", &raio);
      printf("Agora a altura: ");
      scanf("%f", &altura);

      resultado = (3.141592 * (raio * raio) * altura) / 3;

      printf("O volume do cone eh igual a %g", resultado);
}
void volumePiramideQuadrada(){
      float base, altura, resultado;

      printf("Digite um lado da base quadrada da piramide: ");
      scanf("%f", &base);
      printf("Agora a altura da piramide: ");
      scanf("%f", &altura);

      resultado = ((base * base) * altura) / 3;

      printf("O volume da piramide de base quadrada eh igual a %g", resultado);
}
void volumePiramideRetangular(){
      float comprimentoBase, larguraBase, altura, resultado;

      printf("Digite o comprimento da base retangular da piramide: ");
      scanf("%f", &comprimentoBase);
      printf("Agora digite a largura da base retangular: ");
      scanf("%f", &larguraBase);
      printf("Agora a altura da piramide: ");
      scanf("%f", &altura);

      resultado = ((comprimentoBase * larguraBase) * altura) / 3;

      printf("O volume da piramide de base retangular eh igual a %g", resultado);
}
void volumePiramideTriangular(){
      float comprimentoBase, alturaBase, altura, resultado;

      printf("Digite o comprimento da base triangular da piramide: ");
      scanf("%f", &comprimentoBase);
      printf("Agora digite a altura da base triangular: ");
      scanf("%f", &alturaBase);
      printf("Agora a altura da piramide: ");
      scanf("%f", &altura);

      resultado = (((comprimentoBase * alturaBase) / 2) * altura) / 3;

      printf("O volume da piramide de base triangular eh igual a %g", resultado);
}
void volumePiramideCircular(){
      float raioBase, altura, resultado;

      printf("Digite o raio (diametro / 2) da base circular da piramide: ");
      scanf("%f", &raioBase);
      printf("Agora a altura da piramide: ");
      scanf("%f", &altura);

      resultado = ((3.141592 * (raioBase * raioBase)) * altura) / 3;

      printf("O volume da piramide de base circular eh igual a %g", resultado);
}
void menuVolumePiramide(){
      int pagVolumePiramide;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Piramide com base quadrada");
            printf("\n(2): Piramide com base retangular");
            printf("\n(3): Piramide com base triangular");
            printf("\n(4): Piramide com base circular");
            printf("\n(0): Voltar para a pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagVolumePiramide);

            if(pagVolumePiramide < 1 || pagVolumePiramide > 4){
                  printf("Mensagem fora dos parametros");
            }else if(pagVolumePiramide == 1){
                  volumePiramideQuadrada();
            }else if(pagVolumePiramide == 2){
                  volumePiramideRetangular();
            }else if(pagVolumePiramide == 3){
                  volumePiramideTriangular();
            }else if(pagVolumePiramide == 4){
                  volumePiramideCircular();
            }
      }while(pagVolumePiramide != 0);
}
void volumePrismaQuadrada(){
      float base, altura, resultado;

      printf("Digite um lado da base quadrada do prisma: ");
      scanf("%f", &base);
      printf("Agora a altura do prisma: ");
      scanf("%f", &altura);

      resultado = (base * base) * altura;

      printf("O volume do prisma de base quadrada eh igual a %g", resultado);
}
void volumePrismaRetangular(){
      float comprimentoBase, larguraBase, altura, resultado;

      printf("Digite o comprimento da base retangular do prisma: ");
      scanf("%f", &comprimentoBase);
      printf("Agora digite a largura da base retangular: ");
      scanf("%f", &larguraBase);
      printf("Agora a altura do prisma: ");
      scanf("%f", &altura);

      resultado = (comprimentoBase * larguraBase) * altura;

      printf("O volume do prisma de base retangular eh igual a %g", resultado);
}
void volumePrismaTriangular(){
      float comprimentoBase, alturaBase, altura, resultado;

      printf("Digite o comprimento da base triangular do prisma: ");
      scanf("%f", &comprimentoBase);
      printf("Agora digite a altura da base triangular: ");
      scanf("%f", &alturaBase);
      printf("Agora a altura do prisma: ");
      scanf("%f", &altura);

      resultado = ((comprimentoBase * alturaBase) / 2) * altura;

      printf("O volume do prisma de base triangular eh igual a %g", resultado);
}
void volumePrismaCircular(){
      float raioBase, altura, resultado;

      printf("Digite o raio (diametro / 2) da base circular do prisma: ");
      scanf("%f", &raioBase);
      printf("Agora a altura do prisma: ");
      scanf("%f", &altura);

      resultado = (3.141592 * (raioBase * raioBase)) * altura;

      printf("O volume do prisma de base circular eh igual a %g", resultado);
}
void menuVolumePrisma(){  
      int pagVolumePrisma;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Prisma com base quadrada");
            printf("\n(2): Prisma com base retangular");
            printf("\n(3): Prisma com base triangular");
            printf("\n(4): Prisma com base circular");
            printf("\n(0): Voltar para a pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagVolumePrisma);

            if(pagVolumePrisma < 0 || pagVolumePrisma > 4){
                  printf("Mensagem fora dos parametros");
            }else if(pagVolumePrisma == 1){
                  volumePrismaQuadrada();
            }else if(pagVolumePrisma == 2){
                  volumePrismaRetangular();
            }else if(pagVolumePrisma == 3){
                  volumePrismaTriangular();
            }else if(pagVolumePrisma == 4){
                  volumePrismaCircular();
            }
      }while(pagVolumePrisma != 0);
}
void menuGeometriaVolume(){
      int pagGeometriaVolume;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Volume de um cubo");
            printf("\n(2): Volume de um paralelepipedo");
            printf("\n(3): Volume de um cilindro");
            printf("\n(4): Volume de uma esfera");
            printf("\n(5): Volume de um cone");
            printf("\n(6): Volume de uma piramide");
            printf("\n(7): Volume de um prisma");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagGeometriaVolume);
            if(pagGeometriaVolume < 0 || pagGeometriaVolume > 7){
                  printf("Mensagem fora dos parametros");
            }else if(pagGeometriaVolume == 1){
                  volumeCubo();
            }else if(pagGeometriaVolume == 2){
                  volumeParalelepipedo();
            }else if(pagGeometriaVolume == 3){
                  volumeCilindro();
            }else if(pagGeometriaVolume == 4){
                  volumeEsfera();
            }else if(pagGeometriaVolume == 5){
                  volumeCone();
            }else if(pagGeometriaVolume == 6){
                  menuVolumePiramide();
            }else if(pagGeometriaVolume == 7){
                  menuVolumePrisma();
            }
      }while(pagGeometriaVolume != 0);      
}

void perimetroQuadrado(){
      float lado, resultado;

      printf("Digite o lado de um quadrado: ");
      scanf("%f", &lado);

      resultado = 4 * lado;

      printf("O perimetro do quadrado eh igual a %g", resultado);
}
void perimetroRetangulo(){
      float base, altura, resultado;

      printf("Digite a altura do retangulo: ");
      scanf("%f", &altura);
      printf("Agora digite a base: ");
      scanf("%f", &base);

      resultado = 2 * (base + altura);

      printf("O perimetro do retangulo eh igual a %g", resultado);
}
void perimetroTriangulo(){
      float lado1, lado2, lado3, resultado;

      printf("Digite o primeiro lado do triangulo: ");
      scanf("%f", &lado1);
      printf("Agora do segundo lado: ");
      scanf("%f", &lado2);
      printf("E o terceiro lado: ");
      scanf("%f", &lado3);

      resultado = lado1 + lado2 + lado3;

      printf("O perimetro do triangulo eh igual a %g", resultado);
}
void perimetroCirculo(){
      float raio, resultado;

      printf("Digite o raio (diametro / 2) do circulo: ");
      scanf("%f", &raio);

      resultado = 2 * 3.141592 * raio;

      printf("O perimetro do circulo (circunferencia) eh igual a %g", resultado);
}
void menuGeometriaPerimetro(){
      int pagGeometriaPerimetro;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Perimetro de um quadrado");
            printf("\n(2): Perimetro de um retangulo");
            printf("\n(3): Perimetro de um triangulo");
            printf("\n(4): Perimetro de um circulo (circunferencia)");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagGeometriaPerimetro);

            if(pagGeometriaPerimetro < 0 || pagGeometriaPerimetro > 4){
                  printf("Mensagem fora dos parametros");
            }else if(pagGeometriaPerimetro == 1){
                  perimetroQuadrado();
            }else if(pagGeometriaPerimetro == 2){
                  perimetroRetangulo();
            }else if(pagGeometriaPerimetro == 3){
                  perimetroTriangulo();
            }else if(pagGeometriaPerimetro == 4){
                  perimetroCirculo();
            }
      }while(pagGeometriaPerimetro != 0);       
}

void menuGeometria(){
      int pagGeometria;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Areas de Formas Geometricas");
            printf("\n(2): Volume de Formas Geometricas");
            printf("\n(3): Perimetro de Formas Geometricas");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagGeometria);

            if(pagGeometria < 0 || pagGeometria > 3){
                  printf("Mensagem fora dos parametros");
            }
            if(pagGeometria == 1){
            menuGeometriaAreas();
            }else if(pagGeometria == 2){
            menuGeometriaVolume();
            }else if(pagGeometria == 3){
            menuGeometriaPerimetro();     
            }
      }while(pagGeometria != 0);
}


void pitagorasHipotenusa(){
      float cateto1, cateto2, chute, anterior;

      printf("Digite o valor do primeiro cateto: ");
      scanf("%f", &cateto1);

      printf("Digite o valor do segundo cateto: ");
      scanf("%f", &cateto2);

      if(cateto1 > 0 && cateto2 > 0){
            chute = (cateto1 * cateto1) + (cateto2 * cateto2);

            do{
                  anterior = chute;
                  chute = (chute + ((cateto1 * cateto1) + (cateto2 * cateto2)) / chute) / 2;
            }while(chute != anterior);

            printf("A hipotenusa eh igual a %g", chute);
      }else{
            printf("Os dois catetos devem ser maior que 0 para o calculo ser feito!");
      }

}
void pitagorasCateto(){
      float cateto, hipotenusa, chute, anterior;

      printf("Digite o valor de um dos catetos: ");
      scanf("%f", &cateto);

      printf("Digite o valor da hipotenusa: ");
      scanf("%f", &hipotenusa);
      
      chute = (hipotenusa * hipotenusa) - (cateto * cateto) ;

      do{
            anterior = chute;
            chute = (chute + ((hipotenusa * hipotenusa) - (cateto * cateto)) / chute) / 2;
      }while(chute != anterior);

      printf("O valor do segundo cateto eh igual a %g", chute);
}
void menuPitagoras(){
      int pagPitagoras;

      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Achar a hipotenusa");
            printf("\n(2): Achar um dos catetos");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagPitagoras);

            if(pagPitagoras < 0 || pagPitagoras > 2){
                  printf("Mensagem Fora dos parametros");
            }else if(pagPitagoras == 1){
                  pitagorasHipotenusa();
            }else if(pagPitagoras == 2){
                  pitagorasCateto();
            }
      }while(pagPitagoras != 0);
}

void bhaskara(){
      float a, b, c, delta, raiz1, anterior, raiz2, chuteRaiz;

      printf("Sintaxe: x^2 + 2x - 4 = 0");
      printf("\na = 1, b = 2, c = -4");
      printf("\n\nSabendo disso, digite o seu valor do a: ");
      scanf("%f", &a);
      printf("Agora do b: ");
      scanf("%f", &b);
      printf("E do c: ");
      scanf("%f", &c);

      if(a == 0){
            printf("O valor de A nao pode ser 0.");
      }else{
            delta = (b * b) - 4 * a * c;

            if(delta < 0){
                  printf("Delta eh igual a %g, portanto nao tem como prosseguir", delta);
            }else if(delta == 0){
                  raiz1 = -b / (2 * a);
                  printf("A raiz eh igual a %g", raiz1);
            }else{
                  chuteRaiz = delta;
            
                  do{
                        anterior = chuteRaiz;
                        chuteRaiz = (chuteRaiz + delta / chuteRaiz) / 2;
                  }while(chuteRaiz != anterior);

                  raiz1 = ((-b) - chuteRaiz) / (2 * a);

                  raiz2 = ((-b) + chuteRaiz) / (2 * a);

                  printf("A raiz 1 eh igual a %g", raiz1);
                  printf("\nA raiz 2 eh igual a %g", raiz2);
            }
      }
}

void regraTres(){

      float a, b, c, resultado;

      printf("Sintaxe: 80 --> 100 entao 40 --> x");
      printf("\na --> b entao c --> d");
      printf("\n\nSabendo disso, digite o valor de a: ");
      scanf("%f", &a);
      printf("\nO de b: ");
      scanf("%f", &b);
      printf("\nE de c: ");
      scanf("%f", &c);

      resultado = (b * c) / a;

      printf("O valor da regra de tres eh igual a %g", resultado);
}

void mediaAritmetica(){
      int i, valor;
      float qntd = 0, num, resultado;

      printf("Digite a quantidade de valores: ");
      scanf("%d", &valor);

      for(i=1; i <= valor; i++){
            printf("\nDigite o valor %d: ", i);
            scanf("%f", &num);

            qntd = qntd + num;
      }

      resultado = qntd / valor;

      printf("O resultado da media eh igual a %g", resultado);
}

void nTermosPAsemRazao(){
      int nTermos;
      float termo1, termo2, resultado, razao;

      printf("Posicao do termo desejado: ");
      scanf("%d", &nTermos);
      printf("Valor do termo 1: ");
      scanf("%f", &termo1);
      printf("Valor do termo 2: ");
      scanf("%f", &termo2);

      razao = termo2 - termo1;
      resultado = termo1 + (nTermos - 1) * razao;

      printf("A o valor do termo %d eh igual a %g", nTermos, resultado);
}
void nTermosPAcomRazao(){
      int nTermos;
      float termo1, termo2, resultado, razao;

      printf("Posicao do termo desejado: ");
      scanf("%d", &nTermos);
      printf("Valor do termo 1: ");
      scanf("%f", &termo1);
      printf("Valor da razao: ");
      scanf("%f", &razao);

      resultado = termo1 + (nTermos - 1) * razao;

      printf("A o valor do termo %d eh igual a %g", nTermos, resultado);
}
void primeiroPA(){
      int nTermos;
      float razao, resultado, termoN;

      printf("Valor do numero de termos: ");
      scanf("%d", &nTermos);
      printf("Termo na posiçao n: ");
      scanf("%f", &termoN);
      printf("Valor da razao: ");
      scanf("%f", &razao);

      resultado = termoN - (nTermos - 1) * razao;

      printf("A quantidade de termos eh igual a %g", resultado);
}
void somaPA(){
      int nTermos;
      float termo1, termoN, resultado;

      printf("Valor do numero de termos: ");
      scanf("%d", &nTermos);
      printf("Valor do termo 1: ");
      scanf("%f", &termo1);
      printf("Valor do termo n: ");
      scanf("%f", &termoN);

      resultado = (nTermos * (termo1 + termoN)) / 2;

      printf("A soma da PA eh igual a %g", resultado);
}
void menuPA(){
      int pagPA;

      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Calcular o numero de termos (sem a razao): ");
            printf("\n(2): Calcular o numero de termos (com a razao): ");
            printf("\n(3): Calcular o primeiro termo: ");
            printf("\n(4): Calcular a soma de PA: ");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagPA);

            if(pagPA < 0 || pagPA > 4){
                  printf("Mensagem Fora dos parametros");
            }else if(pagPA == 1){
                  nTermosPAsemRazao();
            }else if(pagPA == 2){
                  nTermosPAcomRazao();
            }else if(pagPA == 3){
                  primeiroPA();
            }else if(pagPA == 4){     
                  somaPA();
            }
      }while(pagPA != 0);
}

void geralPGcomRazao(){
      long long termo1, razao, resultado, pot = 1;
      int nTermos, i;

      printf("Digite o valor do primeiro termo: ");
      scanf("%lld", &termo1);
      printf("Digite o valor da razao: ");
      scanf("%lld", &razao);
      printf("Digite a posicao do termo desejado: ");
      scanf("%d", &nTermos);

      for(i = 1; i < nTermos; i++){
            pot = pot * razao;
      }

      resultado = termo1 * pot;

      printf("O termo na posicao %d eh igual a %lld", nTermos, resultado);
}
void geralPGsemRazao(){
      long long termo1, termo2, resultado, razao, pot = 1;
      int nTermos, i;

      printf("Digite o valor do primeiro termo: ");
      scanf("%lld", &termo1);
      printf("Digite o valor do segundo termo: ");
      scanf("%lld", &termo2);
      printf("Digite a posicao do termo desejado: ");
      scanf("%d", &nTermos);

      razao = termo2 / termo1;

      for(i = 1; i < nTermos; i++){
            pot = pot * razao;
      }

      resultado = termo1 * pot;

      printf("O termo na posicao %d eh igual a %lld", nTermos, resultado);
}
void primeiroPG(){
      long long termoN, razao, resultado, pot = 1;
      int nTermos, i;

      printf("Digite o valor do termo na posicao n: ");
      scanf("%lld", &termoN);
      printf("Digite o valor da razao: ");
      scanf("%lld", &razao);
      printf("Digite a posicao do termo: ");
      scanf("%d", &nTermos);

      for(i = 1; i < nTermos; i++){
            pot = pot * razao;
      }

      resultado = termoN / pot;

      printf("O primeiro termo eh igual a %lld", resultado);
}
void nTermosPG(){
      long long termo1, razao, termoN, atual;
      int nTermos = 1;

      printf("Digite o valor do primeiro termo: ");
      scanf("%lld", &termo1);
      printf("Digite o valor da razao: ");
      scanf("%lld", &razao);
      printf("Digite o valor do termo na posicao n: ");
      scanf("%lld", &termoN);

      atual = termo1;

      while(atual != termoN){
            atual = atual * razao;
            nTermos++;
      }

      printf("A quantidade de termos eh igual a %d", nTermos);
}
void somaPG(){
      long long termo1, razao, resultado, pot = 1;
      int nTermos, i;

      printf("Digite o valor do primeiro termo: ");
      scanf("%lld", &termo1);
      printf("Digite o valor da razao: ");
      scanf("%lld", &razao);
      printf("Digite a quantidade de termos: ");
      scanf("%d", &nTermos);

      for(i = 1; i <= nTermos; i++){
            pot = pot * razao;
      }

      resultado = (termo1 * (1 - pot)) / (1 - razao);

      printf("A soma da PG eh igual a %lld", resultado);
}
void menuPG(){
      int pagPG;

      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Calcular o termo geral (descobrir an com razao): ");
            printf("\n(2): Calcular o termo geral (descobrir an sem razao): ");
            printf("\n(3): Descobrir o primeiro termo: ");
            printf("\n(4): Descobrir o numero de termos: ");
            printf("\n(5): Soma dos termos: ");
            printf("\n(0): Voltar para a pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagPG);

            if(pagPG < 0 || pagPG > 5){
                  printf("Mensagem Fora dos parametros");
            }else if(pagPG == 1){
                  geralPGcomRazao();
            }else if(pagPG == 2){
                  geralPGsemRazao();
            }else if(pagPG == 3){
                  primeiroPG();
            }else if(pagPG == 4){
                  nTermosPG();
            }else if(pagPG == 5){
                  somaPG();
            }
      }while(pagPG != 0);
}

void probabilidadeSimples(){
      float possiveis, favoraveis, resultado;

      printf("Digite o numero de casos favoraveis: ");
      scanf("%f", &favoraveis);
      printf("Digite o numero de casos possiveis: ");
      scanf("%f", &possiveis);

      resultado = favoraveis / possiveis;

      printf("\nProbabilidade: %g%%", resultado * 100);
}
void probabilidadeEventosIndependentes(){
      float evento1, evento2, resultado;

      printf("Considere a sintaxe: 68%% = 0.68");
      printf("\nDigite a probabilidade do primeiro evento: ");
      scanf("%f", &evento1);
      printf("Digite a probabilidade do segundo evento: ");
      scanf("%f", &evento2);

      resultado = evento1 * evento2;

      printf("\nProbabilidade: %g%%", resultado * 100);
}
void probabilidadeEventosDependentes(){
      float evento1, favoraveis1, evento2, favoraveis2, resultado;

      printf("Digite o numero de casos favoraveis do primeiro evento: ");
      scanf("%f", &favoraveis1);
      printf("Digite os casos possiveis no primeiro evento: ");
      scanf("%f", &evento1);
      printf("Digite o numero de casos favoraveis do segundo evento: ");
      scanf("%f", &favoraveis2);
      printf("Digite os casos possiveis no segundo caso: ");
      scanf("%f", &evento2);

      resultado = (favoraveis1 / evento1) * (favoraveis2 / evento2);

      printf("Probabilidade: %g%%", resultado * 100);
}
void combinacao(){
      int n, k, i, nk;
      long long somaN = 1, somaK = 1, somaNK = 1, resultado;

      printf("Digite o numero total de elementos: ");
      scanf("%d", &n);
      printf("Digite a quantidade escolhida: ");
      scanf("%d", &k);

      if(k > n || k < 0 || n < 0){
            printf("\nNao eh possivel fazer essa conta");
      }else{
            for(i = 1; i <= n; i++){
                  somaN = somaN * i;
            }
            for(i = 1; i <= k; i++){
                  somaK = somaK * i;
            }
            nk = n - k;
            for(i=1; i <= nk; i++){
                  somaNK = somaNK * i;
            }

            resultado = somaN / (somaK * somaNK);

            printf("\nResultado: %lld", resultado);
      }
}
void arranjo(){
      int n, k, i, nk;
      long long somaN = 1, somaNK = 1, resultado;

      printf("Digite o numero total de elementos: ");
      scanf("%d", &n);
      printf("Digite a quantidade escolhida: ");
      scanf("%d", &k);

      if(k > n || k < 0 || n < 0){
            printf("\nNao eh possivel fazer essa conta");
      }else{
            for(i = 1; i <= n; i++){
                  somaN = somaN * i;
            }
            nk = n - k;
            for(i=1; i <= nk; i++){
                  somaNK = somaNK * i;
            }

            resultado = somaN / somaNK;

            printf("\nResultado: %lld", resultado);
      }
}
void menuProbabilidade(){
      int pagProbabilidade;

      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Probabilidade Simples: ");
            printf("\n(2): Probabilidade de eventos independentes: ");
            printf("\n(3): Probabilidade de eventos dependentes: ");
            printf("\n(4): Permutacao: ");
            printf("\n(5): Combinacao: ");
            printf("\n(6): Arranjo: ");
            printf("\n(0): Voltar para a pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagProbabilidade);

            if(pagProbabilidade < 0 || pagProbabilidade > 6){
                  printf("Mensagem Fora dos parametros");
            }else if(pagProbabilidade == 1){
                  probabilidadeSimples();
            }else if(pagProbabilidade == 2){
                  probabilidadeEventosIndependentes();
            }else if(pagProbabilidade == 3){
                  probabilidadeEventosDependentes();
            }else if(pagProbabilidade == 4){
                  printf("\nA permutacao tem %lld maneiras", calcularFat());
            }else if(pagProbabilidade == 5){
                  combinacao();
            }else if(pagProbabilidade == 6){
                  arranjo();
            }
      }while(pagProbabilidade != 0);
}

void logaritmo(){
      double numero, base, z, termo, soma, zBase, termoBase, somaBase;
      int n;
      
      printf("\n\nDigite o numero: ");
      scanf("%lf", &numero);

      printf("Digite a base: ");
      scanf("%lf", &base);

      if (numero <= 0 || base <= 0 || base == 1) {
            printf("Valores invalidos!\n");
            return;
      }

      z = (numero - 1) / (numero + 1);
      termo = z;
      soma = 0;
      n = 1;

      while (termo > 0.0000000001 || termo < -0.0000000001) {
            soma += termo / n;

            n += 2;
            termo = termo * z * z;
      }

      zBase = (base - 1) / (base + 1);
      termoBase = zBase;
      somaBase = 0;
      n = 1;

      while (termoBase > 0.0000000001 || termoBase < -0.0000000001) {
            somaBase += termoBase / n;

            n += 2;
            termoBase = termoBase * zBase * zBase;
      }

      printf("\nLog_%g(%g) = %g", base, numero, (soma * 2) / (somaBase * 2));
}

double seno(double graus){
      double x, termo, soma;
      int i;

      x = graus * 3.141592653589793 / 180.0;

      termo = x;
      soma = x;

      for(i = 1; i <= 10; i++){
            termo *= -(x * x) / ((2 * i) * (2 * i + 1));
            soma += termo;
      }

      return soma;
}
double cosseno(double graus){
      double x, termo, soma;
      int i;

      x = graus * 3.141592653589793 / 180.0;

      termo = 1;
      soma = 1;

      for(i = 1; i <= 10; i++){
            termo *= -(x * x) / ((2 * i - 1) * (2 * i));
            soma += termo;
      }

      return soma;
}
double tangente(int *indefinida, double graus){
      double sen, cos;

      sen = seno(graus);
      cos = cosseno(graus);

      if(cos > -0.0000001 && cos < 0.0000001){
            *indefinida = 1;
            return 0;
      }

      *indefinida = 0;
      return sen / cos;
}
double arcoSeno(double numero){
      double termo, soma, x;
      int i;

      if(numero < -1 || numero > 1){
            printf("Valor fora dos parametros");
            return 0;
      }

      x = numero;
      termo = x;
      soma = x;

      for(i = 1; i <= 20; i++){
            termo *= (x * x) * (2 * i - 1) * (2 * i - 1);
            termo /= (2 * i) * (2 * i + 1);
            soma += termo;
      }

      return soma * 180.0 / 3.141592653589793;
}
double arcoCosseno(double numero){
      
      if(numero < -1 || numero > 1){
            printf("Valor fora dos parametros");
            return 0;
      }

      return 90.0 - arcoSeno(numero);
}
double arcoTangente(double numero){
      double termo, soma, x;
      int i;

      if(numero > 1){
            x = 1 / numero;

            termo = x;
            soma = x;

            for(i = 1; i <= 100; i++){
                  termo *= -(x * x);
                  soma += termo / (2 * i + 1);
            }

            return 90.0 - soma * 180.0 / 3.141592653589793;

      }else if(numero < -1){
            x = 1 / numero;

            termo = x;
            soma = x;

            for(i = 1; i <= 100; i++){
                  termo *= -(x * x);
                  soma += termo / (2 * i + 1);
            }

            return -90.0 - soma * 180.0 / 3.141592653589793;
      }

      x = numero;
      termo = x;
      soma = x;

      for(i = 1; i <= 100; i++){
            termo *= -(x * x);
            soma += termo / (2 * i + 1);
      }

      return soma * 180.0 / 3.141592653589793;
}
void grausRadianos(){
      double numero, resultado;
      
      printf("Digite o valor em graus: ");
      scanf("%lf", &numero);

      resultado = numero * 3.141592653589793 / 180.0;

      printf("O valor em radianos eh %g", resultado);
}

void TRSeno(){
      double oposto, hipotenusa;

      printf("\nDigite o cateto oposto: ");
      scanf("%lf", &oposto);
      printf("Digite a hipotenusa: ");
      scanf("%lf", &hipotenusa);

      if(hipotenusa <= 0 || oposto < 0 || oposto > hipotenusa){
            printf("Valores invalidos");
      }else{
            printf("O seno eh %g", oposto / hipotenusa);
      }
}
void TRCos(){
      double adjacente, hipotenusa;

      printf("\nDigite o cateto adjacente: ");
      scanf("%lf", &adjacente);
      printf("Digite a hipotenusa: ");
      scanf("%lf", &hipotenusa);

      if(hipotenusa <= 0 || adjacente < 0 || adjacente > hipotenusa){
            printf("Valores invalidos");
      }else{
            printf("O cosseno eh %g", adjacente / hipotenusa);
      }
}
void TRTan(){
      double oposto, adjacente;

      printf("\nDigite o cateto oposto: ");
      scanf("%lf", &oposto);
      printf("Digite o cateto adjacente: ");
      scanf("%lf", &adjacente);

      if(oposto < 0 || adjacente <= 0){
            printf("Valores invalidos");
      }else{
            printf("A tangente eh %g", oposto / adjacente);
      }
}
void TRtd(){
      double oposto, adjacente, hipotenusa, diferenca;

      printf("\nDigite o cateto oposto: ");
      scanf("%lf", &oposto);
      printf("Digite o cateto adjacente: ");
      scanf("%lf", &adjacente);
      printf("Digite a hipotenusa: ");
      scanf("%lf", &hipotenusa);

      if(oposto <= 0 || adjacente <= 0 || hipotenusa <= 0){
            printf("Valores invalidos");
      }else{
            diferenca = (oposto * oposto + adjacente * adjacente) - (hipotenusa * hipotenusa);

            if(diferenca < 0){
                  diferenca = -diferenca;
            }

            if(diferenca > 0.0000001){
                  printf("Os valores nao formam um triangulo retangulo");
            }else{
                  printf("\nSeno: %g", oposto / hipotenusa);
                  printf("\nCosseno: %g", adjacente / hipotenusa);
                  printf("\nTangente: %g", oposto / adjacente);
            }
      }
}
void menuTrianguloRetangulo(){
      int pagTrianguloRetangulo;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Calcular Seno");
            printf("\n(2): Calcular Cosseno");
            printf("\n(3): Calcular Tangente");
            printf("\n(4): Calcular seno, cosseno e tangente");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagTrianguloRetangulo);

            if(pagTrianguloRetangulo < 0 || pagTrianguloRetangulo > 4){
                  printf("Mensagem fora dos parametros");
            }else if(pagTrianguloRetangulo == 1){
                  TRSeno();
            }else if(pagTrianguloRetangulo == 2){
                  TRCos();
            }else if(pagTrianguloRetangulo == 3){
                  TRTan();
            }else if(pagTrianguloRetangulo == 4){
                  TRtd();
            }
      }while(pagTrianguloRetangulo != 0);
}

void opcao1Identidades(){
      double graus, sen, cos, resultado;

      printf("\nDigite o angulo em graus: ");
      scanf("%lf", &graus);

      sen = seno(graus);
      cos = cosseno(graus);

      resultado = sen * sen + cos * cos;

      printf("\nsen²(x) + cos²(x) = %g", resultado);

      if(resultado > 0.9999999 && resultado < 1.0000001){
            printf("\nIdentidade confirmada");
      }else{
            printf("\nErro de aproximacao");
      }
}
double tangenteValor(double graus){
      double sen, cos;

      sen = seno(graus);
      cos = cosseno(graus);

      return sen / cos;
}
void opcao2Identidades(){
      double graus, sen, cos, tang, resultado, diferenca;

      printf("\nDigite o angulo em graus: ");
      scanf("%lf", &graus);

      sen = seno(graus);
      cos = cosseno(graus);

      if(cos > -0.0000001 && cos < 0.0000001){
            printf("Tangente indefinida");
      }else{
            tang = tangenteValor(graus);
            resultado = sen / cos;

            diferenca = tang - resultado;

            if(diferenca < 0){
                  diferenca = -diferenca;
            }

            printf("\ntan(x) = %g", tang);
            printf("\nsen(x) / cos(x) = %g", resultado);

            if(diferenca < 0.0000001){
                  printf("\nIdentidade confirmada");
            }else{
                  printf("\nErro de aproximacao");
            }
      }
}
double secanteValor(double graus){
      double cos;

      cos = cosseno(graus);

      if(cos > -0.0000001 && cos < 0.0000001){
            return 0;
      }

      return 1 / cos;
}
void opcao3Identidades(){
      double graus, tang, sec, lado1, lado2, diferenca;

      printf("\nDigite o angulo em graus: ");
      scanf("%lf", &graus);

      if(cosseno(graus) > -0.0000001 && cosseno(graus) < 0.0000001){
            printf("Identidade indefinida para esse angulo");
      }else{
            tang = tangenteValor(graus);
            sec = secanteValor(graus);

            lado1 = 1 + tang * tang;
            lado2 = sec * sec;

            diferenca = lado1 - lado2;

            if(diferenca < 0){
                  diferenca = -diferenca;
            }

            printf("\n1 + tan²(x) = %g", lado1);
            printf("\nsec²(x) = %g", lado2);

            if(diferenca < 0.0000001){
                  printf("\nIdentidade confirmada");
            }else{
                  printf("\nErro de aproximacao");
            }
      }
}
double cotangenteValor(double graus){
      double sen, cos;

      sen = seno(graus);
      cos = cosseno(graus);

      if(sen > -0.0000001 && sen < 0.0000001){
            return 0;
      }

      return cos / sen;
}
double cossecanteValor(double graus){
      double sen;

      sen = seno(graus);

      if(sen > -0.0000001 && sen < 0.0000001){
            return 0;
      }

      return 1 / sen;
}
void opcao4Identidades(){
      double graus, cot, csc, lado1, lado2, diferenca;

      printf("\nDigite o angulo em graus: ");
      scanf("%lf", &graus);

      cot = cotangenteValor(graus);
      csc = cossecanteValor(graus);

      if(csc == 0){
            printf("Identidade indefinida para esse angulo");
      }else{
            lado1 = 1 + cot * cot;
            lado2 = csc * csc;

            diferenca = lado1 - lado2;

            if(diferenca < 0){
                  diferenca = -diferenca;
            }

            printf("\n1 + cot²(x) = %g", lado1);
            printf("\ncsc²(x) = %g", lado2);

            if(diferenca < 0.0000001){
                  printf("\nIdentidade confirmada");
            }else{
                  printf("\nErro de aproximacao");
            }
      }
}
void opcao5Identidades(){
      double graus, seno2x, sen, cos, resultado, diferenca;

      printf("\nDigite o angulo em graus: ");
      scanf("%lf", &graus);

      seno2x = seno(2 * graus);

      sen = seno(graus);
      cos = cosseno(graus);

      resultado = 2 * sen * cos;

      diferenca = seno2x - resultado;

      if(diferenca < 0){
            diferenca = -diferenca;
      }

      printf("\nsen(2x) = %g", seno2x);
      printf("\n2 * sen(x) * cos(x) = %g", resultado);

      if(diferenca < 0.0000001){
            printf("\nIdentidade confirmada");
      }else{
            printf("\nErro de aproximacao");
      }
}
void opcao6Identidades(){
      double graus, cosseno2x, cos, sen, resultado, diferenca;

      printf("\nDigite o angulo em graus: ");
      scanf("%lf", &graus);

      cosseno2x = cosseno(2 * graus);

      cos = cosseno(graus);
      sen = seno(graus);

      resultado = cos * cos - sen * sen;

      diferenca = cosseno2x - resultado;

      if(diferenca < 0){
            diferenca = -diferenca;
      }

      printf("\ncos(2x) = %g", cosseno2x);
      printf("\ncos²(x) - sen²(x) = %g", resultado);

      if(diferenca < 0.0000001){
            printf("\nIdentidade confirmada");
      }else{
            printf("\nErro de aproximacao");
      }
}
void menuIdentidades(){
      int pagIdentidades;

      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): sen^2(x) + cos^2(x) = 1");
            printf("\n(2): tan(x) = sen(x) / cos(x)");
            printf("\n(3): 1 + tan^2(x) = sec^2(x)");
            printf("\n(4): 1 + cot^2(x) = csc^2(x)");
            printf("\n(5): sen(2x) = 2sen(x)cos(x)");
            printf("\n(6): cos(2x) = cos^2(x) - sen^2(x)");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagIdentidades);

            if(pagIdentidades < 0 || pagIdentidades > 6){
                  printf("Opcao fora dos parametros");
            }else if(pagIdentidades == 1){
                  opcao1Identidades();
            }else if(pagIdentidades == 2){
                  opcao2Identidades();
            }else if(pagIdentidades == 3){
                  opcao3Identidades();
            }else if(pagIdentidades == 4){
                  opcao4Identidades();
            }else if(pagIdentidades == 5){
                  opcao5Identidades();
            }else if(pagIdentidades == 6){
                  opcao6Identidades();
            }

      }while(pagIdentidades != 0);
}

void menuTrigonometria(){
      int pagTrigonometria, indefinida;
      double resultado, numero = 0, graus;

      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Seno");
            printf("\n(2): Cosseno");
            printf("\n(3): Tangente");
            printf("\n(4): Arco seno");
            printf("\n(5): Arco cosseno");
            printf("\n(6): Arco tangente");
            printf("\n(7): Converter graus para radianos");
            printf("\n(8): Triangulo Retangulo");
            printf("\n(9): Identidades trigonometricas");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagTrigonometria);

            if(pagTrigonometria < 0 || pagTrigonometria > 9){
                  printf("Mensagem fora dos parametros");
            }else if(pagTrigonometria == 1){
                  printf("Digite o angulo do seno em graus: ");
                  scanf("%lf", &graus);

                  printf("O seno eh %g", seno(graus));
            }else if(pagTrigonometria == 2){
                  printf("Digite o angulo do cosseno em graus: ");
                  scanf("%lf", &graus);

                  printf("O cosseno eh %g", cosseno(graus));
            }else if(pagTrigonometria == 3){
                  printf("Digite o angulo da tangente em graus: ");
                  scanf("%lf", &graus);

                  resultado = tangente(&indefinida, graus);

                  if(indefinida){
                        printf("Tangente indefinida");
                  }else{
                        printf("A tangente eh %g", resultado);
                  }
            }else if(pagTrigonometria == 4){
                  printf("Digite o valor do arco seno: ");
                  scanf("%lf", &numero);

                  printf("O arco seno eh %g graus", arcoSeno(numero));

            }else if(pagTrigonometria == 5){
                  printf("Digite o valor do arco cosseno: ");
                  scanf("%lf", &numero);
            
                  printf("O arco cosseno eh %g graus", arcoCosseno(numero));
            }else if(pagTrigonometria == 6){
                  printf("Digite o valor do arco tangente: ");
                  scanf("%lf", &numero);

                  printf("O arco tangente eh %g graus", arcoTangente(numero));
            }else if(pagTrigonometria == 7){
                  grausRadianos();
            }else if(pagTrigonometria == 8){
                  menuTrianguloRetangulo();
            }else if(pagTrigonometria == 9){
                  menuIdentidades();
            }
      }while(pagTrigonometria != 0);
}

void menuMatematica(){
      int pagMatematica;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Pitagoras");
            printf("\n(2): Bhaskara");
            printf("\n(3): Regra de Tres");
            printf("\n(4): Media Aritmetica");
            printf("\n(5): Progressao Aritmetica");
            printf("\n(6): Progressao Geometrica");
            printf("\n(7): Probabilidade");
            printf("\n(8): Logaritimos");
            printf("\n(9): Trigonometria");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagMatematica);
            
            if(pagMatematica < 0 || pagMatematica > 9){
                  printf("Mensagem fora dos parametros");
            }else if(pagMatematica == 1){
                  menuPitagoras();
            }else if(pagMatematica == 2){
                  bhaskara();
            }else if(pagMatematica == 3){
                  regraTres();
            }else if(pagMatematica == 4){
                  mediaAritmetica();
            }else if(pagMatematica == 5){
                  menuPA();
            }else if(pagMatematica == 6){
                  menuPG();
            }else if(pagMatematica == 7){
                  menuProbabilidade();
            }else if(pagMatematica == 8){
                  logaritmo();
            }else if(pagMatematica == 9){
                  menuTrigonometria();
            }
      }while(pagMatematica != 0);   
}


void VM(){
      double deslocamento, tempo, resultado;

      printf("Escreva o valor do deslocamento total (deslocamento inicial + deslocamento final): ");
      scanf("%lf", &deslocamento);
      printf("Escreva o valor do tempo total (tempo inicial + tempo final): ");
      scanf("%lf", &tempo);

      if(deslocamento != 0){
            resultado = deslocamento / tempo;
      
            printf("A velocidade media eh igual a %gs", resultado);
      }else{
            printf("Deslocamento invalido");
      }
}
void VMdeltaS(){
      double VM, tempo, resultado;

      printf("Escreva o valor da Velocidade Media: ");
      scanf("%lf", &VM);
      printf("Escreva o valor do tempo total (tempo inicial + tempo final): ");
      scanf("%lf", &tempo);

      resultado = VM * tempo;

      printf("O deslocamento total eh igual a %g", resultado);
}
void VMdeltaT(){
      double deslocamento, VM, resultado;

      printf("Escreva o valor do deslocamento total (deslocamento inicial + deslocamento final): ");
      scanf("%lf", &deslocamento);
      printf("Escreva o valor da Velocidade Media: ");
      scanf("%lf", &VM);

      if(deslocamento != 0 && VM != 0){
            resultado = deslocamento / VM;
      
            printf("A velocidade media eh igual a %gs", resultado);
      }else{
            printf("Deslocamento ou Velocidade Media invalidos");
      }
}
void menuVM(){
      int pagVM;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Descobrir Velocidade Media");
            printf("\n(2): Descobrir Deslocamento Total");
            printf("\n(3): Descobrir o Tempo Total");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagVM); 

            if(pagVM < 0 || pagVM > 3){
                  printf("Mensagem fora dos parametros");
            }else if(pagVM == 1){
                  VM();
            }else if(pagVM == 2){
                  VMdeltaS();
            }else if(pagVM == 3){
                  VMdeltaT();
            }
      }while(pagVM != 0);
}

void aceleracao(){
      double resultado, Vt, T;

      printf("Digite a Velocidade total (Velocidade final - Velocidade inicial): ");
      scanf("%lf", &Vt);
      printf("Digite o tempo: ");
      scanf("%lf", &T);

      if(T == 0){
            printf("Tempo invalido");
            return;
      }
      resultado = Vt / T;

      printf("A aceleracao eh %g", resultado);
}
void VtA(){
      double resultado, A, T;

      printf("Digite a Aceleracao: ");
      scanf("%lf", &A);
      printf("Digite o tempo: ");
      scanf("%lf", &T);

      resultado = A * T;

      printf("A velocidade Total eh %g", resultado);
}
void aT(){
      double resultado, Vt, A;

      printf("Digite a Velocidade total (Velocidade final - Velocidade inicial): ");
      scanf("%lf", &Vt);
      printf("Digite a Aceleracao: ");
      scanf("%lf", &A);

      if(A == 0){
            printf("Aceleracao invalida");
            return;
      }
      resultado = Vt / A;

      printf("O tempo eh %g", resultado);
}
void menuAceleracao(){
      int pagAceleracao;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Descobrir a Aceleracao");
            printf("\n(2): Descobrir a Velocidade total");
            printf("\n(3): Descobrir o Tempo");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagAceleracao); 

            if(pagAceleracao < 0 || pagAceleracao > 3){
                  printf("Mensagem fora dos parametros");
            }else if(pagAceleracao == 1){
                  aceleracao();
            }else if(pagAceleracao == 2){
                  VtA();
            }else if(pagAceleracao == 3){
                  aT();
            }
      }while(pagAceleracao != 0);
}

void forca(){
      double resultado, massa, aceleracao;

      printf("Digite a massa em kg: ");
      scanf("%lf", &massa);
      printf("Digite a aceleracao em m/s^2: ");
      scanf("%lf", &aceleracao);

      resultado = massa * aceleracao;

      printf("A forca eh igual a %gN", resultado);
}
void massaF(){
      double resultado, forca, aceleracao;

      printf("Digite a forca em N: ");
      scanf("%lf", &forca);
      printf("Digite a aceleracao em m/s^2: ");
      scanf("%lf", &aceleracao);

      if(aceleracao == 0){
            printf("Aceleracao invalida");
            return;
      }
      resultado = forca / aceleracao;

      printf("A massa eh igual a %gKg", resultado);
}
void aceleracaoF(){
      double resultado, massa, forca;

      printf("Digite a massa em kg: ");
      scanf("%lf", &massa);
      printf("Digite a forca em N: ");
      scanf("%lf", &forca);

      if(massa == 0){
            printf("Massa invalida");
            return;
      }
      resultado = forca / massa;

      printf("A aceleracao eh igual a %gm/s^2", resultado);
}
void menuForca(){
      int pagForca;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Descobrir a Forca");
            printf("\n(2): Descobrir a massa (kg)");
            printf("\n(3): Descobrir a aceleracao (m/s^2)");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagForca); 

            if(pagForca < 0 || pagForca > 3){
                  printf("Mensagem fora dos parametros");
            }else if(pagForca == 1){
                  forca();
            }else if(pagForca == 2){
                  massaF();
            }else if(pagForca == 3){
                  aceleracaoF();
            }
      }while(pagForca != 0);
}

void peso(){
      double resultado, massa, gravidade;

      printf("Digite a massa em kg: ");
      scanf("%lf", &massa);
      printf("Digite a aceleracao da gravidade em m/s^2: ");
      scanf("%lf", &gravidade);

      resultado = massa * gravidade;

      printf("O peso eh igual a %gN", resultado);
}
void massaP(){
      double resultado, peso, gravidade;

      printf("Digite o peso em N: ");
      scanf("%lf", &peso);
      printf("Digite a aceleracao da gravidade em m/s^2: ");
      scanf("%lf", &gravidade);

      if(gravidade == 0){
            printf("Aceleracao da gravidade invalida");
            return;
      }
      resultado = peso / gravidade;

      printf("A massa eh igual a %gKg", resultado);
}
void gravidadeP(){
      double resultado, peso, massa;

      printf("Digite a massa em kg: ");
      scanf("%lf", &massa);
      printf("Digite o peso em N: ");
      scanf("%lf", &peso);

      if(massa == 0){
            printf("Massa invalida");
            return;
      }
      resultado = peso / massa;

      printf("A aceleracao da gravidade eh igual a %gm/s^2", resultado);
}
void menuPeso(){
      int pagPeso;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Descobrir o Peso");
            printf("\n(2): Descobrir a massa (kg)");
            printf("\n(3): Descobrir a aceleracao da gravidade (m/s^2)");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagPeso); 

            if(pagPeso < 0 || pagPeso > 3){
                  printf("Mensagem fora dos parametros");
            }else if(pagPeso == 1){
                  peso();
            }else if(pagPeso == 2){
                  massaP();
            }else if(pagPeso == 3){
                  gravidadeP();
            }
      }while(pagPeso != 0);
}

void trabalho(){
      double resultado, forca, deslocamento, angulo;

      printf("Digite a forca em N: ");
      scanf("%lf", &forca);
      printf("Digite o deslocamento em m: ");
      scanf("%lf", &deslocamento);
      printf("Digite o angulo em graus: ");
      scanf("%lf", &angulo);

      resultado = forca * deslocamento * cosseno(angulo);

      printf("O trabalho eh igual a %gJ", resultado);
}
void forcaT(){
      double resultado, trabalho, deslocamento, angulo;

      printf("Digite o trabalho em J: ");
      scanf("%lf", &trabalho);
      printf("Digite o deslocamento em m: ");
      scanf("%lf", &deslocamento);
      printf("Digite o angulo em graus: ");
      scanf("%lf", &angulo);

      if(deslocamento == 0 || cosseno(angulo) == 0){
            printf("Deslocamento ou angulo invalidos");
            return;
      }
      resultado = trabalho / (deslocamento * cosseno(angulo));

      printf("A forca eh igual a %gN", resultado);
}
void deslocamentoT(){
      double resultado, forca, trabalho, angulo;

      printf("Digite a forca em N: ");
      scanf("%lf", &forca);
      printf("Digite o Trabalho em J: ");
      scanf("%lf", &trabalho);
      printf("Digite o angulo em graus: ");
      scanf("%lf", &angulo);

      if(forca == 0 || cosseno(angulo) == 0){
            printf("Forca ou angulo invalidos");
            return;
      }
      resultado = trabalho / (forca * cosseno(angulo));

      printf("O deslocamento eh igual a %gm", resultado);
}
void cossenoT(){
      double resultado, forca, trabalho, deslocamento;

      printf("Digite a forca em N: ");
      scanf("%lf", &forca);
      printf("Digite o Trabalho em J: ");
      scanf("%lf", &trabalho);
      printf("Digite o deslocamento em m: ");
      scanf("%lf", &deslocamento);

      if(forca == 0 || deslocamento == 0){
            printf("Forca ou deslocamento invalidos");
            return;
      }
      resultado = trabalho / (forca * deslocamento);

      printf("O cosseno eh igual a %g", resultado);
}
void menuTrabalho(){
      int pagTrabalho;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Descobrir o trabalho");
            printf("\n(2): Descobrir a Forca em N");
            printf("\n(3): Descobrir o deslocamento");
            printf("\n(4): Descobrir o cosseno");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagTrabalho); 

            if(pagTrabalho < 0 || pagTrabalho > 4){
                  printf("Mensagem fora dos parametros");
            }else if(pagTrabalho == 1){
                  trabalho();
            }else if(pagTrabalho == 2){
                  forcaT();
            }else if(pagTrabalho == 3){
                  deslocamentoT();
            }else if(pagTrabalho == 4){
                  cossenoT();
            }
      }while(pagTrabalho != 0);
}

void energiaCinetica(){
      double resultado, massa, velocidade;

      printf("Digite a massa em kg: ");
      scanf("%lf", &massa);
      printf("Digite a velocidade em m/s: ");
      scanf("%lf", &velocidade);

      resultado = 0.5 * massa * velocidade * velocidade;

      printf("A energia cinetica eh igual a %gJ", resultado);
}
void massaEC(){
      double resultado, energia, velocidade;

      printf("Digite a energia cinetica em J: ");
      scanf("%lf", &energia);
      printf("Digite a velocidade em m/s: ");
      scanf("%lf", &velocidade);

      if(velocidade != 0){
            resultado = (2 * energia) / (velocidade * velocidade);
      
            printf("A massa eh igual a %gKg", resultado);
      }else{
            printf("Velocidade invalida");
      }
}
void velocidadeEC(){
      double resultado, energia, massa;
      float numero;

      printf("Digite a energia cinetica em J: ");
      scanf("%lf", &energia);
      printf("Digite a massa em kg: ");
      scanf("%lf", &massa);

      if(massa != 0){
            numero = ((2 * energia) / massa);

            printf("A velocidade eh igual a %gm/s", raizQuadrada(numero));
      }else{
            printf("Massa invalida");
      }
}
void menuEnergiaCinetica(){
      int pagEnergiaCinetica;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Descobrir a Energia Cinetica");
            printf("\n(2): Descobrir a massa (kg)");
            printf("\n(3): Descobrir a velocidade (m/s)");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagEnergiaCinetica);

            if(pagEnergiaCinetica < 0 || pagEnergiaCinetica > 3){
                  printf("Mensagem fora dos parametros");
            }else if(pagEnergiaCinetica == 1){
                  energiaCinetica();
            }else if(pagEnergiaCinetica == 2){
                  massaEC();
            }else if(pagEnergiaCinetica == 3){
                  velocidadeEC();
            }
      }while(pagEnergiaCinetica != 0);
}

void EPG(){
      double resultado, massa, gravidade, altura;

      printf("Digite a massa em kg: ");
      scanf("%lf", &massa);
      printf("Digite a aceleracao da gravidade em m/s^2: ");
      scanf("%lf", &gravidade);
      printf("Digite a altura em m: ");
      scanf("%lf", &altura);

      resultado = massa * gravidade * altura;

      printf("A energia potencial gravitacional eh igual a %gJ", resultado);
}
void massaEPG(){
      double resultado, energia, gravidade, altura;

      printf("Digite a energia potencial gravitacional em J: ");
      scanf("%lf", &energia);
      printf("Digite a aceleracao da gravidade em m/s^2: ");
      scanf("%lf", &gravidade);
      printf("Digite a altura em m: ");
      scanf("%lf", &altura);

      if(gravidade == 0 || altura == 0){
            printf("Aceleracao da gravidade ou altura invalidos");
            return;
      }
      resultado = energia / (gravidade * altura);

      printf("A massa eh igual a %gKg", resultado);
}
void gravidadeEPG(){
      double resultado, energia, massa, altura;

      printf("Digite a energia potencial gravitacional em J: ");
      scanf("%lf", &energia);
      printf("Digite a massa em kg: ");
      scanf("%lf", &massa);
      printf("Digite a altura em m: ");
      scanf("%lf", &altura);

      if(massa == 0 || altura == 0){
            printf("Massa ou altura invalidos");
            return;
      }
      resultado = energia / (massa * altura);

      printf("A aceleracao da gravidade eh igual a %gm/s^2", resultado);
}
void alturaEPG(){
      double resultado, energia, massa, gravidade;

      printf("Digite a energia potencial gravitacional em J: ");
      scanf("%lf", &energia);
      printf("Digite a massa em kg: ");
      scanf("%lf", &massa);
      printf("Digite a aceleracao da gravidade em m/s^2: ");
      scanf("%lf", &gravidade);

      if(massa == 0 || gravidade == 0){
            printf("Massa ou aceleracao da gravidade invalidos");
            return;
      }
      resultado = energia / (massa * gravidade);

      printf("A altura eh igual a %gm", resultado);
}
void menuEPG(){
      int pagEnergiaPotencialGravitacional;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Descobrir a Energia Potencial Gravitacional");
            printf("\n(2): Descobrir a massa (kg)");
            printf("\n(3): Descobrir a aceleracao da gravidade (m/s^2)");
            printf("\n(4): Descobrir a altura (m)");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagEnergiaPotencialGravitacional);

            if(pagEnergiaPotencialGravitacional < 0 || pagEnergiaPotencialGravitacional > 4){
                  printf("Mensagem fora dos parametros");
            }else if(pagEnergiaPotencialGravitacional == 1){
                  EPG();
            }else if(pagEnergiaPotencialGravitacional == 2){
                  massaEPG();
            }else if(pagEnergiaPotencialGravitacional == 3){
                  gravidadeEPG();
            }else if(pagEnergiaPotencialGravitacional == 4){
                  alturaEPG();
            }
      }while(pagEnergiaPotencialGravitacional != 0);
}

void potenciaEletrica(){
      double resultado, tensao, corrente;

      printf("Digite a tensao em V: ");
      scanf("%lf", &tensao);
      printf("Digite a corrente em A: ");
      scanf("%lf", &corrente);

      resultado = tensao * corrente;

      printf("A potencia eletrica eh igual a %gW", resultado);
}
void tensaoP(){
      double resultado, potencia, corrente;

      printf("Digite a potencia eletrica em W: ");
      scanf("%lf", &potencia);
      printf("Digite a corrente em A: ");
      scanf("%lf", &corrente);

      if(corrente == 0){
            printf("Corrente invalida");
            return;
      }
      resultado = potencia / corrente;

      printf("A tensao eh igual a %gV", resultado);
}
void correnteP(){
      double resultado, potencia, tensao;

      printf("Digite a potencia eletrica em W: ");
      scanf("%lf", &potencia);
      printf("Digite a tensao em V: ");
      scanf("%lf", &tensao);

      if(tensao == 0){
            printf("Tensao invalida");
            return;
      }
      resultado = potencia / tensao;

      printf("A corrente eh igual a %gA", resultado);
}
void menuLeiOhm(){
      int pagLeiOhm;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Descobrir a Potencia Eletrica");
            printf("\n(2): Descobrir a Tensao Eletrica");
            printf("\n(3): Descobrir a Corrente Eletrica");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagLeiOhm); 

            if(pagLeiOhm < 0 || pagLeiOhm > 3){
                  printf("Mensagem fora dos parametros");
            }else if(pagLeiOhm == 1){
                  potenciaEletrica();
            }else if(pagLeiOhm == 2){
                  tensaoP();
            }else if(pagLeiOhm == 3){
                  correnteP();
            }
      }while(pagLeiOhm != 0);
}

void menuFisica(){
      int pagFisica;
      do{
            printf("\n\nEscolha uma opcao:");
            printf("\n(1): Velocidade Media");
            printf("\n(2): Aceleracao");
            printf("\n(3): Forca (segunda Lei de Newton)");
            printf("\n(4): Peso");
            printf("\n(5): Trabalho");
            printf("\n(6): Energia Cinetica");
            printf("\n(7): Energia Potencial Gravitacional");
            printf("\n(8): Potencia Eletrica (Lei de Ohm)");
            printf("\n(0): Voltar para pagina anterior");
            printf("\nEscolha: ");
            scanf("%d", &pagFisica); 

            if(pagFisica < 0 || pagFisica > 8){
                  printf("Mensagem fora dos parametros");
            }else if(pagFisica == 1){
                  menuVM();
            }else if(pagFisica == 2){
                  menuAceleracao();
            }else if(pagFisica == 3){
                  menuForca();
            }else if(pagFisica == 4){
                  menuPeso();
            }else if(pagFisica == 5){
                  menuTrabalho();
            }else if(pagFisica == 6){
                  menuEnergiaCinetica();
            }else if(pagFisica == 7){
                  menuEPG();
            }else if(pagFisica == 8){
                  menuLeiOhm();
            }
      }while(pagFisica != 0);
}


void menuCreditos(){
      printf("\n\n\033[1mCalculadora Cientifica avancada em C usando apenas uma biblioteca\033[0m");
      printf("\nAutor: Rafamonte (Rafael Montenegro)");
      printf("\n\nAplicativos usados: Dev-C++ 4.9.9.2 e Visual Studio Code");
      printf("\n\nMinhas redes:");
      printf("\nGithub: Famontegro");
      printf("\nInstagram: Famontegro");
      printf("\nDiscord: rafamonte");   
      printf("\nLinkedin: Rafael (Rafamonte) Montenegro Ribeiro");

      printf("\n\nPressione ENTER para continuar. . .");
      getchar();
      getchar();
}
int main(){

    do{
       menuP();
        if(pag1 == 1){
                menuSoma();
        }else if(pag1 == 2){
              menuSub();
        }else if(pag1 == 3){
              menuMul();
        }else if(pag1 == 4){
              menuDiv(); 
        }else if(pag1 == 5){
              do{
                 menuP2(); 
                           if(pag2 == 1){
                              menuRaizQ();
                          }else if(pag2 == 2){
                                menuFat();      
                          }else if(pag2 == 3){
                                menuExp();
                          }else if(pag2 == 4){
                                menuPor();      
                          }else if(pag2 == 5){
                                menuNP();      
                          }else if(pag2 == 6){
                                do{
                                        menuP3();
                                                 if(pag3 == 1){
                                                         menuCotidiano();
                                                 }else if(pag3 == 2){
                                                       menuGeometria();
                                                 }else if(pag3 == 3){
                                                       menuMatematica();
                                                 }else if(pag3 == 4){
                                                       menuFisica();
                                                 }else if(pag3 == 0){
                                                             
                                                 }else{
                                                        printf("\nMensagem Fora dos parametros");
                                                        printf("\n");  
                                                 }
                                }while(pag3 != 0);      
                          }else if(pag2 == 0){
                                
                          }else{
                              printf("\nMensagem Fora dos parametros");
                              printf("\n");
                          }
                  }while(pag2 != 0);
        }else if(pag1 == 6){
              menuCreditos();
        }else if(pag1 == 0){
              
        }else{
                  printf("\nMensagem Fora dos parametros");
                  printf("\n");
            }
        }while(pag1 != 0);
                
    printf("\n");
    printf("\033[1mObrigado por usar minha Calculadora Cientifica em C\033[0m");


    printf("\n\nPressione ENTER para continuar. . .");
    getchar();
    getchar();
    return 0;
}
