class LRUCache:public Cache{
public:
    LRUCache(int i):Cache(){
        cp = i;
        head = nullptr;
        tail = nullptr;
    }
    void set(int k,int v){
        if(cp <= 0)return;
        if(mp.size() == 0){
            Node *node = new Node(k,v);
            InsertIntoHead(node);
            mp.insert(make_pair(k,node));
        }
        else if(mp.find(k)!=mp.end()){
            auto it = mp[k];
            it->value = v;
            InsertIntoHead(it);
        }
        else if(mp.size() < cp){
            Node *node = new Node(k,v);
            InsertIntoHead(node);
            mp.insert(make_pair(k,node));
        }
        else{
            auto it = tail;
            mp.erase(it->key);
            LinkedListDelete(it);
            delete it;
            Node *node = new Node(k,v);
            InsertIntoHead(node);
            mp.insert(make_pair(k,node));
        }
    }
    int get(int k){
        if(mp.find(k) != mp.end()){
            InsertIntoHead(mp[k]);
            return mp[k]->value;
        }
        else return -1;
    }
private:
    void LinkedListDelete(Node* node){
        if(!node)return;
    if(node-> prev)
    {
      node->prev->next = node->next;
    }
    if(node->next)
    {
      node->next->prev = node->prev;
    }
    if(node == head)
    {
      head = node->next;
    }
    if(node == tail)
    {
      tail = node->prev;
    }
    }
    void InsertIntoHead(Node* node)
  {
    if(!node) return;
    LinkedListDelete(node);
    if(head)
      head->prev = node;
    node->next = head;
    node->prev = nullptr;
    if(!tail) tail = node;
    head = node;
  }
};