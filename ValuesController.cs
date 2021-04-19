using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;

namespace WindowsService1
{
   
    public class ValuesController : ApiController
    {
        
        public String GetString(Int32 id)
        {
            
            MipSdkDotNetQuickstart.Action action = new MipSdkDotNetQuickstart.Action();
           // action.SetLabel();

            return "This is string returned through the Windows service. with id=" + id;
        }
        
        public String PostString(String s)
        {
            return "return some stirng with user provided string : "+s;
        }
    }
}