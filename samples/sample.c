class Foo {
    int some_int;
    float some_float;
    mapping some_mapping;
    string some_string;
    string *some_ints ;
    float *some_floats ;
    mapping *some_mappings ;
    string *some_strings ;
}

nosave int a_global_int = 10;

varargs nomask void some_function(int a, float b, mapping c, string d) {
    class Foo foo ;
    class Foo foo2 ;
    int another_number ;
    int hex_number ;
    float another_float ;
    object ob ;
    string multi_line_string, *multi_line_array ;

    foo = new(class Foo);
    foo->some_int = a;
    foo->some_float = b;
    foo->some_mapping = c;
    foo->some_string = d;
    foo->some_ints = ({ 1, 2, 3 });
    foo->some_floats = ({ 1.0, 2.0, 3.0 });
    foo->some_mappings = ({ ([ "a" : 1 ]), ([ "b" : 2 ]), ([ "c" : 3 ]) });
    foo->some_strings = ({ "a", "b", "c" });

    foo2 = new(class Foo);
    foo2.some_int = a;
    foo2.some_float = b;
    foo2.some_mapping = c;
    foo2.some_string = d;
    foo2.some_ints = ({ 1, 2, 3 });
    foo2.some_floats = ({ 1.0, 2.0, 3.0 });
    foo2.some_mappings = ({ ([ "a" : 1 ]), ([ "b" : 2 ]), ([ "c" : 3 ]) });
    foo2.some_strings = ({ "a", "b", "c" });

    another_number = 100_100
    another_float = 100_100.100_100
    hex_number = 0x123;

    ob->remove() ;
    this_object()->remove() ;
    remove() ;

    multi_line_string = @text
This is a multiline string.
We stan a good multiline string.
text;

    multi_line_array = @@lines
This is a multiline array.
Heckin' yeah we love a multiline array.
lines ;
    return;
}

void run() {
    string text = @text
   The soft, black and white pelt has been expertly cured to preserve the
texture and hairs of the panda's fur. Though the skin is quite beautiful,
the animal itself must have been even more majestic.
text
;

}
