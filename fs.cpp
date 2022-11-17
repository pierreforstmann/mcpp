// fs.cpo
//

#include "Resource.h"
#include <string>
using std::string;

int main()
{
   {
       Resource localResource("local");
       string localString = localResource.GetName();
   }
   Resource *pResource = new Resource("created with new");
   string newString = pResource->GetName();
   int j = 3;
   delete pResource;

   pResource = nullptr;
   delete pResource;

   return 0;
}
