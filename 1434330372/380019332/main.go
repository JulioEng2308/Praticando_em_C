package main
import "fmt"
//import "strings"

func main () {
    var destino string
    var percurso string
    var precos float32

    fmt.Scan(&destino)
    fmt.Scan(&percurso)

    //destino = strings.Tolower(destino)
    //percurso = strings.Tolower(percurso)
    
    if destino == "Belem" {
        if percurso == "ida" {
            precos = 350.0
        } else {
              if percurso == "ida-e-volta" {
                  precos = 650.0
              }
        }
      fmt.Printf("%.1f", precos)
    } else {
          if destino == "Borba" {
              if percurso == "ida" {
                  precos = 80.0
              } else {
                  if percurso == "ida-e-volta" {
                      precos = 152.0
                  }
              }
            fmt.Printf("%.1f", precos)
          } else {
              if destino == "Coari" {
                  if percurso == "ida" {
                      precos = 106.0
                  } else {
                      if percurso == "ida-e-volta" {
                          precos = 199.0
                      }
                  }
                fmt.Printf("%.1f", precos)
              } else {
                  if destino == "Humaita" {
                      if percurso == "ida" {
                          precos = 200.0
                      } else {
                          if percurso == "ida-e-volta" {
                              precos = 390.0
                          }
                      }
                    fmt.Printf("%.1f", precos)
                  } else {
                      if destino == "Manicore" {
                          if percurso == "ida" {
                              precos = 150.0
                          } else {
                              if percurso == "ida-e-volta" {
                                  precos = 280.0
                          }
                        }
                        fmt.Printf("%.1f", precos)
                      } else {
                          if destino == "Maues" {
                              if percurso == "ida" {
                                  precos = 100.0
                              } else {
                                  if percurso =="ida-e-volta" {
                                      precos = 190.0
                                  }
                              }
                            fmt.Printf("%.1f", precos)
                          } else {
                              fmt.Print("Destino inexistente")
                          }
                      }
                  }
              }
          }
    }

    
}