package main
import "fmt"
//import "math"

func main () {
  var somacubo int
  var num1 int
  var num2 int
  var num3 int 
  var somavalores int
  

  fmt.Scan(&somacubo)

  num1 = somacubo / 100
  num2 = (somacubo / 10) - (num1 * 10)
  num3 = somacubo - ((num1 * 100) + (num2 * 10))

  somavalores = somacubo
  somavalores = (num1*num1*num1) + (num2*num2*num2) + (num3*num3*num3)

   if somacubo == somavalores {
       fmt.Println(somacubo)
       fmt.Println("atende")
   } else {
       fmt.Println(somacubo)
       fmt.Println("nao atende")
   }
  
 
}