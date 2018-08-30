using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace blog.Models
{
    public class Post
    {
        public int PostID { get; set; }

        public string Title { get; set; }
        [DataType(DataType.MultilineText)]
        public string Body { get; set; }
        [Display(Name="Post Time")]
        public DateTime PostedAt { get; set; }

        public string PostedBy { get; set; }
    }
}
