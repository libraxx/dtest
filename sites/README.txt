This directory structure contains the settings and configuration files specific
to your site or sites and is an integral part of multisite configuration.

The sites/all/ subdirectory structure should be used to place your custom and
downloaded extensions including modules, themes, and third party libraries.

Downloaded installation profiles should be placed in the /profiles directory
in the Drupal root.

In multisite configuration, extensions found in the sites/all directory
structure are available to all sites. Alternatively, the sites/your_site_name/
subdirectory pattern may be used to restrict extensions to a specific
site instance.

See the respective README.txt files in sites/all/themes and sites/all/modules
for additional information about obtaining and organizing extensions.

See INSTALL.txt in the Drupal root for information about single-site
installation or multisite configuration.

CREATE TABLE block_morelink (
  module varchar(64) NOT NULL,
  delta varchar(32) NOT NULL,
  url varchar(255) NOT NULL,
  title varchar(255) NOT NULL,
  PRIMARY KEY (module,delta,url,title),
)


ddd
ccc