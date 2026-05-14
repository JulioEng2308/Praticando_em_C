package main
import "fmt"

func main() {
  var numapost int
  var numsort int 
  var dig1apost int
  var dig2apost int
  var dig1sort int
  var dig2sort int

  fmt.Scanln(&numapost)
  fmt.Scanln(&numsort)
  
  dig1apost = numapost / 10
  dig2apost = numapost - (dig1apost * 10)

  dig1sort = numsort / 10
  dig2sort = numsort - (dig1sort * 10)
 
  
  if (numsort == numapost) {
    fmt.Println("Ganhou R$ 100.000,00")
  } else {
      if (dig1apost == dig2sort) && (dig2apost == dig1sort) {
        fmt.Println("Ganhou R$ 50.000,00")
      } else {
          if (dig1apost == dig1sort) || (dig2apost == dig2sort) ||
              (dig1apost == dig2sort) || (dig2apost == dig1sort){
            fmt.Println("Ganhou R$ 1.000,00")            
          } else {
              fmt.Println("Perdeu")
          }
      }
  }
  
  
}