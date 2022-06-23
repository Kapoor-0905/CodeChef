package main
import "fmt"

func main(){
    var arr string
    var lent,t int
    fmt.Scanln(&t)
    for i := 0; i<t; i++{
        fmt.Scanln(&lent)
        fmt.Scanln(&arr)
        for j :=0 ; j<lent ; j+=2{
            if arr[j] == '0' && arr[j+1] == '0' {
                fmt.Print("A")
              } else if arr[j] == '0' && arr[j+1] == '1' {
                fmt.Print("T")
              } else if arr[j] == '1' && arr[j+1] == '0' {
                fmt.Print("C")
              } else {
                fmt.Print("G")
              }
        }
          fmt.Println("")
    }
 }
