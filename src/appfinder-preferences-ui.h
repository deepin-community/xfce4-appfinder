/* automatically generated from appfinder-preferences.glade */
#ifdef __SUNPRO_C
#pragma align 4 (appfinder_preferences_ui)
#endif
#ifdef __GNUC__
static const char appfinder_preferences_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char appfinder_preferences_ui[] =
#endif
{
  "<?xml version=\"1.0\" encoding=\"UTF-8\"?><interface><requires lib=\"gt"
  "k+\" version=\"3.22\"/><requires lib=\"libxfce4ui-2\" version=\"4.14\"/"
  "><object class=\"GtkListStore\" id=\"action-types\"><columns><column ty"
  "pe=\"gchararray\"/></columns><data><row><col id=\"0\" translatable=\"ye"
  "s\">Prefix</col></row><row><col id=\"0\" translatable=\"yes\">Regular E"
  "xpression</col></row></data></object><object class=\"GtkListStore\" id="
  "\"actions-store\"><columns><column type=\"gchararray\"/><column type=\""
  "gint\"/></columns></object><object class=\"GtkListStore\" id=\"icon-siz"
  "es\"><columns><column type=\"gchararray\"/></columns><data><row><col id"
  "=\"0\" translatable=\"yes\">Very Small</col></row><row><col id=\"0\" tr"
  "anslatable=\"yes\">Smaller</col></row><row><col id=\"0\" translatable=\""
  "yes\">Small</col></row><row><col id=\"0\" translatable=\"yes\">Normal</"
  "col></row><row><col id=\"0\" translatable=\"yes\">Large</col></row><row"
  "><col id=\"0\" translatable=\"yes\">Larger</col></row><row><col id=\"0\""
  " translatable=\"yes\">Very Large</col></row></data></object><object cla"
  "ss=\"GtkImage\" id=\"image3\"><property name=\"visible\">True</property"
  "><property name=\"can_focus\">False</property><property name=\"icon_nam"
  "e\">edit-clear</property></object><object class=\"GtkImage\" id=\"image"
  "4\"><property name=\"visible\">True</property><property name=\"can_focu"
  "s\">False</property><property name=\"icon_name\">window-close</property"
  "></object><object class=\"GtkImage\" id=\"image5\"><property name=\"vis"
  "ible\">True</property><property name=\"can_focus\">False</property><pro"
  "perty name=\"icon_name\">help-browser</property></object><object class="
  "\"XfceTitledDialog\" id=\"dialog\"><property name=\"can_focus\">False</"
  "property><property name=\"title\" translatable=\"yes\">Application Find"
  "er</property><property name=\"default_width\">385</property><property n"
  "ame=\"default_height\">425</property><property name=\"icon_name\">gtk-p"
  "references</property><property name=\"type_hint\">dialog</property><chi"
  "ld internal-child=\"vbox\"><object class=\"GtkVBox\" id=\"dialog-vbox1\""
  "><property name=\"visible\">True</property><property name=\"can_focus\""
  ">False</property><property name=\"spacing\">2</property><child internal"
  "-child=\"action_area\"><object class=\"GtkHButtonBox\" id=\"dialog-acti"
  "on_area1\"><property name=\"visible\">True</property><property name=\"c"
  "an_focus\">False</property><property name=\"layout_style\">end</propert"
  "y><child><object class=\"GtkButton\" id=\"button-close\"><property name"
  "=\"label\">_Close</property><property name=\"use_action_appearance\">Fa"
  "lse</property><property name=\"visible\">True</property><property name="
  "\"can_focus\">True</property><property name=\"receives_default\">True</"
  "property><property name=\"image\">image4</property><property name=\"use"
  "_underline\">True</property></object><packing><property name=\"expand\""
  ">False</property><property name=\"fill\">False</property><property name"
  "=\"position\">0</property></packing></child><child><object class=\"GtkB"
  "utton\" id=\"button-help\"><property name=\"label\">_Help</property><pr"
  "operty name=\"use_action_appearance\">False</property><property name=\""
  "visible\">True</property><property name=\"can_focus\">True</property><p"
  "roperty name=\"receives_default\">False</property><property name=\"imag"
  "e\">image5</property><property name=\"use_underline\">True</property></"
  "object><packing><property name=\"expand\">False</property><property nam"
  "e=\"fill\">False</property><property name=\"position\">0</property><pro"
  "perty name=\"secondary\">True</property></packing></child></object><pac"
  "king><property name=\"expand\">False</property><property name=\"fill\">"
  "True</property><property name=\"pack_type\">end</property><property nam"
  "e=\"position\">0</property></packing></child><child><object class=\"Gtk"
  "Notebook\" id=\"notebook1\"><property name=\"visible\">True</property><"
  "property name=\"can_focus\">True</property><property name=\"border_widt"
  "h\">6</property><child><object class=\"GtkVBox\" id=\"vbox3\"><property"
  " name=\"visible\">True</property><property name=\"can_focus\">False</pr"
  "operty><property name=\"border_width\">12</property><property name=\"sp"
  "acing\">18</property><child><object class=\"GtkFrame\" id=\"frame1\"><p"
  "roperty name=\"visible\">True</property><property name=\"can_focus\">Fa"
  "lse</property><property name=\"label_xalign\">0</property><property nam"
  "e=\"shadow_type\">none</property><child><object class=\"GtkAlignment\" "
  "id=\"alignment2\"><property name=\"visible\">True</property><property n"
  "ame=\"can_focus\">False</property><property name=\"top_padding\">6</pro"
  "perty><property name=\"left_padding\">12</property><child><object class"
  "=\"GtkVBox\" id=\"vbox4\"><property name=\"visible\">True</property><pr"
  "operty name=\"can_focus\">False</property><property name=\"spacing\">6<"
  "/property><child><object class=\"GtkCheckButton\" id=\"remember-categor"
  "y\"><property name=\"label\" translatable=\"yes\">Remember last _select"
  "ed category</property><property name=\"use_action_appearance\">False</p"
  "roperty><property name=\"visible\">True</property><property name=\"can_"
  "focus\">True</property><property name=\"receives_default\">False</prope"
  "rty><property name=\"use_underline\">True</property><property name=\"dr"
  "aw_indicator\">True</property></object><packing><property name=\"expand"
  "\">True</property><property name=\"fill\">True</property><property name"
  "=\"position\">0</property></packing></child><child><object class=\"GtkC"
  "heckButton\" id=\"always-center\"><property name=\"label\" translatable"
  "=\"yes\">Always c_enter the window</property><property name=\"use_actio"
  "n_appearance\">False</property><property name=\"visible\">True</propert"
  "y><property name=\"can_focus\">True</property><property name=\"receives"
  "_default\">False</property><property name=\"tooltip_text\" translatable"
  "=\"yes\">Center the window on startup.</property><property name=\"use_u"
  "nderline\">True</property><property name=\"draw_indicator\">True</prope"
  "rty></object><packing><property name=\"expand\">True</property><propert"
  "y name=\"fill\">True</property><property name=\"position\">1</property>"
  "</packing></child><child><object class=\"GtkCheckButton\" id=\"enable-s"
  "ervice\"><property name=\"label\" translatable=\"yes\">Keep running _in"
  "stance in the background</property><property name=\"use_action_appearan"
  "ce\">False</property><property name=\"visible\">True</property><propert"
  "y name=\"can_focus\">True</property><property name=\"receives_default\""
  ">False</property><property name=\"tooltip_text\" translatable=\"yes\">I"
  "nstead of quitting the application when the last window is closed, keep"
  " a running instance to speed up opening new windows. You might want to "
  "disable this to reduce memory usage.</property><property name=\"use_und"
  "erline\">True</property><property name=\"active\">True</property><prope"
  "rty name=\"draw_indicator\">True</property></object><packing><property "
  "name=\"expand\">True</property><property name=\"fill\">True</property><"
  "property name=\"position\">2</property></packing></child><child><object"
  " class=\"GtkCheckButton\" id=\"single-window\"><property name=\"label\""
  " translatable=\"yes\">Single window</property><property name=\"use_acti"
  "on_appearance\">False</property><property name=\"visible\">True</proper"
  "ty><property name=\"can_focus\">True</property><property name=\"receive"
  "s_default\">False</property><property name=\"tooltip_text\" translatabl"
  "e=\"yes\">When an instance is running in the background, only open one "
  "window at a time.</property><property name=\"use_underline\">True</prop"
  "erty><property name=\"active\">True</property><property name=\"draw_ind"
  "icator\">True</property></object><packing><property name=\"expand\">Tru"
  "e</property><property name=\"fill\">True</property><property name=\"pos"
  "ition\">3</property></packing></child><child><object class=\"GtkCheckBu"
  "tton\" id=\"sort-by-frecency\"><property name=\"label\" translatable=\""
  "yes\">Sort recently used items first</property><property name=\"use_act"
  "ion_appearance\">False</property><property name=\"visible\">True</prope"
  "rty><property name=\"can_focus\">True</property><property name=\"receiv"
  "es_default\">False</property><property name=\"tooltip_text\" translatab"
  "le=\"yes\">Order items, such that items that are most recently used are"
  " always on the top.</property><property name=\"use_underline\">True</pr"
  "operty><property name=\"draw_indicator\">True</property></object><packi"
  "ng><property name=\"expand\">True</property><property name=\"fill\">Tru"
  "e</property><property name=\"position\">4</property></packing></child><"
  "/object></child></object></child><child type=\"label\"><object class=\""
  "GtkLabel\" id=\"label6\"><property name=\"visible\">True</property><pro"
  "perty name=\"can_focus\">False</property><property name=\"label\" trans"
  "latable=\"yes\">Behaviour</property><attributes><attribute name=\"weigh"
  "t\" value=\"bold\"/></attributes></object></child></object><packing><pr"
  "operty name=\"expand\">False</property><property name=\"fill\">True</pr"
  "operty><property name=\"position\">0</property></packing></child><child"
  "><object class=\"GtkFrame\" id=\"frame3\"><property name=\"visible\">Tr"
  "ue</property><property name=\"can_focus\">False</property><property nam"
  "e=\"label_xalign\">0</property><property name=\"shadow_type\">none</pro"
  "perty><child><object class=\"GtkAlignment\" id=\"alignment5\"><property"
  " name=\"visible\">True</property><property name=\"can_focus\">False</pr"
  "operty><property name=\"top_padding\">6</property><property name=\"left"
  "_padding\">12</property><child><object class=\"GtkTable\" id=\"table2\""
  "><property name=\"visible\">True</property><property name=\"can_focus\""
  ">False</property><property name=\"n_rows\">4</property><property name=\""
  "n_columns\">2</property><property name=\"column_spacing\">12</property>"
  "<property name=\"row_spacing\">6</property><child><object class=\"GtkCh"
  "eckButton\" id=\"icon-view\"><property name=\"label\" translatable=\"ye"
  "s\">_View items as icons</property><property name=\"use_action_appearan"
  "ce\">False</property><property name=\"visible\">True</property><propert"
  "y name=\"can_focus\">True</property><property name=\"receives_default\""
  ">False</property><property name=\"use_underline\">True</property><prope"
  "rty name=\"draw_indicator\">True</property></object><packing><property "
  "name=\"right_attach\">2</property><property name=\"y_options\"/></packi"
  "ng></child><child><object class=\"GtkCheckButton\" id=\"text-beside-ico"
  "ns\"><property name=\"label\" translatable=\"yes\">Text besi_de icons</"
  "property><property name=\"use_action_appearance\">False</property><prop"
  "erty name=\"visible\">True</property><property name=\"can_focus\">True<"
  "/property><property name=\"receives_default\">False</property><property"
  " name=\"use_underline\">True</property><property name=\"draw_indicator\""
  ">True</property></object><packing><property name=\"right_attach\">2</pr"
  "operty><property name=\"top_attach\">1</property><property name=\"y_opt"
  "ions\"/></packing></child><child><object class=\"GtkLabel\" id=\"label9"
  "\"><property name=\"visible\">True</property><property name=\"can_focus"
  "\">False</property><property name=\"label\" translatable=\"yes\">Ite_m "
  "icon size:</property><property name=\"use_underline\">True</property><p"
  "roperty name=\"mnemonic_widget\">item-icon-size</property><property nam"
  "e=\"xalign\">0</property></object><packing><property name=\"top_attach\""
  ">2</property><property name=\"bottom_attach\">3</property><property nam"
  "e=\"x_options\">GTK_FILL</property><property name=\"y_options\"/></pack"
  "ing></child><child><object class=\"GtkCheckButton\" id=\"hide-category-"
  "pane\"><property name=\"label\" translatable=\"yes\">Hide category pane"
  "</property><property name=\"use_action_appearance\">False</property><pr"
  "operty name=\"visible\">True</property><property name=\"can_focus\">Tru"
  "e</property><property name=\"receives_default\">False</property><proper"
  "ty name=\"tooltip_text\" translatable=\"yes\">Hide category panel and s"
  "how all applications.</property><property name=\"use_underline\">True</"
  "property><property name=\"active\">False</property><property name=\"dra"
  "w_indicator\">True</property></object><packing><property name=\"left_at"
  "tach\">0</property><property name=\"right_attach\">2</property><propert"
  "y name=\"top_attach\">3</property><property name=\"bottom_attach\">4</p"
  "roperty><property name=\"y_options\"/></packing></child><child><object "
  "class=\"GtkLabel\" id=\"label10\"><property name=\"visible\">True</prop"
  "erty><property name=\"can_focus\">False</property><property name=\"labe"
  "l\" translatable=\"yes\">Categ_ory icon size:</property><property name="
  "\"use_underline\">True</property><property name=\"mnemonic_widget\">cat"
  "egory-icon-size</property><property name=\"xalign\">0</property></objec"
  "t><packing><property name=\"top_attach\">4</property><property name=\"b"
  "ottom_attach\">5</property><property name=\"x_options\">GTK_FILL</prope"
  "rty><property name=\"y_options\"/></packing></child><child><object clas"
  "s=\"GtkComboBox\" id=\"item-icon-size\"><property name=\"visible\">True"
  "</property><property name=\"can_focus\">False</property><property name="
  "\"model\">icon-sizes</property><child><object class=\"GtkCellRendererTe"
  "xt\" id=\"cellrenderertext4\"/><attributes><attribute name=\"text\">0</"
  "attribute></attributes></child></object><packing><property name=\"left_"
  "attach\">1</property><property name=\"right_attach\">2</property><prope"
  "rty name=\"top_attach\">2</property><property name=\"bottom_attach\">3<"
  "/property><property name=\"y_options\"/></packing></child><child><objec"
  "t class=\"GtkComboBox\" id=\"category-icon-size\"><property name=\"visi"
  "ble\">True</property><property name=\"can_focus\">False</property><prop"
  "erty name=\"model\">icon-sizes</property><child><object class=\"GtkCell"
  "RendererText\" id=\"cellrenderertext2\"/><attributes><attribute name=\""
  "text\">0</attribute></attributes></child></object><packing><property na"
  "me=\"left_attach\">1</property><property name=\"right_attach\">2</prope"
  "rty><property name=\"top_attach\">4</property><property name=\"bottom_a"
  "ttach\">5</property><property name=\"y_options\"/></packing></child></o"
  "bject></child></object></child><child type=\"label\"><object class=\"Gt"
  "kLabel\" id=\"label5\"><property name=\"visible\">True</property><prope"
  "rty name=\"can_focus\">False</property><property name=\"label\" transla"
  "table=\"yes\">Appearance</property><property name=\"use_markup\">True</"
  "property><attributes><attribute name=\"weight\" value=\"bold\"/></attri"
  "butes></object></child></object><packing><property name=\"expand\">Fals"
  "e</property><property name=\"fill\">True</property><property name=\"pos"
  "ition\">1</property></packing></child><child><object class=\"GtkFrame\""
  " id=\"frame2\"><property name=\"visible\">True</property><property name"
  "=\"can_focus\">False</property><property name=\"label_xalign\">0</prope"
  "rty><property name=\"shadow_type\">none</property><child><object class="
  "\"GtkAlignment\" id=\"alignment3\"><property name=\"visible\">True</pro"
  "perty><property name=\"can_focus\">False</property><property name=\"xal"
  "ign\">0</property><property name=\"xscale\">0</property><property name="
  "\"yscale\">0</property><property name=\"top_padding\">6</property><prop"
  "erty name=\"left_padding\">12</property><child><object class=\"GtkButto"
  "n\" id=\"button-clear\"><property name=\"label\" translatable=\"yes\">C"
  "_lear Custom Command History</property><property name=\"use_action_appe"
  "arance\">False</property><property name=\"visible\">True</property><pro"
  "perty name=\"can_focus\">True</property><property name=\"receives_defau"
  "lt\">True</property><property name=\"image\">image3</property><property"
  " name=\"use_underline\">True</property></object></child></object></chil"
  "d><child type=\"label\"><object class=\"GtkLabel\" id=\"label7\"><prope"
  "rty name=\"visible\">True</property><property name=\"can_focus\">False<"
  "/property><property name=\"label\" translatable=\"yes\">History</proper"
  "ty><attributes><attribute name=\"weight\" value=\"bold\"/></attributes>"
  "</object></child></object><packing><property name=\"expand\">False</pro"
  "perty><property name=\"fill\">True</property><property name=\"position\""
  ">2</property></packing></child></object></child><child type=\"tab\"><ob"
  "ject class=\"GtkLabel\" id=\"label1\"><property name=\"visible\">True</"
  "property><property name=\"can_focus\">False</property><property name=\""
  "label\" translatable=\"yes\">_General</property><property name=\"use_un"
  "derline\">True</property></object><packing><property name=\"tab_fill\">"
  "False</property></packing></child><child><object class=\"GtkVBox\" id=\""
  "vbox1\"><property name=\"visible\">True</property><property name=\"can_"
  "focus\">False</property><property name=\"border_width\">12</property><p"
  "roperty name=\"spacing\">6</property><child><object class=\"GtkHBox\" i"
  "d=\"hbox1\"><property name=\"visible\">True</property><property name=\""
  "can_focus\">False</property><property name=\"spacing\">6</property><chi"
  "ld><object class=\"GtkScrolledWindow\" id=\"scrolledwindow1\"><property"
  " name=\"visible\">True</property><property name=\"can_focus\">True</pro"
  "perty><property name=\"shadow_type\">etched-in</property><child><object"
  " class=\"GtkTreeView\" id=\"actions-treeview\"><property name=\"visible"
  "\">True</property><property name=\"can_focus\">True</property><property"
  " name=\"model\">actions-store</property><property name=\"headers_clicka"
  "ble\">False</property><property name=\"rules_hint\">True</property><pro"
  "perty name=\"enable_search\">False</property><property name=\"search_co"
  "lumn\">0</property><child internal-child=\"selection\"><object class=\""
  "GtkTreeSelection\"/></child><child><object class=\"GtkTreeViewColumn\" "
  "id=\"treeviewcolumn1\"><property name=\"title\" translatable=\"yes\">Pa"
  "ttern</property><child><object class=\"GtkCellRendererText\" id=\"cellr"
  "enderertext1\"/><attributes><attribute name=\"text\">0</attribute></att"
  "ributes></child></object></child></object></child></object><packing><pr"
  "operty name=\"expand\">True</property><property name=\"fill\">True</pro"
  "perty><property name=\"position\">0</property></packing></child><child>"
  "<object class=\"GtkAlignment\" id=\"alignment1\"><property name=\"visib"
  "le\">True</property><property name=\"can_focus\">False</property><prope"
  "rty name=\"yalign\">0</property><property name=\"xscale\">0</property><"
  "property name=\"yscale\">0</property><child><object class=\"GtkVBox\" i"
  "d=\"vbox2\"><property name=\"visible\">True</property><property name=\""
  "can_focus\">False</property><property name=\"spacing\">6</property><chi"
  "ld><object class=\"GtkButton\" id=\"button-add\"><property name=\"use_a"
  "ction_appearance\">False</property><property name=\"visible\">True</pro"
  "perty><property name=\"can_focus\">True</property><property name=\"rece"
  "ives_default\">True</property><property name=\"tooltip_text\" translata"
  "ble=\"yes\">Add a new custom action.</property><child><object class=\"G"
  "tkImage\" id=\"image1\"><property name=\"visible\">True</property><prop"
  "erty name=\"can_focus\">False</property><property name=\"icon_name\">li"
  "st-add</property></object></child></object><packing><property name=\"ex"
  "pand\">True</property><property name=\"fill\">True</property><property "
  "name=\"position\">0</property></packing></child><child><object class=\""
  "GtkButton\" id=\"button-remove\"><property name=\"use_action_appearance"
  "\">False</property><property name=\"visible\">True</property><property "
  "name=\"can_focus\">True</property><property name=\"receives_default\">T"
  "rue</property><property name=\"tooltip_text\" translatable=\"yes\">Remo"
  "ve the currently selected action.</property><child><object class=\"GtkI"
  "mage\" id=\"image2\"><property name=\"visible\">True</property><propert"
  "y name=\"can_focus\">False</property><property name=\"icon_name\">edit-"
  "delete</property></object></child></object><packing><property name=\"ex"
  "pand\">True</property><property name=\"fill\">True</property><property "
  "name=\"position\">1</property></packing></child></object></child></obje"
  "ct><packing><property name=\"expand\">False</property><property name=\""
  "fill\">True</property><property name=\"position\">1</property></packing"
  "></child></object><packing><property name=\"expand\">True</property><pr"
  "operty name=\"fill\">True</property><property name=\"position\">0</prop"
  "erty></packing></child><child><object class=\"GtkTable\" id=\"table1\">"
  "<property name=\"visible\">True</property><property name=\"can_focus\">"
  "False</property><property name=\"n_rows\">4</property><property name=\""
  "n_columns\">2</property><property name=\"column_spacing\">12</property>"
  "<property name=\"row_spacing\">6</property><child><object class=\"GtkEn"
  "try\" id=\"command\"><property name=\"visible\">True</property><propert"
  "y name=\"can_focus\">True</property><property name=\"tooltip_text\" tra"
  "nslatable=\"yes\">If the type is set to prefix, %s will be replaced wit"
  "h the string after the pattern, %S with the complete entry text. For re"
  "gular expressions you can use \\0 and \\&lt;num&gt;.</property><propert"
  "y name=\"invisible_char\">\342\200\242</property><property name=\"prima"
  "ry_icon_activatable\">False</property><property name=\"secondary_icon_a"
  "ctivatable\">False</property></object><packing><property name=\"left_at"
  "tach\">1</property><property name=\"right_attach\">2</property><propert"
  "y name=\"top_attach\">2</property><property name=\"bottom_attach\">3</p"
  "roperty></packing></child><child><object class=\"GtkEntry\" id=\"patter"
  "n\"><property name=\"visible\">True</property><property name=\"can_focu"
  "s\">True</property><property name=\"invisible_char\">\342\200\242</prop"
  "erty><property name=\"primary_icon_activatable\">False</property><prope"
  "rty name=\"secondary_icon_activatable\">False</property></object><packi"
  "ng><property name=\"left_attach\">1</property><property name=\"right_at"
  "tach\">2</property><property name=\"top_attach\">1</property><property "
  "name=\"bottom_attach\">2</property></packing></child><child><object cla"
  "ss=\"GtkLabel\" id=\"label4\"><property name=\"visible\">True</property"
  "><property name=\"can_focus\">False</property><property name=\"label\" "
  "translatable=\"yes\">Co_mmand:</property><property name=\"use_underline"
  "\">True</property><property name=\"mnemonic_widget\">command</property>"
  "<property name=\"xalign\">0</property></object><packing><property name="
  "\"top_attach\">2</property><property name=\"bottom_attach\">3</property"
  "><property name=\"x_options\">GTK_FILL</property></packing></child><chi"
  "ld><object class=\"GtkLabel\" id=\"label3\"><property name=\"visible\">"
  "True</property><property name=\"can_focus\">False</property><property n"
  "ame=\"label\" translatable=\"yes\">Patte_rn:</property><property name=\""
  "use_underline\">True</property><property name=\"mnemonic_widget\">patte"
  "rn</property><property name=\"xalign\">0</property></object><packing><p"
  "roperty name=\"top_attach\">1</property><property name=\"bottom_attach\""
  ">2</property><property name=\"x_options\">GTK_FILL</property></packing>"
  "</child><child><object class=\"GtkLabel\" id=\"label8\"><property name="
  "\"visible\">True</property><property name=\"can_focus\">False</property"
  "><property name=\"label\" translatable=\"yes\">_Type:</property><proper"
  "ty name=\"use_underline\">True</property><property name=\"xalign\">0</p"
  "roperty></object><packing><property name=\"x_options\">GTK_FILL</proper"
  "ty></packing></child><child><object class=\"GtkCheckButton\" id=\"save\""
  "><property name=\"label\" translatable=\"yes\">_Save match in command h"
  "istory</property><property name=\"use_action_appearance\">False</proper"
  "ty><property name=\"visible\">True</property><property name=\"can_focus"
  "\">True</property><property name=\"receives_default\">False</property><"
  "property name=\"use_underline\">True</property><property name=\"draw_in"
  "dicator\">True</property></object><packing><property name=\"left_attach"
  "\">1</property><property name=\"right_attach\">2</property><property na"
  "me=\"top_attach\">3</property><property name=\"bottom_attach\">4</prope"
  "rty></packing></child><child><placeholder/></child><child><object class"
  "=\"GtkComboBox\" id=\"type\"><property name=\"visible\">True</property>"
  "<property name=\"can_focus\">False</property><property name=\"hexpand\""
  ">True</property><property name=\"model\">action-types</property><child>"
  "<object class=\"GtkCellRendererText\" id=\"cellrenderertext3\"/><attrib"
  "utes><attribute name=\"text\">0</attribute></attributes></child></objec"
  "t><packing><property name=\"left_attach\">1</property><property name=\""
  "right_attach\">2</property></packing></child></object><packing><propert"
  "y name=\"expand\">False</property><property name=\"fill\">True</propert"
  "y><property name=\"position\">1</property></packing></child></object><p"
  "acking><property name=\"position\">1</property></packing></child><child"
  " type=\"tab\"><object class=\"GtkLabel\" id=\"label2\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">False</property><"
  "property name=\"label\" translatable=\"yes\">Custom _Actions</property>"
  "<property name=\"use_underline\">True</property></object><packing><prop"
  "erty name=\"position\">1</property><property name=\"tab_fill\">False</p"
  "roperty></packing></child></object><packing><property name=\"expand\">T"
  "rue</property><property name=\"fill\">True</property><property name=\"p"
  "osition\">1</property></packing></child></object></child><action-widget"
  "s><action-widget response=\"0\">button-close</action-widget><action-wid"
  "get response=\"-11\">button-help</action-widget></action-widgets></obje"
  "ct></interface>"
};

static const unsigned appfinder_preferences_ui_length = 23902u;

