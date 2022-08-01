package main
import "fmt"

func main(){
  var t,n,x,quo,quo1 int
  fmt.Scanln(&t)
  for i:=0;i<t;i++ {
    fmt.Scan(&n,&x)
    quo = n/x
    quo1 = quo/3
    fmt.Println(quo1)
  }
}
