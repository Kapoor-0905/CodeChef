package main
import "fmt"
import "math"

func main(){
  var t,x,y,dif int
  fmt.Scanln(&t)
  for i:=0;i<t;i++ {
    fmt.Scan(&x,&y)
    dif = Abs(x-y)
    if dif%2 == 0 {
      fmt.Println(dif/2)
    } else {
      fmt.Println((dif/2)+1)
    }
  }
}
