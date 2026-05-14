//professor o senhor vai receber uma notificação agora as 10:45 mas foi porque deixei meu computador
//desligar ok


//
package main 
import "fmt"

func main () {
  var tam int
  var indice int 
  var vet []int
  var num int
  var soma int
  var indice2 int 

  fmt.Scan(&tam)

  for indice = 0; indice < tam; indice++ {
      fmt.Scanln(&num)
      vet = append(vet, num)
  }

  for indice = 0; indice < tam; indice++ {
      num = vet[indice]
      soma = 0
      for indice2 = 1; indice2 < num; indice2++ {
          if num % indice2 == 0 {
              soma += indice2
          }
      }
      if soma == num {
      fmt.Println(num,"eh perfeito")
      } else {
      fmt.Println(num,"nao eh perfeito")
  }
  }
  
}