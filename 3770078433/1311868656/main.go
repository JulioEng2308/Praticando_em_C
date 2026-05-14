package main 
import "fmt"

func main () {
  var niquel float64
  var acop float64
  var cromo float64
  var indefinido float64

  fmt.Scan(&acop)

  //regra de 3
  indefinido = (acop*100) / 74
  cromo = 0.18 * indefinido
  niquel = 0.08 * indefinido

  fmt.Printf("%.2f\n",cromo)
  fmt.Printf("%.2f\n",niquel)

  
}