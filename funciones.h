#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
int ingresenum()
{
int num;
printf("Ingrese un numero : \n");
scanf("%d",&num);
return(num);
}
int suma(int n1,int n2){
    return(n1+n2);
}
int resta(int n1,int n2){
    return(n1-n2);
}
int bandivi(int n1,int n2){
    int band = 0;
    if(n2 == 0){
        band = 1;
    }
    return(band);
}
int divi(int n1,int n2){
    return(n1/n2);
}
int multi(int n1,int n2){
    return(n1*n2);
}
int fact (int n){
    int fact = 1;
for(int i=1;i<n;i++){
        fact = fact * i;
}
return(fact);
}
#endif // FUNCIONES_H_INCLUDED
