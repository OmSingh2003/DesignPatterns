package golang

import "fmt"

type Lfu struct{}

func (l *Lfu) evict(c *Cache) {
	fmt.Println("Evicting by fifo strategy")
}
