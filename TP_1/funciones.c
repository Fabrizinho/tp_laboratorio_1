float suma (float a ,float b )
 {
     float resultado;
     resultado = a + b;
     return resultado;
 }

float resta (float a ,float b )
 {
     float resultado;
     resultado = a - b;
     return resultado;
 }

 float multiplicar (float a ,float b )
 {
     float resultado;
     resultado = a * b;
     return resultado;
 }

 float dividir (float a ,float b )
 {
     float resultado;
     resultado = a / b;
     return resultado;
 }

int factorial(int n)
{   int resp;
    if(n==1){
        return 1;
    }
    resp=n* factorial(n-1);
    return (resp);

}
