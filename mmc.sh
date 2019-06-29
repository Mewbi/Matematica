#!/bin/bash

#---------------------------------------Cabeçalho
# Autor
#   Felipe Fernandes
#    <felipefernandesgsc@gmail.com>
#
# Programa
#   MMC
#
# Data
#   21/4/2019 10:33
#
# Descrição
#   Realiza o cálculo do mmc de números inteiros
#  positivos inseridos. Usa-se propriedades de
#  MMC para poder realizar o cálculo.
#
#------------------------------------------------

#------------------------------------------Início
echo -e "\n\tCálculo de MMC" 
echo -e "\nDigite números inteiros e positivos (separando por \"espaços\")"
read numeros #Recebe os números
#------------------------------------------------

#---------------------------------------Variáveis
num=( $numeros) #Criando Array com os números inseridos
cont="0" #Contador que irá selecionar cada valor do array
teste="0"
qnt=${#num[@]} #Conta quantos números foram inseridos
eval "qnt=\$((qnt - 1))" #Como a array começa a contar do 0, no loop devemos subtrair 1
NUM=$(echo "${num[@]}" | tr -t \  ,)
#------------------------------------------------

#------------------------------------------Testes
if [ "${#num[@]}" -lt "2" ] ; then
   echo -e "\nÉ necessário inserir pelo menos 2 números inteiros positivos"
   exit
fi

if [ "${num[0]}" -lt "1" ] ; then #Verifica se o 1 número é positivo
   echo -e "\nO Primeiro argumento tem que ser positivo e inteiro"
   exit
fi

while [ "$teste" != $qnt ] ; do #Loop verificar se os números são positivos
   eval "teste=\$((teste + 1))"
   if [ "${num[$teste]}" -lt "1" ] ; then
      echo -e "\nÉ necessário inserir números positivos e inteiros"
      exit
   fi
done
#------------------------------------------------

#----------------------------------------Cálculos

#Pode-se interpretar A sendo ${num[0]} e B sendo ${num[$cont]}

while [ "$cont" != $qnt ] ; do #Loop usado para pegar todos valores da Array
eval "cont=\$((cont + 1))"

   if [ -n "$mmc" ] ; then
   num[0]="$mmc" ; fi #Adiciona o novo valor de A, após o primeiro mmc ter sido feito
   
   mmcA="${num[0]}" #Armazena o valor inicial de A
   mmcB="${num[$cont]}" #Armazena o valor inicial de B

   until [ ${num[$cont]} = "0" ] ; do #Algoritmo de Euclides para calcular MDC
      mdc=$(bc <<< "${num[0]}%${num[$cont]}")
	  num[0]=${num[$cont]}
	  num[$cont]="$mdc"
   done
   
   mmc=$(bc <<< "$mmcA*($mmcB/${num[0]})") #Aqui é calculado o MMC com MDC
done

echo -e "\nMMC(${NUM}) = ${mmc}" #Imprime o resultado
#------------------------------------------------
