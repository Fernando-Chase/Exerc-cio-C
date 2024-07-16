#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calKW(float v_sal, float q_kw, float *v_kw, float *v_rs, float *v_dsc){
    (*v_kw) = v_sal / 1000;
    (*v_rs) = (*v_kw) * q_kw;
    (*v_dsc) = (*v_rs) * 0.85;
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    
    float val_sal, qtde_kw, val_kw, val_reais, val_desc;
    
    printf("Insira o salário mínimo:\n");
    scanf("%f", &val_sal);
    printf("Insira a quantidade de KW gasto:\n");
    scanf("%f", &qtde_kw);
    
    calKW(val_sal, qtde_kw, &val_kw, &val_reais, &val_desc);
    
    printf("Valor de 1 KW (em R$): %.2F\n", val_kw);
    printf("Valor a ser pago pela residência (em R$): %.2F.\n", val_reais);
    printf("Valor com desconto (em R$): %.2F.\n", val_desc);
    return 0;
}
