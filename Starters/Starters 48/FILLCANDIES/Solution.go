package main
import "fmt"

func main(){
  var t,n,k,m,bags,quo,rem int
  fmt.Scanln(&t)
  for i:=0;i<t;i++ {
    fmt.Scan(&n,&k,&m)
    bags = k*m
    quo = n/bags
    rem = n%bags
    if rem == 0 {
      fmt.Println(quo)
    } else if rem!=0 {
      fmt.Println(quo+1)
    }
  }
}
