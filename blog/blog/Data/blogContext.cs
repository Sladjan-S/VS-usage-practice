using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;

namespace blog.Models
{
    public class blogContext : DbContext
    {
        public blogContext (DbContextOptions<blogContext> options)
            : base(options)
        {
        }

        public DbSet<blog.Models.Post> Post { get; set; }
    }
}
