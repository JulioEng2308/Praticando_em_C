package main
import "fmt"

func main () {
  var num int
  var digito1 int
  var digito2 int
  var digito3 int
  var soma int

  fmt.Scan(&num)
  
  digito1 = num/100
  digito2 = (num/10) - (digito1 * 10)
  digito3 = num - ((digito2 * 10) + (digito1 * 100))
  
  

  if num % 2 == 0 {
     soma = digito1 + digito2 + digito3
     fmt.Println("Numero", num, "eh par e a soma dos seus algarismos eh", soma)
     fmt.Println("Bye Bye")
  } else {
      fmt.Println("Bye Bye")
  }
  


}