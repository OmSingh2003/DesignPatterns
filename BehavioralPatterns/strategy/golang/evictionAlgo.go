package golang

type EvictionAlgo interface {
	evict(c *Cache)
}
