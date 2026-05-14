package main
import "fmt"

func main () {
  var quantbranco int
  var quantpreto int
  var pesobranco float32
  var pesopreto float32
  var pesoqualquer float32
  var natural int
  var raçaboi string
  var quant int 
  var loop1 int
  var loop2 int 
  
  fmt.Scan(&natural)

  for loop1 = 0; loop1 < natural; loop1++ {
      fmt.Scan(&raçaboi)
      fmt.Scan(&quant)
      for loop2 = 0; loop2 < quant; loop2++ {
          fmt.Scan(&pesoqualquer)
          if raçaboi == "b" {
              quantbranco++
              pesobranco = pesobranco + pesoqualquer
          } else {
              if raçaboi == "p" {
                  quantpreto++
                  pesopreto = pesopreto + pesoqualquer
              }
          }
      }


    
  }
    fmt.Printf("Quantidade de bois brancos: %d\n", quantbranco)
    fmt.Printf("Peso total dos bois brancos: %.2f KG\n", pesobranco)
    fmt.Printf("Quantidade de bois pretos: %d\n", quantpreto)
    fmt.Printf("Peso total dos bois pretos: %.2f KG\n", pesopreto)
  
  

  

  
}