## SEQUENCE CONTAINERS

# std::vector

# std::deque

# std::array

# std::list

# std::forward_list

## ASOCIATIVE CONTAINTERS

# std::set

usuwa duplikaty i od razu sortuje

# std::multiset

A multiset is a set where duplicate elements are allowed.

# std::map

A map (also called an associative array) is a set where each element is a pair, called a key/value pair. The key is used for sorting and indexing the data, and must be unique. The value is the actual data.

# std::multimap 

A multimap (also called a dictionary) is a map that allows duplicate keys. Real-life dictionaries are multimaps: the key is the word, and the value is the meaning of the word. All the keys are sorted in ascending order, and you can look up the value by key. Some words can have multiple meanings, which is why the dictionary is a multimap rather than a map.

## CONTAINER ADAPTERS

# std::stack

A stack is a container where elements operate in a LIFO (Last In, First Out) context, where elements are inserted (pushed) and removed (popped) from the end of the container. Stacks default to using deque as their default sequence container (which seems odd, since vector seems like a more natural fit), but can use vector or list as well.

# std::queue

A queue is a container where elements operate in a FIFO (First In, First Out) context, where elements are inserted (pushed) to the back of the container and removed (popped) from the front. Queues default to using deque, but can also use list.

# std::priotity_queue

A priority queue is a type of queue where the elements are kept sorted (via operator<). When elements are pushed, the element is sorted in the queue. Removing an element from the front returns the highest priority item in the priority queue.

