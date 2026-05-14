package main 
import "fmt"
import "math"

func main () {
  var raio float64
  var altura float64
  var num1 float64
  var num2 float64
  var digito int
  var diferenca float64

  fmt.Scan(&raio)
  fmt.Scan(&altura)
  fmt.Scan(&digito)

  // volume da esfera é num2 e volume da calota é num1

  num2 = (4 * math.Pi * math.Pow(raio,3.0)) / 3.0
  num1 = (math.Pi * math.Pow(altura,2.0) * (3.0 * raio - altura)) / 3.0

  if digito == 1 {
      
      fmt.Printf("%.4f",num1)
  } else {
      if digito == 2 {
          diferenca = num2 - num1
          fmt.Printf("%.4f",diferenca)
      }
  }
  
}