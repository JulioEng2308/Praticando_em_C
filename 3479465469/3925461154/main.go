package main 
import "fmt"

func main () {
  var gratifica float32
  var indiH float32
  var numextra float32
  var numfalta float32

  fmt.Scan(&numextra)
  fmt.Scan(&numfalta)

  indiH = (numextra) - (1.0/4.0 * numfalta)
  
  if indiH <= 400 {
      gratifica = 100.0
      fmt.Printf("%.1f extras e %.1f de falta\n", numextra, numfalta)
      fmt.Printf("R$ %.1f", gratifica)
  } else {
      gratifica = 500.0
      fmt.Printf("%.1f extras e %.1f de falta\n", numextra, numfalta)
      fmt.Printf("R$ %.1f ",gratifica)
  }

  
}