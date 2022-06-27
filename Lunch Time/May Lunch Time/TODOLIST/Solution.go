package main
import "fmt"

func main(){
  var t int 
  var c1, c2 int = 0
  var n int
  var arr[1000] int
  fmt.Scanln(&t)
  for i:=0;i<t;i++{
    fmt.Scanln(&n)
    for j:=0;j<n;j++{
      fmt.Scan(&arr[j])
       if arr[j]>=1000 {
	        ++c1;
	     }
	     else{
	        c2++;
	     }
	  }
	  fmt.Print(c1);
	  c1=0;
  }
}
