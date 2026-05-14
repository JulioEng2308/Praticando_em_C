package main
import (
      "fmt"
      "math"
)


func main () {
    var nota1 float64
    var nota2 float64
    var nota3 float64
    var media float64
    var letras string
    
    fmt.Scanln(&nota1)
    fmt.Scanln(&nota2)
    fmt.Scanln(&nota3)

    media = (nota1 + nota2 + nota3) / 3
    

    if media >= 7.0 {
        letras = "A"
        fmt.Println(math.Round(media * math.Pow(10.0,2.0))/ math.Pow(10.0,2.0), letras)
    } else {
        if (media < 7.0) && (media >= 5.0) {
            letras = "ER"
            fmt.Printf("%.1f", (math.Round(media * math.Pow(10.0,2.0))/ math.Pow(10.0,2.0)))
            fmt.Print(" ",letras)
        } else {
              if (media < 5.0) {
                  letras = "R"
                  fmt.Println(math.Round(media * math.Pow(10.0,2.0))/ math.Pow(10.0,2.0), letras)
              }
        }
    }
    
}