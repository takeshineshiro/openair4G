/*
 * Automatically generated C config: don't edit
 * Linux kernel version: 2.6.16UML
 * Thu Jan 17 00:35:41 2008
 */
#define AUTOCONF_INCLUDED
#define CONFIG_GENERIC_HARDIRQS 1
#define CONFIG_UML 1
#define CONFIG_MMU 1
#define CONFIG_GENERIC_CALIBRATE_DELAY 1
#define CONFIG_IRQ_RELEASE_METHOD 1

/*
 * UML-specific options
 */
#undef CONFIG_MODE_TT
#define CONFIG_STATIC_LINK 1
#define CONFIG_MODE_SKAS 1

/*
 * Host processor type and features
 */
#undef CONFIG_M386
#undef CONFIG_M486
#undef CONFIG_M586
#undef CONFIG_M586TSC
#undef CONFIG_M586MMX
#define CONFIG_M686 1
#undef CONFIG_MPENTIUMII
#undef CONFIG_MPENTIUMIII
#undef CONFIG_MPENTIUMM
#undef CONFIG_MPENTIUM4
#undef CONFIG_MK6
#undef CONFIG_MK7
#undef CONFIG_MK8
#undef CONFIG_MCRUSOE
#undef CONFIG_MEFFICEON
#undef CONFIG_MWINCHIPC6
#undef CONFIG_MWINCHIP2
#undef CONFIG_MWINCHIP3D
#undef CONFIG_MGEODEGX1
#undef CONFIG_MGEODE_LX
#undef CONFIG_MCYRIXIII
#undef CONFIG_MVIAC3_2
#define CONFIG_X86_GENERIC 1
#define CONFIG_X86_CMPXCHG 1
#define CONFIG_X86_XADD 1
#define CONFIG_X86_L1_CACHE_SHIFT 7
#define CONFIG_RWSEM_XCHGADD_ALGORITHM 1
#define CONFIG_X86_PPRO_FENCE 1
#define CONFIG_X86_WP_WORKS_OK 1
#define CONFIG_X86_INVLPG 1
#define CONFIG_X86_BSWAP 1
#define CONFIG_X86_POPAD_OK 1
#define CONFIG_X86_CMPXCHG64 1
#define CONFIG_X86_GOOD_APIC 1
#define CONFIG_X86_INTEL_USERCOPY 1
#define CONFIG_X86_USE_PPRO_CHECKSUM 1
#define CONFIG_X86_TSC 1
#define CONFIG_UML_X86 1
#undef CONFIG_64BIT
#define CONFIG_SEMAPHORE_SLEEPERS 1
#define CONFIG_TOP_ADDR 0xc0000000
#undef CONFIG_3_LEVEL_PGTABLES
#define CONFIG_STUB_CODE 0xbfffe000
#define CONFIG_STUB_DATA 0xbffff000
#define CONFIG_STUB_START 0xbfffe000
#define CONFIG_ARCH_HAS_SC_SIGNALS 1
#define CONFIG_ARCH_REUSE_HOST_VSYSCALL_AREA 1
#define CONFIG_SELECT_MEMORY_MODEL 1
#define CONFIG_FLATMEM_MANUAL 1
#undef CONFIG_DISCONTIGMEM_MANUAL
#undef CONFIG_SPARSEMEM_MANUAL
#define CONFIG_FLATMEM 1
#define CONFIG_FLAT_NODE_MEM_MAP 1
#undef CONFIG_SPARSEMEM_STATIC
#define CONFIG_SPLIT_PTLOCK_CPUS 4
#define CONFIG_LD_SCRIPT_STATIC 1
#define CONFIG_NET 1
#define CONFIG_BINFMT_ELF 1
#define CONFIG_BINFMT_MISC_MODULE 1
#define CONFIG_HOSTFS_MODULE 1
#undef CONFIG_HPPFS
#define CONFIG_MCONSOLE 1
#undef CONFIG_MCONSOLE_EXEC
#undef CONFIG_MAGIC_SYSRQ
#define CONFIG_NEST_LEVEL 0
#define CONFIG_HIGHMEM 1
#define CONFIG_KERNEL_STACK_ORDER 2
#define CONFIG_UML_REAL_TIME_CLOCK 1

/*
 * Code maturity level options
 */
#define CONFIG_EXPERIMENTAL 1
#define CONFIG_BROKEN_ON_SMP 1
#define CONFIG_INIT_ENV_ARG_LIMIT 32

/*
 * General setup
 */
#define CONFIG_LOCALVERSION ""
#define CONFIG_LOCALVERSION_AUTO 1
#define CONFIG_SWAP 1
#define CONFIG_SYSVIPC 1
#define CONFIG_POSIX_MQUEUE 1
#define CONFIG_BSD_PROCESS_ACCT 1
#undef CONFIG_BSD_PROCESS_ACCT_V3
#define CONFIG_SYSCTL 1
#undef CONFIG_AUDIT
#define CONFIG_IKCONFIG 1
#define CONFIG_IKCONFIG_PROC 1
#define CONFIG_INITRAMFS_SOURCE ""
#define CONFIG_UID16 1
#define CONFIG_CC_OPTIMIZE_FOR_SIZE 1
#undef CONFIG_EMBEDDED
#define CONFIG_KALLSYMS 1
#undef CONFIG_KALLSYMS_ALL
#define CONFIG_KALLSYMS_EXTRA_PASS 1
#define CONFIG_HOTPLUG 1
#define CONFIG_PRINTK 1
#define CONFIG_BUG 1
#define CONFIG_ELF_CORE 1
#define CONFIG_BASE_FULL 1
#define CONFIG_FUTEX 1
#define CONFIG_EPOLL 1
#define CONFIG_SHMEM 1
#define CONFIG_CC_ALIGN_FUNCTIONS 0
#define CONFIG_CC_ALIGN_LABELS 0
#define CONFIG_CC_ALIGN_LOOPS 0
#define CONFIG_CC_ALIGN_JUMPS 0
#define CONFIG_SLAB 1
#undef CONFIG_TINY_SHMEM
#define CONFIG_BASE_SMALL 0
#undef CONFIG_SLOB

/*
 * Loadable module support
 */
#define CONFIG_MODULES 1
#define CONFIG_MODULE_UNLOAD 1
#undef CONFIG_MODULE_FORCE_UNLOAD
#define CONFIG_OBSOLETE_MODPARM 1
#undef CONFIG_MODVERSIONS
#undef CONFIG_MODULE_SRCVERSION_ALL
#define CONFIG_KMOD 1

/*
 * Block layer
 */
#undef CONFIG_LBD

/*
 * IO Schedulers
 */
#define CONFIG_IOSCHED_NOOP 1
#define CONFIG_IOSCHED_AS 1
#define CONFIG_IOSCHED_DEADLINE 1
#define CONFIG_IOSCHED_CFQ 1
#define CONFIG_DEFAULT_AS 1
#undef CONFIG_DEFAULT_DEADLINE
#undef CONFIG_DEFAULT_CFQ
#undef CONFIG_DEFAULT_NOOP
#define CONFIG_DEFAULT_IOSCHED "anticipatory"

/*
 * Block devices
 */
#define CONFIG_BLK_DEV_UBD 1
#define CONFIG_BLK_DEV_UBD_SYNC 1
#define CONFIG_BLK_DEV_COW_COMMON 1
#undef CONFIG_MMAPPER
#define CONFIG_BLK_DEV_LOOP_MODULE 1
#undef CONFIG_BLK_DEV_CRYPTOLOOP
#define CONFIG_BLK_DEV_NBD_MODULE 1
#undef CONFIG_BLK_DEV_RAM
#define CONFIG_BLK_DEV_RAM_COUNT 16
#undef CONFIG_ATA_OVER_ETH

/*
 * Character Devices
 */
#define CONFIG_STDERR_CONSOLE 1
#define CONFIG_STDIO_CONSOLE 1
#define CONFIG_SSL 1
#define CONFIG_NULL_CHAN 1
#define CONFIG_PORT_CHAN 1
#define CONFIG_PTY_CHAN 1
#define CONFIG_TTY_CHAN 1
#define CONFIG_XTERM_CHAN 1
#undef CONFIG_NOCONFIG_CHAN
#define CONFIG_CON_ZERO_CHAN "fd:0,fd:1"
#define CONFIG_CON_CHAN "xterm"
#define CONFIG_SSL_CHAN "pty"
#define CONFIG_UNIX98_PTYS 1
#define CONFIG_LEGACY_PTYS 1
#define CONFIG_LEGACY_PTY_COUNT 256
#undef CONFIG_WATCHDOG
#define CONFIG_UML_SOUND_MODULE 1
#define CONFIG_SOUND_MODULE 1
#define CONFIG_HOSTAUDIO_MODULE 1
#define CONFIG_UML_RANDOM 1

/*
 * Generic Driver Options
 */
#define CONFIG_STANDALONE 1
#define CONFIG_PREVENT_FIRMWARE_BUILD 1
#undef CONFIG_FW_LOADER
#undef CONFIG_DEBUG_DRIVER

/*
 * Networking
 */

/*
 * Networking options
 */
#undef CONFIG_NETDEBUG
#define CONFIG_PACKET 1
#define CONFIG_PACKET_MMAP 1
#define CONFIG_UNIX 1
#define CONFIG_XFRM 1
#define CONFIG_XFRM_USER 1
#undef CONFIG_XFRM_MIGRATE
#define CONFIG_XFRM_ENHANCEMENT 1
#undef CONFIG_XFRM_DEBUG
#undef CONFIG_NET_KEY
#define CONFIG_INET 1
#undef CONFIG_IP_MULTICAST
#undef CONFIG_IP_ADVANCED_ROUTER
#define CONFIG_IP_FIB_HASH 1
#undef CONFIG_IP_PNP
#undef CONFIG_NET_IPIP
#undef CONFIG_NET_IPGRE
#undef CONFIG_ARPD
#undef CONFIG_SYN_COOKIES
#undef CONFIG_INET_AH
#undef CONFIG_INET_ESP
#undef CONFIG_INET_IPCOMP
#undef CONFIG_INET_TUNNEL
#define CONFIG_INET_DIAG 1
#define CONFIG_INET_TCP_DIAG 1
#undef CONFIG_TCP_CONG_ADVANCED
#define CONFIG_TCP_CONG_BIC 1

/*
 * IP: Virtual Server Configuration
 */
#undef CONFIG_IP_VS
#define CONFIG_IPV6 1
#define CONFIG_IPV6_PRIVACY 1
#define CONFIG_INET6_AH_MODULE 1
#define CONFIG_INET6_ESP_MODULE 1
#define CONFIG_INET6_IPCOMP_MODULE 1
#define CONFIG_INET6_TUNNEL_MODULE 1
#define CONFIG_IPV6_TUNNEL_MODULE 1
#define CONFIG_IPV6_ADVANCED_ROUTER 1
#define CONFIG_IPV6_MULTIPLE_TABLES 1
#define CONFIG_IPV6_SUBTREES 1
#define CONFIG_IPV6_MIP6 1
#define CONFIG_IPV6_MIP6_DEBUG 1
#define CONFIG_NETFILTER 1
#undef CONFIG_NETFILTER_DEBUG

/*
 * Core Netfilter Configuration
 */
#undef CONFIG_NETFILTER_NETLINK
#undef CONFIG_NF_CONNTRACK
#undef CONFIG_NETFILTER_XTABLES

/*
 * IP: Netfilter Configuration
 */
#undef CONFIG_IP_NF_CONNTRACK
#undef CONFIG_IP_NF_QUEUE

/*
 * IPv6: Netfilter Configuration (EXPERIMENTAL)
 */
#undef CONFIG_IP6_NF_QUEUE

/*
 * DCCP Configuration (EXPERIMENTAL)
 */
#undef CONFIG_IP_DCCP

/*
 * SCTP Configuration (EXPERIMENTAL)
 */
#undef CONFIG_IP_SCTP

/*
 * TIPC Configuration (EXPERIMENTAL)
 */
#undef CONFIG_TIPC
#undef CONFIG_ATM
#undef CONFIG_BRIDGE
#undef CONFIG_VLAN_8021Q
#undef CONFIG_DECNET
#undef CONFIG_LLC2
#undef CONFIG_IPX
#undef CONFIG_ATALK
#undef CONFIG_X25
#undef CONFIG_LAPB
#undef CONFIG_NET_DIVERT
#undef CONFIG_ECONET
#undef CONFIG_WAN_ROUTER

/*
 * QoS and/or fair queueing
 */
#undef CONFIG_NET_SCHED

/*
 * Network testing
 */
#undef CONFIG_NET_PKTGEN
#undef CONFIG_HAMRADIO
#undef CONFIG_IRDA
#undef CONFIG_BT
#undef CONFIG_IEEE80211

/*
 * UML Network Devices
 */
#define CONFIG_UML_NET 1
#define CONFIG_UML_NET_ETHERTAP 1
#define CONFIG_UML_NET_TUNTAP 1
#define CONFIG_UML_NET_SLIP 1
#define CONFIG_UML_NET_DAEMON 1
#define CONFIG_UML_NET_MCAST 1
#define CONFIG_UML_NET_PCAP 1
#define CONFIG_UML_NET_SLIRP 1

/*
 * Network device support
 */
#define CONFIG_NETDEVICES 1
#define CONFIG_DUMMY_MODULE 1
#undef CONFIG_BONDING
#undef CONFIG_EQUALIZER
#define CONFIG_TUN_MODULE 1

/*
 * PHY device support
 */

/*
 * Wan interfaces
 */
#undef CONFIG_WAN
#define CONFIG_PPP_MODULE 1
#undef CONFIG_PPP_MULTILINK
#undef CONFIG_PPP_FILTER
#undef CONFIG_PPP_ASYNC
#undef CONFIG_PPP_SYNC_TTY
#undef CONFIG_PPP_DEFLATE
#undef CONFIG_PPP_BSDCOMP
#undef CONFIG_PPP_MPPE
#undef CONFIG_PPPOE
#define CONFIG_SLIP_MODULE 1
#undef CONFIG_SLIP_COMPRESSED
#undef CONFIG_SLIP_SMART
#undef CONFIG_SLIP_MODE_SLIP6
#undef CONFIG_SHAPER
#undef CONFIG_NETCONSOLE
#undef CONFIG_NETPOLL
#undef CONFIG_NET_POLL_CONTROLLER

/*
 * Connector - unified userspace <-> kernelspace linker
 */
#undef CONFIG_CONNECTOR

/*
 * File systems
 */
#define CONFIG_EXT2_FS 1
#undef CONFIG_EXT2_FS_XATTR
#undef CONFIG_EXT2_FS_XIP
#define CONFIG_EXT3_FS 1
#undef CONFIG_EXT3_FS_XATTR
#define CONFIG_JBD 1
#undef CONFIG_JBD_DEBUG
#define CONFIG_REISERFS_FS 1
#undef CONFIG_REISERFS_CHECK
#undef CONFIG_REISERFS_PROC_INFO
#undef CONFIG_REISERFS_FS_XATTR
#undef CONFIG_JFS_FS
#undef CONFIG_FS_POSIX_ACL
#undef CONFIG_XFS_FS
#undef CONFIG_OCFS2_FS
#undef CONFIG_MINIX_FS
#undef CONFIG_ROMFS_FS
#define CONFIG_INOTIFY 1
#define CONFIG_QUOTA 1
#undef CONFIG_QFMT_V1
#undef CONFIG_QFMT_V2
#define CONFIG_QUOTACTL 1
#define CONFIG_DNOTIFY 1
#define CONFIG_AUTOFS_FS_MODULE 1
#define CONFIG_AUTOFS4_FS_MODULE 1
#undef CONFIG_FUSE_FS

/*
 * CD-ROM/DVD Filesystems
 */
#define CONFIG_ISO9660_FS_MODULE 1
#define CONFIG_JOLIET 1
#undef CONFIG_ZISOFS
#undef CONFIG_UDF_FS

/*
 * DOS/FAT/NT Filesystems
 */
#undef CONFIG_MSDOS_FS
#undef CONFIG_VFAT_FS
#undef CONFIG_NTFS_FS

/*
 * Pseudo filesystems
 */
#define CONFIG_PROC_FS 1
#define CONFIG_PROC_KCORE 1
#define CONFIG_SYSFS 1
#define CONFIG_TMPFS 1
#undef CONFIG_HUGETLB_PAGE
#define CONFIG_RAMFS 1
#undef CONFIG_RELAYFS_FS
#undef CONFIG_CONFIGFS_FS

/*
 * Miscellaneous filesystems
 */
#undef CONFIG_ADFS_FS
#undef CONFIG_AFFS_FS
#undef CONFIG_HFS_FS
#undef CONFIG_HFSPLUS_FS
#undef CONFIG_BEFS_FS
#undef CONFIG_BFS_FS
#undef CONFIG_EFS_FS
#undef CONFIG_CRAMFS
#undef CONFIG_VXFS_FS
#undef CONFIG_HPFS_FS
#undef CONFIG_QNX4FS_FS
#undef CONFIG_SYSV_FS
#undef CONFIG_UFS_FS

/*
 * Network File Systems
 */
#undef CONFIG_NFS_FS
#undef CONFIG_NFSD
#undef CONFIG_SMB_FS
#undef CONFIG_CIFS
#undef CONFIG_NCP_FS
#undef CONFIG_CODA_FS
#undef CONFIG_AFS_FS
#undef CONFIG_9P_FS

/*
 * Partition Types
 */
#undef CONFIG_PARTITION_ADVANCED
#define CONFIG_MSDOS_PARTITION 1

/*
 * Native Language Support
 */
#define CONFIG_NLS 1
#define CONFIG_NLS_DEFAULT "iso8859-1"
#undef CONFIG_NLS_CODEPAGE_437
#undef CONFIG_NLS_CODEPAGE_737
#undef CONFIG_NLS_CODEPAGE_775
#undef CONFIG_NLS_CODEPAGE_850
#undef CONFIG_NLS_CODEPAGE_852
#undef CONFIG_NLS_CODEPAGE_855
#undef CONFIG_NLS_CODEPAGE_857
#undef CONFIG_NLS_CODEPAGE_860
#undef CONFIG_NLS_CODEPAGE_861
#undef CONFIG_NLS_CODEPAGE_862
#undef CONFIG_NLS_CODEPAGE_863
#undef CONFIG_NLS_CODEPAGE_864
#undef CONFIG_NLS_CODEPAGE_865
#undef CONFIG_NLS_CODEPAGE_866
#undef CONFIG_NLS_CODEPAGE_869
#undef CONFIG_NLS_CODEPAGE_936
#undef CONFIG_NLS_CODEPAGE_950
#undef CONFIG_NLS_CODEPAGE_932
#undef CONFIG_NLS_CODEPAGE_949
#undef CONFIG_NLS_CODEPAGE_874
#undef CONFIG_NLS_ISO8859_8
#undef CONFIG_NLS_CODEPAGE_1250
#undef CONFIG_NLS_CODEPAGE_1251
#undef CONFIG_NLS_ASCII
#undef CONFIG_NLS_ISO8859_1
#undef CONFIG_NLS_ISO8859_2
#undef CONFIG_NLS_ISO8859_3
#undef CONFIG_NLS_ISO8859_4
#undef CONFIG_NLS_ISO8859_5
#undef CONFIG_NLS_ISO8859_6
#undef CONFIG_NLS_ISO8859_7
#undef CONFIG_NLS_ISO8859_9
#undef CONFIG_NLS_ISO8859_13
#undef CONFIG_NLS_ISO8859_14
#undef CONFIG_NLS_ISO8859_15
#undef CONFIG_NLS_KOI8_R
#undef CONFIG_NLS_KOI8_U
#undef CONFIG_NLS_UTF8

/*
 * Security options
 */
#undef CONFIG_KEYS
#undef CONFIG_SECURITY

/*
 * Cryptographic options
 */
#define CONFIG_CRYPTO 1
#define CONFIG_CRYPTO_HMAC 1
#undef CONFIG_CRYPTO_NULL
#undef CONFIG_CRYPTO_MD4
#define CONFIG_CRYPTO_MD5 1
#define CONFIG_CRYPTO_SHA1_MODULE 1
#undef CONFIG_CRYPTO_SHA256
#undef CONFIG_CRYPTO_SHA512
#undef CONFIG_CRYPTO_WP512
#undef CONFIG_CRYPTO_TGR192
#define CONFIG_CRYPTO_DES_MODULE 1
#undef CONFIG_CRYPTO_BLOWFISH
#undef CONFIG_CRYPTO_TWOFISH
#undef CONFIG_CRYPTO_SERPENT
#undef CONFIG_CRYPTO_AES
#undef CONFIG_CRYPTO_AES_586
#undef CONFIG_CRYPTO_CAST5
#undef CONFIG_CRYPTO_CAST6
#undef CONFIG_CRYPTO_TEA
#undef CONFIG_CRYPTO_ARC4
#undef CONFIG_CRYPTO_KHAZAD
#undef CONFIG_CRYPTO_ANUBIS
#define CONFIG_CRYPTO_DEFLATE_MODULE 1
#undef CONFIG_CRYPTO_MICHAEL_MIC
#undef CONFIG_CRYPTO_CRC32C
#undef CONFIG_CRYPTO_TEST

/*
 * Hardware crypto devices
 */

/*
 * Library routines
 */
#undef CONFIG_CRC_CCITT
#undef CONFIG_CRC16
#define CONFIG_CRC32_MODULE 1
#undef CONFIG_LIBCRC32C
#define CONFIG_ZLIB_INFLATE_MODULE 1
#define CONFIG_ZLIB_DEFLATE_MODULE 1

/*
 * Multi-device support (RAID and LVM)
 */
#undef CONFIG_MD
#undef CONFIG_INPUT

/*
 * Kernel hacking
 */
#undef CONFIG_PRINTK_TIME
#define CONFIG_DEBUG_KERNEL 1
#define CONFIG_LOG_BUF_SHIFT 14
#define CONFIG_DETECT_SOFTLOCKUP 1
#undef CONFIG_SCHEDSTATS
#define CONFIG_DEBUG_SLAB 1
#define CONFIG_DEBUG_MUTEXES 1
#undef CONFIG_DEBUG_SPINLOCK
#undef CONFIG_DEBUG_SPINLOCK_SLEEP
#undef CONFIG_DEBUG_KOBJECT
#undef CONFIG_DEBUG_HIGHMEM
#define CONFIG_DEBUG_INFO 1
#undef CONFIG_DEBUG_FS
#undef CONFIG_DEBUG_VM
#define CONFIG_FRAME_POINTER 1
#define CONFIG_FORCED_INLINING 1
#undef CONFIG_RCU_TORTURE_TEST
#undef CONFIG_GPROF
#undef CONFIG_GCOV
#undef CONFIG_SYSCALL_DEBUG
