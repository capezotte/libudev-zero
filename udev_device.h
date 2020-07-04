char *udev_device_read_uevent(struct udev_device *udev_device, const char *name);
char *udev_device_read_symlink(struct udev_device *udev_device, const char *name);
void udev_device_set_properties(struct udev_device *udev_device);
void udev_device_set_subsystem(struct udev_device *udev_device);
void udev_device_set_sysname(struct udev_device *udev_device);
void udev_device_set_devnode(struct udev_device *udev_device);
void udev_device_set_devtype(struct udev_device *udev_device);
void udev_device_set_driver(struct udev_device *udev_device);
void udev_device_set_sysnum(struct udev_device *udev_device);
void udev_device_set_devnum(struct udev_device *udev_device);
