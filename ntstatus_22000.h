#pragma once
#include "global.h"


#ifndef _NTSTATUS_
#define _NTSTATUS_

#if defined (_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef WIN32_NO_STATUS // winnt
// begin_ntsecapi

/*lint -save -e767 */  // Don't complain about different definitions // winnt


/////////////////////////////////////////////////////////////////////////
//
// Please update FACILITY_MAXIMUM_VALUE when adding new facility values.
//     (This value should be greater than the highest value above)
//
// Facility 0x17 is reserved and used in isolation lib as
//             PIE=0x17:FACILITY_MANIFEST_ERROR_CODE
//
//
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
//
// Standard Success values
//
//
/////////////////////////////////////////////////////////////////////////


//
// The success status codes 0 - 63 are reserved for wait completion status.
// FacilityCodes 0x5 - 0xF have been allocated by various drivers.
//
#define STATUS_WAIT_0                           ((NTSTATUS)0x00000000L) // winnt

//
//  Values are 32 bit values laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//
#define FACILITY_DEBUGGER                0x1
#define FACILITY_RPC_RUNTIME             0x2
#define FACILITY_RPC_STUBS               0x3
#define FACILITY_IO_ERROR_CODE           0x4
#define FACILITY_CODCLASS_ERROR_CODE     0x6
#define FACILITY_NTWIN32                 0x7
#define FACILITY_NTCERT                  0x8
#define FACILITY_NTSSPI                  0x9
#define FACILITY_TERMINAL_SERVER         0xA
#define FACILTIY_MUI_ERROR_CODE          0xB
#define FACILITY_USB_ERROR_CODE          0x10
#define FACILITY_HID_ERROR_CODE          0x11
#define FACILITY_FIREWIRE_ERROR_CODE     0x12
#define FACILITY_CLUSTER_ERROR_CODE      0x13
#define FACILITY_ACPI_ERROR_CODE         0x14
#define FACILITY_SXS_ERROR_CODE          0x15
#define FACILITY_TRANSACTION             0x19
#define FACILITY_COMMONLOG               0x1A
#define FACILITY_VIDEO                   0x1B
#define FACILITY_FILTER_MANAGER          0x1C
#define FACILITY_MONITOR                 0x1D
#define FACILITY_GRAPHICS_KERNEL         0x1E
#define FACILITY_DRIVER_FRAMEWORK        0x20
#define FACILITY_FVE_ERROR_CODE          0x21
#define FACILITY_FWP_ERROR_CODE          0x22
#define FACILITY_NDIS_ERROR_CODE         0x23
#define FACILITY_QUIC_ERROR_CODE         0x24
#define FACILITY_TPM                     0x29
#define FACILITY_RTPM                    0x2A
#define FACILITY_HYPERVISOR              0x35
#define FACILITY_IPSEC                   0x36
#define FACILITY_VIRTUALIZATION          0x37
#define FACILITY_VOLMGR                  0x38
#define FACILITY_BCD_ERROR_CODE          0x39
#define FACILITY_WIN32K_NTUSER           0x3E
#define FACILITY_WIN32K_NTGDI            0x3F
#define FACILITY_RESUME_KEY_FILTER       0x40
#define FACILITY_RDBSS                   0x41
#define FACILITY_BTH_ATT                 0x42
#define FACILITY_SECUREBOOT              0x43
#define FACILITY_AUDIO_KERNEL            0x44
#define FACILITY_VSM                     0x45
#define FACILITY_NT_IORING               0x46
#define FACILITY_VOLSNAP                 0x50
#define FACILITY_SDBUS                   0x51
#define FACILITY_SHARED_VHDX             0x5C
#define FACILITY_SMB                     0x5D
#define FACILITY_XVS                     0x5E
#define FACILITY_INTERIX                 0x99
#define FACILITY_SPACES                  0xE7
#define FACILITY_SECURITY_CORE           0xE8
#define FACILITY_SYSTEM_INTEGRITY        0xE9
#define FACILITY_LICENSING               0xEA
#define FACILITY_PLATFORM_MANIFEST       0xEB
#define FACILITY_APP_EXEC                0xEC
#define FACILITY_MAXIMUM_VALUE           0xED


//
// Define the severity codes
//
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: STATUS_SUCCESS
//
// MessageText:
//
//  STATUS_SUCCESS
//
#define STATUS_SUCCESS                   ((NTSTATUS)0x00000000L)    // ntsubauth

//
// MessageId: STATUS_WAIT_1
//
// MessageText:
//
//  STATUS_WAIT_1
//
#define STATUS_WAIT_1                    ((NTSTATUS)0x00000001L)

//
// MessageId: STATUS_WAIT_2
//
// MessageText:
//
//  STATUS_WAIT_2
//
#define STATUS_WAIT_2                    ((NTSTATUS)0x00000002L)

//
// MessageId: STATUS_WAIT_3
//
// MessageText:
//
//  STATUS_WAIT_3
//
#define STATUS_WAIT_3                    ((NTSTATUS)0x00000003L)

//
// MessageId: STATUS_WAIT_63
//
// MessageText:
//
//  STATUS_WAIT_63
//
#define STATUS_WAIT_63                   ((NTSTATUS)0x0000003FL)


//
// The success status codes 128 - 191 are reserved for wait completion
// status with an abandoned mutant object.
//
#define STATUS_ABANDONED                        ((NTSTATUS)0x00000080L)

//
// MessageId: STATUS_ABANDONED_WAIT_0
//
// MessageText:
//
//  STATUS_ABANDONED_WAIT_0
//
#define STATUS_ABANDONED_WAIT_0          ((NTSTATUS)0x00000080L)    // winnt

//
// MessageId: STATUS_ABANDONED_WAIT_63
//
// MessageText:
//
//  STATUS_ABANDONED_WAIT_63
//
#define STATUS_ABANDONED_WAIT_63         ((NTSTATUS)0x000000BFL)


//
// The success status codes 256, 257, 258, and 258 are reserved for
// User APC, Kernel APC, Alerted, and Timeout.
//
//
// MessageId: STATUS_USER_APC
//
// MessageText:
//
//  STATUS_USER_APC
//
#define STATUS_USER_APC                  ((NTSTATUS)0x000000C0L)    // winnt

//
// MessageId: STATUS_ALREADY_COMPLETE
//
// MessageText:
//
// The requested action was completed by an earlier operation.
//
#define STATUS_ALREADY_COMPLETE          ((NTSTATUS)0x000000FFL)

//
// MessageId: STATUS_KERNEL_APC
//
// MessageText:
//
//  STATUS_KERNEL_APC
//
#define STATUS_KERNEL_APC                ((NTSTATUS)0x00000100L)

//
// MessageId: STATUS_ALERTED
//
// MessageText:
//
//  STATUS_ALERTED
//
#define STATUS_ALERTED                   ((NTSTATUS)0x00000101L)

//
// MessageId: STATUS_TIMEOUT
//
// MessageText:
//
//  STATUS_TIMEOUT
//
#define STATUS_TIMEOUT                   ((NTSTATUS)0x00000102L)    // winnt

//
// MessageId: STATUS_PENDING
//
// MessageText:
//
// The operation that was requested is pending completion.
//
#define STATUS_PENDING                   ((NTSTATUS)0x00000103L)    // winnt

//
// MessageId: STATUS_REPARSE
//
// MessageText:
//
// A reparse should be performed by the Object Manager since the name of the file resulted in a symbolic link.
//
#define STATUS_REPARSE                   ((NTSTATUS)0x00000104L)

//
// MessageId: STATUS_MORE_ENTRIES
//
// MessageText:
//
// Returned by enumeration APIs to indicate more information is available to successive calls.
//
#define STATUS_MORE_ENTRIES              ((NTSTATUS)0x00000105L)

//
// MessageId: STATUS_NOT_ALL_ASSIGNED
//
// MessageText:
//
// Indicates not all privileges or groups referenced are assigned to the caller.
// This allows, for example, all privileges to be disabled without having to know exactly which privileges are assigned.
//
#define STATUS_NOT_ALL_ASSIGNED          ((NTSTATUS)0x00000106L)

//
// MessageId: STATUS_SOME_NOT_MAPPED
//
// MessageText:
//
// Some of the information to be translated has not been translated.
//
#define STATUS_SOME_NOT_MAPPED           ((NTSTATUS)0x00000107L)

//
// MessageId: STATUS_OPLOCK_BREAK_IN_PROGRESS
//
// MessageText:
//
// An open/create operation completed while an oplock break is underway.
//
#define STATUS_OPLOCK_BREAK_IN_PROGRESS  ((NTSTATUS)0x00000108L)

//
// MessageId: STATUS_VOLUME_MOUNTED
//
// MessageText:
//
// A new volume has been mounted by a file system.
//
#define STATUS_VOLUME_MOUNTED            ((NTSTATUS)0x00000109L)

//
// MessageId: STATUS_RXACT_COMMITTED
//
// MessageText:
//
// This success level status indicates that the transaction state already exists for the registry sub-tree, but that a transaction commit was previously aborted. The commit has now been completed.
//
#define STATUS_RXACT_COMMITTED           ((NTSTATUS)0x0000010AL)

//
// MessageId: STATUS_NOTIFY_CLEANUP
//
// MessageText:
//
// This indicates that a notify change request has been completed due to closing the handle which made the notify change request.
//
#define STATUS_NOTIFY_CLEANUP            ((NTSTATUS)0x0000010BL)

//
// MessageId: STATUS_NOTIFY_ENUM_DIR
//
// MessageText:
//
// This indicates that a notify change request is being completed and that the information is not being returned in the caller's buffer.
// The caller now needs to enumerate the files to find the changes.
//
#define STATUS_NOTIFY_ENUM_DIR           ((NTSTATUS)0x0000010CL)

//
// MessageId: STATUS_NO_QUOTAS_FOR_ACCOUNT
//
// MessageText:
//
// {No Quotas}
// No system quota limits are specifically set for this account.
//
#define STATUS_NO_QUOTAS_FOR_ACCOUNT     ((NTSTATUS)0x0000010DL)

//
// MessageId: STATUS_PRIMARY_TRANSPORT_CONNECT_FAILED
//
// MessageText:
//
// {Connect Failure on Primary Transport}
// An attempt was made to connect to the remote server %hs on the primary transport, but the connection failed.
// The computer WAS able to connect on a secondary transport.
//
#define STATUS_PRIMARY_TRANSPORT_CONNECT_FAILED ((NTSTATUS)0x0000010EL)

//
// MessageId: STATUS_PAGE_FAULT_TRANSITION
//
// MessageText:
//
// Page fault was a transition fault.
//
#define STATUS_PAGE_FAULT_TRANSITION     ((NTSTATUS)0x00000110L)

//
// MessageId: STATUS_PAGE_FAULT_DEMAND_ZERO
//
// MessageText:
//
// Page fault was a demand zero fault.
//
#define STATUS_PAGE_FAULT_DEMAND_ZERO    ((NTSTATUS)0x00000111L)

//
// MessageId: STATUS_PAGE_FAULT_COPY_ON_WRITE
//
// MessageText:
//
// Page fault was a demand zero fault.
//
#define STATUS_PAGE_FAULT_COPY_ON_WRITE  ((NTSTATUS)0x00000112L)

//
// MessageId: STATUS_PAGE_FAULT_GUARD_PAGE
//
// MessageText:
//
// Page fault was a demand zero fault.
//
#define STATUS_PAGE_FAULT_GUARD_PAGE     ((NTSTATUS)0x00000113L)

//
// MessageId: STATUS_PAGE_FAULT_PAGING_FILE
//
// MessageText:
//
// Page fault was satisfied by reading from a secondary storage device.
//
#define STATUS_PAGE_FAULT_PAGING_FILE    ((NTSTATUS)0x00000114L)

//
// MessageId: STATUS_CACHE_PAGE_LOCKED
//
// MessageText:
//
// Cached page was locked during operation.
//
#define STATUS_CACHE_PAGE_LOCKED         ((NTSTATUS)0x00000115L)

//
// MessageId: STATUS_CRASH_DUMP
//
// MessageText:
//
// Crash dump exists in paging file.
//
#define STATUS_CRASH_DUMP                ((NTSTATUS)0x00000116L)

//
// MessageId: STATUS_BUFFER_ALL_ZEROS
//
// MessageText:
//
// Specified buffer contains all zeros.
//
#define STATUS_BUFFER_ALL_ZEROS          ((NTSTATUS)0x00000117L)

//
// MessageId: STATUS_REPARSE_OBJECT
//
// MessageText:
//
// A reparse should be performed by the Object Manager since the name of the file resulted in a symbolic link.
//
#define STATUS_REPARSE_OBJECT            ((NTSTATUS)0x00000118L)

//
// MessageId: STATUS_RESOURCE_REQUIREMENTS_CHANGED
//
// MessageText:
//
// The device has succeeded a query-stop and its resource requirements have changed.
//
#define STATUS_RESOURCE_REQUIREMENTS_CHANGED ((NTSTATUS)0x00000119L)

//
// MessageId: STATUS_TRANSLATION_COMPLETE
//
// MessageText:
//
// The translator has translated these resources into the global space and no further translations should be performed.
//
#define STATUS_TRANSLATION_COMPLETE      ((NTSTATUS)0x00000120L)

//
// MessageId: STATUS_DS_MEMBERSHIP_EVALUATED_LOCALLY
//
// MessageText:
//
// The directory service evaluated group memberships locally, as it was unable to contact a global catalog server.
//
#define STATUS_DS_MEMBERSHIP_EVALUATED_LOCALLY ((NTSTATUS)0x00000121L)

//
// MessageId: STATUS_NOTHING_TO_TERMINATE
//
// MessageText:
//
// A process being terminated has no threads to terminate.
//
#define STATUS_NOTHING_TO_TERMINATE      ((NTSTATUS)0x00000122L)

//
// MessageId: STATUS_PROCESS_NOT_IN_JOB
//
// MessageText:
//
// The specified process is not part of a job.
//
#define STATUS_PROCESS_NOT_IN_JOB        ((NTSTATUS)0x00000123L)

//
// MessageId: STATUS_PROCESS_IN_JOB
//
// MessageText:
//
// The specified process is part of a job.
//
#define STATUS_PROCESS_IN_JOB            ((NTSTATUS)0x00000124L)

//
// MessageId: STATUS_VOLSNAP_HIBERNATE_READY
//
// MessageText:
//
// {Volume Shadow Copy Service}
// The system is now ready for hibernation.
//
#define STATUS_VOLSNAP_HIBERNATE_READY   ((NTSTATUS)0x00000125L)

//
// MessageId: STATUS_FSFILTER_OP_COMPLETED_SUCCESSFULLY
//
// MessageText:
//
// A file system or file system filter driver has successfully completed an FsFilter operation.
//
#define STATUS_FSFILTER_OP_COMPLETED_SUCCESSFULLY ((NTSTATUS)0x00000126L)

//
// MessageId: STATUS_INTERRUPT_VECTOR_ALREADY_CONNECTED
//
// MessageText:
//
// The specified interrupt vector was already connected.
//
#define STATUS_INTERRUPT_VECTOR_ALREADY_CONNECTED ((NTSTATUS)0x00000127L)

//
// MessageId: STATUS_INTERRUPT_STILL_CONNECTED
//
// MessageText:
//
// The specified interrupt vector is still connected.
//
#define STATUS_INTERRUPT_STILL_CONNECTED ((NTSTATUS)0x00000128L)

//
// MessageId: STATUS_PROCESS_CLONED
//
// MessageText:
//
// The current process is a cloned process.
//
#define STATUS_PROCESS_CLONED            ((NTSTATUS)0x00000129L)

//
// MessageId: STATUS_FILE_LOCKED_WITH_ONLY_READERS
//
// MessageText:
//
// The file was locked and all users of the file can only read.
//
#define STATUS_FILE_LOCKED_WITH_ONLY_READERS ((NTSTATUS)0x0000012AL)

//
// MessageId: STATUS_FILE_LOCKED_WITH_WRITERS
//
// MessageText:
//
// The file was locked and at least one user of the file can write.
//
#define STATUS_FILE_LOCKED_WITH_WRITERS  ((NTSTATUS)0x0000012BL)

//
// MessageId: STATUS_VALID_IMAGE_HASH
//
// MessageText:
//
// The file image hash is valid.
//
#define STATUS_VALID_IMAGE_HASH          ((NTSTATUS)0x0000012CL)

//
// MessageId: STATUS_VALID_CATALOG_HASH
//
// MessageText:
//
// The file catalog hash is valid.
//
#define STATUS_VALID_CATALOG_HASH        ((NTSTATUS)0x0000012DL)

//
// MessageId: STATUS_VALID_STRONG_CODE_HASH
//
// MessageText:
//
// The file hash is valid and uses strong code integrity.
//
#define STATUS_VALID_STRONG_CODE_HASH    ((NTSTATUS)0x0000012EL)

//
// MessageId: STATUS_GHOSTED
//
// MessageText:
//
// At least a portion of IO range intersects with a ghosted file range.
//
#define STATUS_GHOSTED                   ((NTSTATUS)0x0000012FL)

//
// MessageId: STATUS_DATA_OVERWRITTEN
//
// MessageText:
//
// A completed operation may have overwritten previous data.
//
#define STATUS_DATA_OVERWRITTEN          ((NTSTATUS)0x00000130L)

//
// MessageId: STATUS_RESOURCEMANAGER_READ_ONLY
//
// MessageText:
//
// The specified ResourceManager made no changes or updates to the resource under this transaction.
//
#define STATUS_RESOURCEMANAGER_READ_ONLY ((NTSTATUS)0x00000202L)

//
// MessageId: STATUS_RING_PREVIOUSLY_EMPTY
//
// MessageText:
//
// The specified ring buffer was empty before the packet was successfully inserted.
//
#define STATUS_RING_PREVIOUSLY_EMPTY     ((NTSTATUS)0x00000210L)

//
// MessageId: STATUS_RING_PREVIOUSLY_FULL
//
// MessageText:
//
// The specified ring buffer was full before the packet was successfully removed.
//
#define STATUS_RING_PREVIOUSLY_FULL      ((NTSTATUS)0x00000211L)

//
// MessageId: STATUS_RING_PREVIOUSLY_ABOVE_QUOTA
//
// MessageText:
//
// The specified ring buffer has dropped below its quota of outstanding transactions.
//
#define STATUS_RING_PREVIOUSLY_ABOVE_QUOTA ((NTSTATUS)0x00000212L)

//
// MessageId: STATUS_RING_NEWLY_EMPTY
//
// MessageText:
//
// The specified ring buffer has, with the removal of the current packet, now become empty.
//
#define STATUS_RING_NEWLY_EMPTY          ((NTSTATUS)0x00000213L)

//
// MessageId: STATUS_RING_SIGNAL_OPPOSITE_ENDPOINT
//
// MessageText:
//
// The specified ring buffer was either previously empty or previously full which implies that the caller should signal the opposite endpoint.
//
#define STATUS_RING_SIGNAL_OPPOSITE_ENDPOINT ((NTSTATUS)0x00000214L)

//
// MessageId: STATUS_OPLOCK_SWITCHED_TO_NEW_HANDLE
//
// MessageText:
//
// The oplock that was associated with this handle is now associated with a different handle.
//
#define STATUS_OPLOCK_SWITCHED_TO_NEW_HANDLE ((NTSTATUS)0x00000215L)

//
// MessageId: STATUS_OPLOCK_HANDLE_CLOSED
//
// MessageText:
//
// The handle with which this oplock was associated has been closed.  The oplock is now broken.
//
#define STATUS_OPLOCK_HANDLE_CLOSED      ((NTSTATUS)0x00000216L)

//
// MessageId: STATUS_WAIT_FOR_OPLOCK
//
// MessageText:
//
// An operation is blocked waiting for an oplock.
//
#define STATUS_WAIT_FOR_OPLOCK           ((NTSTATUS)0x00000367L)

//
// MessageId: STATUS_REPARSE_GLOBAL
//
// MessageText:
//
// A reparse should be performed by the Object Manager from the global root to escape the container name space.
//
#define STATUS_REPARSE_GLOBAL            ((NTSTATUS)0x00000368L)

//
// MessageId: DBG_EXCEPTION_HANDLED
//
// MessageText:
//
// Debugger handled exception
//
#define DBG_EXCEPTION_HANDLED            ((NTSTATUS)0x00010001L)    // winnt

//
// MessageId: DBG_CONTINUE
//
// MessageText:
//
// Debugger continued
//
#define DBG_CONTINUE                     ((NTSTATUS)0x00010002L)    // winnt

//
// MessageId: STATUS_FLT_IO_COMPLETE
//
// MessageText:
//
// The IO was completed by a filter.
//
#define STATUS_FLT_IO_COMPLETE           ((NTSTATUS)0x001C0001L)

/////////////////////////////////////////////////////////////////////////
//
// Standard Information values
//
/////////////////////////////////////////////////////////////////////////

//
// MessageId: STATUS_OBJECT_NAME_EXISTS
//
// MessageText:
//
// {Object Exists}
// An attempt was made to create an object and the object name already existed.
//
#define STATUS_OBJECT_NAME_EXISTS        ((NTSTATUS)0x40000000L)

//
// MessageId: STATUS_THREAD_WAS_SUSPENDED
//
// MessageText:
//
// {Thread Suspended}
// A thread termination occurred while the thread was suspended. The thread was resumed, and termination proceeded.
//
#define STATUS_THREAD_WAS_SUSPENDED      ((NTSTATUS)0x40000001L)

//
// MessageId: STATUS_WORKING_SET_LIMIT_RANGE
//
// MessageText:
//
// {Working Set Range Error}
// An attempt was made to set the working set minimum or maximum to values which are outside of the allowable range.
//
#define STATUS_WORKING_SET_LIMIT_RANGE   ((NTSTATUS)0x40000002L)

//
// MessageId: STATUS_IMAGE_NOT_AT_BASE
//
// MessageText:
//
// {Image Relocated}
// An image file could not be mapped at the address specified in the image file. Local fixups must be performed on this image.
//
#define STATUS_IMAGE_NOT_AT_BASE         ((NTSTATUS)0x40000003L)

//
// MessageId: STATUS_RXACT_STATE_CREATED
//
// MessageText:
//
// This informational level status indicates that a specified registry sub-tree transaction state did not yet exist and had to be created.
//
#define STATUS_RXACT_STATE_CREATED       ((NTSTATUS)0x40000004L)

//
// MessageId: STATUS_SEGMENT_NOTIFICATION
//
// MessageText:
//
// {Segment Load}
// A virtual DOS machine (VDM) is loading, unloading, or moving an MS-DOS or Win16 program segment image.
// An exception is raised so a debugger can load, unload or track symbols and breakpoints within these 16-bit segments.
//
#define STATUS_SEGMENT_NOTIFICATION      ((NTSTATUS)0x40000005L)    // winnt

//
// MessageId: STATUS_LOCAL_USER_SESSION_KEY
//
// MessageText:
//
// {Local Session Key}
// A user session key was requested for a local RPC connection. The session key returned is a constant value and not unique to this connection.
//
#define STATUS_LOCAL_USER_SESSION_KEY    ((NTSTATUS)0x40000006L)

//
// MessageId: STATUS_BAD_CURRENT_DIRECTORY
//
// MessageText:
//
// {Invalid Current Directory}
// The process cannot switch to the startup current directory %hs.
// Select OK to set current directory to %hs, or select CANCEL to exit.
//
#define STATUS_BAD_CURRENT_DIRECTORY     ((NTSTATUS)0x40000007L)

//
// MessageId: STATUS_SERIAL_MORE_WRITES
//
// MessageText:
//
// {Serial IOCTL Complete}
// A serial I/O operation was completed by another write to a serial port.
// (The IOCTL_SERIAL_XOFF_COUNTER reached zero.)
//
#define STATUS_SERIAL_MORE_WRITES        ((NTSTATUS)0x40000008L)

//
// MessageId: STATUS_REGISTRY_RECOVERED
//
// MessageText:
//
// {Registry Recovery}
// One of the files containing the system's Registry data had to be recovered by use of a log or alternate copy. The recovery was successful.
//
#define STATUS_REGISTRY_RECOVERED        ((NTSTATUS)0x40000009L)

//
// MessageId: STATUS_FT_READ_RECOVERY_FROM_BACKUP
//
// MessageText:
//
// {Redundant Read}
// To satisfy a read request, the NT fault-tolerant file system successfully read the requested data from a redundant copy.
// This was done because the file system encountered a failure on a member of the fault-tolerant volume, but was unable to reassign the failing area of the device.
//
#define STATUS_FT_READ_RECOVERY_FROM_BACKUP ((NTSTATUS)0x4000000AL)

//
// MessageId: STATUS_FT_WRITE_RECOVERY
//
// MessageText:
//
// {Redundant Write}
// To satisfy a write request, the NT fault-tolerant file system successfully wrote a redundant copy of the information.
// This was done because the file system encountered a failure on a member of the fault-tolerant volume, but was not able to reassign the failing area of the device.
//
#define STATUS_FT_WRITE_RECOVERY         ((NTSTATUS)0x4000000BL)

//
// MessageId: STATUS_SERIAL_COUNTER_TIMEOUT
//
// MessageText:
//
// {Serial IOCTL Timeout}
// A serial I/O operation completed because the time-out period expired. (The IOCTL_SERIAL_XOFF_COUNTER had not reached zero.)
//
#define STATUS_SERIAL_COUNTER_TIMEOUT    ((NTSTATUS)0x4000000CL)

//
// MessageId: STATUS_NULL_LM_PASSWORD
//
// MessageText:
//
// {Password Too Complex}
// The Windows password is too complex to be converted to a LAN Manager password. The LAN Manager password returned is a NULL string.
//
#define STATUS_NULL_LM_PASSWORD          ((NTSTATUS)0x4000000DL)

//
// MessageId: STATUS_IMAGE_MACHINE_TYPE_MISMATCH
//
// MessageText:
//
// {Machine Type Mismatch}
// The image file %hs is valid, but is for a machine type other than the current machine. Select OK to continue, or CANCEL to fail the DLL load.
//
#define STATUS_IMAGE_MACHINE_TYPE_MISMATCH ((NTSTATUS)0x4000000EL)

//
// MessageId: STATUS_RECEIVE_PARTIAL
//
// MessageText:
//
// {Partial Data Received}
// The network transport returned partial data to its client. The remaining data will be sent later.
//
#define STATUS_RECEIVE_PARTIAL           ((NTSTATUS)0x4000000FL)

//
// MessageId: STATUS_RECEIVE_EXPEDITED
//
// MessageText:
//
// {Expedited Data Received}
// The network transport returned data to its client that was marked as expedited by the remote system.
//
#define STATUS_RECEIVE_EXPEDITED         ((NTSTATUS)0x40000010L)

//
// MessageId: STATUS_RECEIVE_PARTIAL_EXPEDITED
//
// MessageText:
//
// {Partial Expedited Data Received}
// The network transport returned partial data to its client and this data was marked as expedited by the remote system. The remaining data will be sent later.
//
#define STATUS_RECEIVE_PARTIAL_EXPEDITED ((NTSTATUS)0x40000011L)

//
// MessageId: STATUS_EVENT_DONE
//
// MessageText:
//
// {TDI Event Done}
// The TDI indication has completed successfully.
//
#define STATUS_EVENT_DONE                ((NTSTATUS)0x40000012L)

//
// MessageId: STATUS_EVENT_PENDING
//
// MessageText:
//
// {TDI Event Pending}
// The TDI indication has entered the pending state.
//
#define STATUS_EVENT_PENDING             ((NTSTATUS)0x40000013L)

//
// MessageId: STATUS_CHECKING_FILE_SYSTEM
//
// MessageText:
//
// Checking file system on %wZ
//
#define STATUS_CHECKING_FILE_SYSTEM      ((NTSTATUS)0x40000014L)

//
// MessageId: STATUS_FATAL_APP_EXIT
//
// MessageText:
//
// {Fatal Application Exit}
// %hs
//
#define STATUS_FATAL_APP_EXIT            ((NTSTATUS)0x40000015L)    // winnt

//
// MessageId: STATUS_PREDEFINED_HANDLE
//
// MessageText:
//
// The specified registry key is referenced by a predefined handle.
//
#define STATUS_PREDEFINED_HANDLE         ((NTSTATUS)0x40000016L)

//
// MessageId: STATUS_WAS_UNLOCKED
//
// MessageText:
//
// {Page Unlocked}
// The page protection of a locked page was changed to 'No Access' and the page was unlocked from memory and from the process.
//
#define STATUS_WAS_UNLOCKED              ((NTSTATUS)0x40000017L)

//
// MessageId: STATUS_SERVICE_NOTIFICATION
//
// MessageText:
//
// %hs
//
#define STATUS_SERVICE_NOTIFICATION      ((NTSTATUS)0x40000018L)

//
// MessageId: STATUS_WAS_LOCKED
//
// MessageText:
//
// {Page Locked}
// One of the pages to lock was already locked.
//
#define STATUS_WAS_LOCKED                ((NTSTATUS)0x40000019L)

//
// MessageId: STATUS_LOG_HARD_ERROR
//
// MessageText:
//
// Application popup: %1 : %2
//
#define STATUS_LOG_HARD_ERROR            ((NTSTATUS)0x4000001AL)

//
// MessageId: STATUS_ALREADY_WIN32
//
// MessageText:
//
//  STATUS_ALREADY_WIN32
//
#define STATUS_ALREADY_WIN32             ((NTSTATUS)0x4000001BL)

//
// MessageId: STATUS_WX86_UNSIMULATE
//
// MessageText:
//
// Exception status code used by Win32 x86 emulation subsystem.
//
#define STATUS_WX86_UNSIMULATE           ((NTSTATUS)0x4000001CL)

//
// MessageId: STATUS_WX86_CONTINUE
//
// MessageText:
//
// Exception status code used by Win32 x86 emulation subsystem.
//
#define STATUS_WX86_CONTINUE             ((NTSTATUS)0x4000001DL)

//
// MessageId: STATUS_WX86_SINGLE_STEP
//
// MessageText:
//
// Exception status code used by Win32 x86 emulation subsystem.
//
#define STATUS_WX86_SINGLE_STEP          ((NTSTATUS)0x4000001EL)

//
// MessageId: STATUS_WX86_BREAKPOINT
//
// MessageText:
//
// Exception status code used by Win32 x86 emulation subsystem.
//
#define STATUS_WX86_BREAKPOINT           ((NTSTATUS)0x4000001FL)

//
// MessageId: STATUS_WX86_EXCEPTION_CONTINUE
//
// MessageText:
//
// Exception status code used by Win32 x86 emulation subsystem.
//
#define STATUS_WX86_EXCEPTION_CONTINUE   ((NTSTATUS)0x40000020L)

//
// MessageId: STATUS_WX86_EXCEPTION_LASTCHANCE
//
// MessageText:
//
// Exception status code used by Win32 x86 emulation subsystem.
//
#define STATUS_WX86_EXCEPTION_LASTCHANCE ((NTSTATUS)0x40000021L)

//
// MessageId: STATUS_WX86_EXCEPTION_CHAIN
//
// MessageText:
//
// Exception status code used by Win32 x86 emulation subsystem.
//
#define STATUS_WX86_EXCEPTION_CHAIN      ((NTSTATUS)0x40000022L)

//
// MessageId: STATUS_IMAGE_MACHINE_TYPE_MISMATCH_EXE
//
// MessageText:
//
// {Machine Type Mismatch}
// The image file %hs is valid, but is for a machine type other than the current machine.
//
#define STATUS_IMAGE_MACHINE_TYPE_MISMATCH_EXE ((NTSTATUS)0x40000023L)

//
// MessageId: STATUS_NO_YIELD_PERFORMED
//
// MessageText:
//
// A yield execution was performed and no thread was available to run.
//
#define STATUS_NO_YIELD_PERFORMED        ((NTSTATUS)0x40000024L)

//
// MessageId: STATUS_TIMER_RESUME_IGNORED
//
// MessageText:
//
// The resumable flag to a timer API was ignored.
//
#define STATUS_TIMER_RESUME_IGNORED      ((NTSTATUS)0x40000025L)

//
// MessageId: STATUS_ARBITRATION_UNHANDLED
//
// MessageText:
//
// The arbiter has deferred arbitration of these resources to its parent
//
#define STATUS_ARBITRATION_UNHANDLED     ((NTSTATUS)0x40000026L)

//
// MessageId: STATUS_CARDBUS_NOT_SUPPORTED
//
// MessageText:
//
// The device "%hs" has detected a CardBus card in its slot, but the firmware on this system is not configured to allow the CardBus controller to be run in CardBus mode.
// The operating system will currently accept only 16-bit (R2) pc-cards on this controller.
//
#define STATUS_CARDBUS_NOT_SUPPORTED     ((NTSTATUS)0x40000027L)

//
// MessageId: STATUS_WX86_CREATEWX86TIB
//
// MessageText:
//
// Exception status code used by Win32 x86 emulation subsystem.
//
#define STATUS_WX86_CREATEWX86TIB        ((NTSTATUS)0x40000028L)

//
// MessageId: STATUS_MP_PROCESSOR_MISMATCH
//
// MessageText:
//
// The CPUs in this multiprocessor system are not all the same revision level. To use all processors the operating system restricts itself to the features of the least capable processor in the system. Should problems occur with this system, contact the CPU manufacturer to see if this mix of processors is supported.
//
#define STATUS_MP_PROCESSOR_MISMATCH     ((NTSTATUS)0x40000029L)

//
// MessageId: STATUS_HIBERNATED
//
// MessageText:
//
// The system was put into hibernation.
//
#define STATUS_HIBERNATED                ((NTSTATUS)0x4000002AL)    

//
// MessageId: STATUS_RESUME_HIBERNATION
//
// MessageText:
//
// The system was resumed from hibernation.
//
#define STATUS_RESUME_HIBERNATION        ((NTSTATUS)0x4000002BL)    

//
// MessageId: STATUS_FIRMWARE_UPDATED
//
// MessageText:
//
// Windows has detected that the system firmware (BIOS) was updated [previous firmware date = %2, current firmware date %3].
//
#define STATUS_FIRMWARE_UPDATED          ((NTSTATUS)0x4000002CL)

//
// MessageId: STATUS_DRIVERS_LEAKING_LOCKED_PAGES
//
// MessageText:
//
// A device driver is leaking locked I/O pages causing system degradation. The system has automatically enabled tracking code in order to try and catch the culprit.
//
#define STATUS_DRIVERS_LEAKING_LOCKED_PAGES ((NTSTATUS)0x4000002DL)

//
// MessageId: STATUS_MESSAGE_RETRIEVED
//
// MessageText:
//
// The ALPC message being canceled has already been retrieved from the queue on the other side.
//
#define STATUS_MESSAGE_RETRIEVED         ((NTSTATUS)0x4000002EL)

//
// MessageId: STATUS_SYSTEM_POWERSTATE_TRANSITION
//
// MessageText:
//
// The system power state is transitioning from %2 to %3.
//
#define STATUS_SYSTEM_POWERSTATE_TRANSITION ((NTSTATUS)0x4000002FL)    

//
// MessageId: STATUS_ALPC_CHECK_COMPLETION_LIST
//
// MessageText:
//
// The receive operation was successful. Check the ALPC completion list for the received message.
//
#define STATUS_ALPC_CHECK_COMPLETION_LIST ((NTSTATUS)0x40000030L)

//
// MessageId: STATUS_SYSTEM_POWERSTATE_COMPLEX_TRANSITION
//
// MessageText:
//
// The system power state is transitioning from %2 to %3 but could enter %4.
//
#define STATUS_SYSTEM_POWERSTATE_COMPLEX_TRANSITION ((NTSTATUS)0x40000031L)    

//
// MessageId: STATUS_ACCESS_AUDIT_BY_POLICY
//
// MessageText:
//
// Access to %1 is monitored by policy rule %2.
//
#define STATUS_ACCESS_AUDIT_BY_POLICY    ((NTSTATUS)0x40000032L)    

//
// MessageId: STATUS_ABANDON_HIBERFILE
//
// MessageText:
//
// A valid hibernation file has been invalidated and should be abandoned.
//
#define STATUS_ABANDON_HIBERFILE         ((NTSTATUS)0x40000033L)

//
// MessageId: STATUS_BIZRULES_NOT_ENABLED
//
// MessageText:
//
// Business rule scripts are disabled for the calling application.
//
#define STATUS_BIZRULES_NOT_ENABLED      ((NTSTATUS)0x40000034L)

//
// MessageId: STATUS_FT_READ_FROM_COPY
//
// MessageText:
//
// The specified copy of the requested data was successfully read.
//
#define STATUS_FT_READ_FROM_COPY         ((NTSTATUS)0x40000035L)

//
// MessageId: STATUS_IMAGE_AT_DIFFERENT_BASE
//
// MessageText:
//
// {Image Relocated}
// An image file was mapped at a different address from the one specified in the image file but fixups will still be automatically performed on the image.
//
#define STATUS_IMAGE_AT_DIFFERENT_BASE   ((NTSTATUS)0x40000036L)

//
// MessageId: STATUS_PATCH_DEFERRED
//
// MessageText:
//
// A system patch was successfully loaded but is not applicable to any currently loaded images.
//
#define STATUS_PATCH_DEFERRED            ((NTSTATUS)0x40000037L)

//
// MessageId: STATUS_EMULATION_BREAKPOINT
//
// MessageText:
//
// Exception status code used by ARM64EC emulation subsystem.
//
#define STATUS_EMULATION_BREAKPOINT      ((NTSTATUS)0x40000038L)

//
// MessageId: STATUS_EMULATION_SYSCALL
//
// MessageText:
//
// Exception status code used by ARM64EC emulation subsystem.
//
#define STATUS_EMULATION_SYSCALL         ((NTSTATUS)0x40000039L)

//
// MessageId: DBG_REPLY_LATER
//
// MessageText:
//
// Debugger will reply later.
//
#define DBG_REPLY_LATER                  ((NTSTATUS)0x40010001L)    // winnt

//
// MessageId: DBG_UNABLE_TO_PROVIDE_HANDLE
//
// MessageText:
//
// Debugger cannot provide handle.
//
#define DBG_UNABLE_TO_PROVIDE_HANDLE     ((NTSTATUS)0x40010002L)

//
// MessageId: DBG_TERMINATE_THREAD
//
// MessageText:
//
// Debugger terminated thread.
//
#define DBG_TERMINATE_THREAD             ((NTSTATUS)0x40010003L)    // winnt

//
// MessageId: DBG_TERMINATE_PROCESS
//
// MessageText:
//
// Debugger terminated process.
//
#define DBG_TERMINATE_PROCESS            ((NTSTATUS)0x40010004L)    // winnt

//
// MessageId: DBG_CONTROL_C
//
// MessageText:
//
// Debugger got control C.
//
#define DBG_CONTROL_C                    ((NTSTATUS)0x40010005L)    // winnt

//
// MessageId: DBG_PRINTEXCEPTION_C
//
// MessageText:
//
// Debugger printed exception on control C.
//
#define DBG_PRINTEXCEPTION_C             ((NTSTATUS)0x40010006L)    // winnt

//
// MessageId: DBG_RIPEXCEPTION
//
// MessageText:
//
// Debugger received RIP exception.
//
#define DBG_RIPEXCEPTION                 ((NTSTATUS)0x40010007L)    // winnt

//
// MessageId: DBG_CONTROL_BREAK
//
// MessageText:
//
// Debugger received control break.
//
#define DBG_CONTROL_BREAK                ((NTSTATUS)0x40010008L)    // winnt

//
// MessageId: DBG_COMMAND_EXCEPTION
//
// MessageText:
//
// Debugger command communication exception.
//
#define DBG_COMMAND_EXCEPTION            ((NTSTATUS)0x40010009L)    // winnt

//
// MessageId: DBG_PRINTEXCEPTION_WIDE_C
//
// MessageText:
//
// Debugger printed exception on control C.
//
#define DBG_PRINTEXCEPTION_WIDE_C        ((NTSTATUS)0x4001000AL)    // winnt

//
// MessageId: STATUS_HEURISTIC_DAMAGE_POSSIBLE
//
// MessageText:
//
// The attempt to commit the Transaction completed, but it is possible that some portion of the transaction tree did not commit successfully due to heuristics.  Therefore it is possible that some data modified in the transaction may not have committed, resulting in transactional inconsistency.  If possible, check the consistency of the associated data.
//
#define STATUS_HEURISTIC_DAMAGE_POSSIBLE ((NTSTATUS)0x40190001L)



/////////////////////////////////////////////////////////////////////////
//
// Standard Warning values
//
//
// Note:  Do NOT use the value 0x80000000L, as this is a non-portable value
//        for the NT_SUCCESS macro. Warning values start with a code of 1.
//
/////////////////////////////////////////////////////////////////////////

//
// MessageId: STATUS_GUARD_PAGE_VIOLATION
//
// MessageText:
//
// {EXCEPTION}
// Guard Page Exception
// A page of memory that marks the end of a data structure, such as a stack or an array, has been accessed.
//
#define STATUS_GUARD_PAGE_VIOLATION      ((NTSTATUS)0x80000001L)    // winnt

//
// MessageId: STATUS_DATATYPE_MISALIGNMENT
//
// MessageText:
//
// {EXCEPTION}
// Alignment Fault
// A datatype misalignment was detected in a load or store instruction.
//
#define STATUS_DATATYPE_MISALIGNMENT     ((NTSTATUS)0x80000002L)    // winnt

//
// MessageId: STATUS_BREAKPOINT
//
// MessageText:
//
// {EXCEPTION}
// Breakpoint
// A breakpoint has been reached.
//
#define STATUS_BREAKPOINT                ((NTSTATUS)0x80000003L)    // winnt

//
// MessageId: STATUS_SINGLE_STEP
//
// MessageText:
//
// {EXCEPTION}
// Single Step
// A single step or trace operation has just been completed.
//
#define STATUS_SINGLE_STEP               ((NTSTATUS)0x80000004L)    // winnt

//
// MessageId: STATUS_BUFFER_OVERFLOW
//
// MessageText:
//
// {Buffer Overflow}
// The data was too large to fit into the specified buffer.
//
#define STATUS_BUFFER_OVERFLOW           ((NTSTATUS)0x80000005L)

//
// MessageId: STATUS_NO_MORE_FILES
//
// MessageText:
//
// {No More Files}
// No more files were found which match the file specification.
//
#define STATUS_NO_MORE_FILES             ((NTSTATUS)0x80000006L)

//
// MessageId: STATUS_WAKE_SYSTEM_DEBUGGER
//
// MessageText:
//
// {Kernel Debugger Awakened}
// the system debugger was awakened by an interrupt.
//
#define STATUS_WAKE_SYSTEM_DEBUGGER      ((NTSTATUS)0x80000007L)

//
// MessageId: STATUS_HANDLES_CLOSED
//
// MessageText:
//
// {Handles Closed}
// Handles to objects have been automatically closed as a result of the requested operation.
//
#define STATUS_HANDLES_CLOSED            ((NTSTATUS)0x8000000AL)

//
// MessageId: STATUS_NO_INHERITANCE
//
// MessageText:
//
// {Non-Inheritable ACL}
// An access control list (ACL) contains no components that can be inherited.
//
#define STATUS_NO_INHERITANCE            ((NTSTATUS)0x8000000BL)

//
// MessageId: STATUS_GUID_SUBSTITUTION_MADE
//
// MessageText:
//
// {GUID Substitution}
// During the translation of a global identifier (GUID) to a Windows security ID (SID), no administratively-defined GUID prefix was found. A substitute prefix was used, which will not compromise system security. However, this may provide a more restrictive access than intended.
//
#define STATUS_GUID_SUBSTITUTION_MADE    ((NTSTATUS)0x8000000CL)

//
// MessageId: STATUS_PARTIAL_COPY
//
// MessageText:
//
// {Partial Copy}
// Due to protection conflicts not all the requested bytes could be copied.
//
#define STATUS_PARTIAL_COPY              ((NTSTATUS)0x8000000DL)

//
// MessageId: STATUS_DEVICE_PAPER_EMPTY
//
// MessageText:
//
// {Out of Paper}
// The printer is out of paper.
//
#define STATUS_DEVICE_PAPER_EMPTY        ((NTSTATUS)0x8000000EL)

//
// MessageId: STATUS_DEVICE_POWERED_OFF
//
// MessageText:
//
// {Device Power Is Off}
// The printer power has been turned off.
//
#define STATUS_DEVICE_POWERED_OFF        ((NTSTATUS)0x8000000FL)

//
// MessageId: STATUS_DEVICE_OFF_LINE
//
// MessageText:
//
// {Device Offline}
// The printer has been taken offline.
//
#define STATUS_DEVICE_OFF_LINE           ((NTSTATUS)0x80000010L)

//
// MessageId: STATUS_DEVICE_BUSY
//
// MessageText:
//
// {Device Busy}
// The device is currently busy.
//
#define STATUS_DEVICE_BUSY               ((NTSTATUS)0x80000011L)

//
// MessageId: STATUS_NO_MORE_EAS
//
// MessageText:
//
// {No More EAs}
// No more extended attributes (EAs) were found for the file.
//
#define STATUS_NO_MORE_EAS               ((NTSTATUS)0x80000012L)

//
// MessageId: STATUS_INVALID_EA_NAME
//
// MessageText:
//
// {Illegal EA}
// The specified extended attribute (EA) name contains at least one illegal character.
//
#define STATUS_INVALID_EA_NAME           ((NTSTATUS)0x80000013L)

//
// MessageId: STATUS_EA_LIST_INCONSISTENT
//
// MessageText:
//
// {Inconsistent EA List}
// The extended attribute (EA) list is inconsistent.
//
#define STATUS_EA_LIST_INCONSISTENT      ((NTSTATUS)0x80000014L)

//
// MessageId: STATUS_INVALID_EA_FLAG
//
// MessageText:
//
// {Invalid EA Flag}
// An invalid extended attribute (EA) flag was set.
//
#define STATUS_INVALID_EA_FLAG           ((NTSTATUS)0x80000015L)

//
// MessageId: STATUS_VERIFY_REQUIRED
//
// MessageText:
//
// {Verifying Disk}
// The media has changed and a verify operation is in progress so no reads or writes may be performed to the device, except those used in the verify operation.
//
#define STATUS_VERIFY_REQUIRED           ((NTSTATUS)0x80000016L)

//
// MessageId: STATUS_EXTRANEOUS_INFORMATION
//
// MessageText:
//
// {Too Much Information}
// The specified access control list (ACL) contained more information than was expected.
//
#define STATUS_EXTRANEOUS_INFORMATION    ((NTSTATUS)0x80000017L)

//
// MessageId: STATUS_RXACT_COMMIT_NECESSARY
//
// MessageText:
//
// This warning level status indicates that the transaction state already exists for the registry sub-tree, but that a transaction commit was previously aborted.
// The commit has NOT been completed, but has not been rolled back either (so it may still be committed if desired).
//
#define STATUS_RXACT_COMMIT_NECESSARY    ((NTSTATUS)0x80000018L)

//
// MessageId: STATUS_NO_MORE_ENTRIES
//
// MessageText:
//
// {No More Entries}
// No more entries are available from an enumeration operation.
//
#define STATUS_NO_MORE_ENTRIES           ((NTSTATUS)0x8000001AL)

//
// MessageId: STATUS_FILEMARK_DETECTED
//
// MessageText:
//
// {Filemark Found}
// A filemark was detected.
//
#define STATUS_FILEMARK_DETECTED         ((NTSTATUS)0x8000001BL)

//
// MessageId: STATUS_MEDIA_CHANGED
//
// MessageText:
//
// {Media Changed}
// The media may have changed.
//
#define STATUS_MEDIA_CHANGED             ((NTSTATUS)0x8000001CL)

//
// MessageId: STATUS_BUS_RESET
//
// MessageText:
//
// {I/O Bus Reset}
// An I/O bus reset was detected.
//
#define STATUS_BUS_RESET                 ((NTSTATUS)0x8000001DL)

//
// MessageId: STATUS_END_OF_MEDIA
//
// MessageText:
//
// {End of Media}
// The end of the media was encountered.
//
#define STATUS_END_OF_MEDIA              ((NTSTATUS)0x8000001EL)

//
// MessageId: STATUS_BEGINNING_OF_MEDIA
//
// MessageText:
//
// Beginning of tape or partition has been detected.
//
#define STATUS_BEGINNING_OF_MEDIA        ((NTSTATUS)0x8000001FL)

//
// MessageId: STATUS_MEDIA_CHECK
//
// MessageText:
//
// {Media Changed}
// The media may have changed.
//
#define STATUS_MEDIA_CHECK               ((NTSTATUS)0x80000020L)

//
// MessageId: STATUS_SETMARK_DETECTED
//
// MessageText:
//
// A tape access reached a setmark.
//
#define STATUS_SETMARK_DETECTED          ((NTSTATUS)0x80000021L)

//
// MessageId: STATUS_NO_DATA_DETECTED
//
// MessageText:
//
// During a tape access, the end of the data written is reached.
//
#define STATUS_NO_DATA_DETECTED          ((NTSTATUS)0x80000022L)

//
// MessageId: STATUS_REDIRECTOR_HAS_OPEN_HANDLES
//
// MessageText:
//
// The redirector is in use and cannot be unloaded.
//
#define STATUS_REDIRECTOR_HAS_OPEN_HANDLES ((NTSTATUS)0x80000023L)

//
// MessageId: STATUS_SERVER_HAS_OPEN_HANDLES
//
// MessageText:
//
// The server is in use and cannot be unloaded.
//
#define STATUS_SERVER_HAS_OPEN_HANDLES   ((NTSTATUS)0x80000024L)

//
// MessageId: STATUS_ALREADY_DISCONNECTED
//
// MessageText:
//
// The specified connection has already been disconnected.
//
#define STATUS_ALREADY_DISCONNECTED      ((NTSTATUS)0x80000025L)

//
// MessageId: STATUS_LONGJUMP
//
// MessageText:
//
// A long jump has been executed.
//
#define STATUS_LONGJUMP                  ((NTSTATUS)0x80000026L)    // winnt

//
// MessageId: STATUS_CLEANER_CARTRIDGE_INSTALLED
//
// MessageText:
//
// A cleaner cartridge is present in the tape library.
//
#define STATUS_CLEANER_CARTRIDGE_INSTALLED ((NTSTATUS)0x80000027L)

//
// MessageId: STATUS_PLUGPLAY_QUERY_VETOED
//
// MessageText:
//
// The Plug and Play query operation was not successful.
//
#define STATUS_PLUGPLAY_QUERY_VETOED     ((NTSTATUS)0x80000028L)

//
// MessageId: STATUS_UNWIND_CONSOLIDATE
//
// MessageText:
//
// A frame consolidation has been executed.
//
#define STATUS_UNWIND_CONSOLIDATE        ((NTSTATUS)0x80000029L)    // winnt

//
// MessageId: STATUS_REGISTRY_HIVE_RECOVERED
//
// MessageText:
//
// {Registry Hive Recovered}
// Registry hive (file):
// %hs
// was corrupted and it has been recovered. Some data might have been lost.
//
#define STATUS_REGISTRY_HIVE_RECOVERED   ((NTSTATUS)0x8000002AL)

//
// MessageId: STATUS_DLL_MIGHT_BE_INSECURE
//
// MessageText:
//
// The application is attempting to run executable code from the module %hs. This may be insecure. An alternative, %hs, is available. Should the application use the secure module %hs?
//
#define STATUS_DLL_MIGHT_BE_INSECURE     ((NTSTATUS)0x8000002BL)

//
// MessageId: STATUS_DLL_MIGHT_BE_INCOMPATIBLE
//
// MessageText:
//
// The application is loading executable code from the module %hs. This is secure, but may be incompatible with previous releases of the operating system. An alternative, %hs, is available. Should the application use the secure module %hs?
//
#define STATUS_DLL_MIGHT_BE_INCOMPATIBLE ((NTSTATUS)0x8000002CL)

//
// MessageId: STATUS_STOPPED_ON_SYMLINK
//
// MessageText:
//
// The create operation stopped after reaching a symbolic link.
//
#define STATUS_STOPPED_ON_SYMLINK        ((NTSTATUS)0x8000002DL)

//
// MessageId: STATUS_CANNOT_GRANT_REQUESTED_OPLOCK
//
// MessageText:
//
// An oplock of the requested level cannot be granted.  An oplock of a lower level may be available.
//
#define STATUS_CANNOT_GRANT_REQUESTED_OPLOCK ((NTSTATUS)0x8000002EL)

//
// MessageId: STATUS_NO_ACE_CONDITION
//
// MessageText:
//
// {No ACE Condition}
// The specified access control entry (ACE) does not contain a condition.
//
#define STATUS_NO_ACE_CONDITION          ((NTSTATUS)0x8000002FL)

//
// MessageId: STATUS_DEVICE_SUPPORT_IN_PROGRESS
//
// MessageText:
//
// {Support Being Determined}
// Device's command support detection is in progress.
//
#define STATUS_DEVICE_SUPPORT_IN_PROGRESS ((NTSTATUS)0x80000030L)

//
// MessageId: STATUS_DEVICE_POWER_CYCLE_REQUIRED
//
// MessageText:
//
// The device needs to be power cycled.
//
#define STATUS_DEVICE_POWER_CYCLE_REQUIRED ((NTSTATUS)0x80000031L)

//
// MessageId: STATUS_NO_WORK_DONE
//
// MessageText:
//
// The action requested resulted in no work being done. Error-style clean-up has been performed.
//
#define STATUS_NO_WORK_DONE              ((NTSTATUS)0x80000032L)

//
// MessageId: STATUS_RETURN_ADDRESS_HIJACK_ATTEMPT
//
// MessageText:
//
// A return address hijack is being attempted. This is supported by the operating system when user-mode shadow stacks are enabled.
//
#define STATUS_RETURN_ADDRESS_HIJACK_ATTEMPT ((NTSTATUS)0x80000033L)

//
// MessageId: STATUS_RECOVERABLE_BUGCHECK
//
// MessageText:
//
// {EXCEPTION}
// Recoverable Bugcheck Exception
// A bugcheck was re-raised as an exception.
//
#define STATUS_RECOVERABLE_BUGCHECK      ((NTSTATUS)0x80000034L)

//
// MessageId: DBG_EXCEPTION_NOT_HANDLED
//
// MessageText:
//
// Debugger did not handle the exception.
//
#define DBG_EXCEPTION_NOT_HANDLED        ((NTSTATUS)0x80010001L)    // winnt

//
// MessageId: STATUS_CLUSTER_NODE_ALREADY_UP
//
// MessageText:
//
// The cluster node is already up.
//
#define STATUS_CLUSTER_NODE_ALREADY_UP   ((NTSTATUS)0x80130001L)

//
// MessageId: STATUS_CLUSTER_NODE_ALREADY_DOWN
//
// MessageText:
//
// The cluster node is already down.
//
#define STATUS_CLUSTER_NODE_ALREADY_DOWN ((NTSTATUS)0x80130002L)

//
// MessageId: STATUS_CLUSTER_NETWORK_ALREADY_ONLINE
//
// MessageText:
//
// The cluster network is already online.
//
#define STATUS_CLUSTER_NETWORK_ALREADY_ONLINE ((NTSTATUS)0x80130003L)

//
// MessageId: STATUS_CLUSTER_NETWORK_ALREADY_OFFLINE
//
// MessageText:
//
// The cluster network is already offline.
//
#define STATUS_CLUSTER_NETWORK_ALREADY_OFFLINE ((NTSTATUS)0x80130004L)

//
// MessageId: STATUS_CLUSTER_NODE_ALREADY_MEMBER
//
// MessageText:
//
// The cluster node is already a member of the cluster.
//
#define STATUS_CLUSTER_NODE_ALREADY_MEMBER ((NTSTATUS)0x80130005L)

//
// MessageId: STATUS_FLT_BUFFER_TOO_SMALL
//
// MessageText:
//
// {Buffer too small}
// The buffer is too small to contain the entry. No information has been written to the buffer.
//
#define STATUS_FLT_BUFFER_TOO_SMALL      ((NTSTATUS)0x801C0001L)

//
// MessageId: STATUS_FVE_PARTIAL_METADATA
//
// MessageText:
//
// Volume Metadata read or write is incomplete.
//
#define STATUS_FVE_PARTIAL_METADATA      ((NTSTATUS)0x80210001L)

//
// MessageId: STATUS_FVE_TRANSIENT_STATE
//
// MessageText:
//
// BitLocker encryption keys were ignored because the volume was in a transient state.
//
#define STATUS_FVE_TRANSIENT_STATE       ((NTSTATUS)0x80210002L)

/*++

 MessageId's 0xcf00 - 0xcfff (inclusive) are for Cloud Files specific warning messages.

--*/
//
// MessageId: STATUS_CLOUD_FILE_PROPERTY_BLOB_CHECKSUM_MISMATCH
//
// MessageText:
//
// The cloud file property is possibly corrupt. The on-disk checksum does not match the computed checksum.
//
#define STATUS_CLOUD_FILE_PROPERTY_BLOB_CHECKSUM_MISMATCH ((NTSTATUS)0x8000CF00L)

/*++

 End of Cloud Files specific warning messages.

--*/
/////////////////////////////////////////////////////////////////////////
//
//  Standard Error values
//
/////////////////////////////////////////////////////////////////////////

//
// MessageId: STATUS_UNSUCCESSFUL
//
// MessageText:
//
// {Operation Failed}
// The requested operation was unsuccessful.
//
#define STATUS_UNSUCCESSFUL              ((NTSTATUS)0xC0000001L)

//
// MessageId: STATUS_NOT_IMPLEMENTED
//
// MessageText:
//
// {Not Implemented}
// The requested operation is not implemented.
//
#define STATUS_NOT_IMPLEMENTED           ((NTSTATUS)0xC0000002L)

//
// MessageId: STATUS_INVALID_INFO_CLASS
//
// MessageText:
//
// {Invalid Parameter}
// The specified information class is not a valid information class for the specified object.
//
#define STATUS_INVALID_INFO_CLASS        ((NTSTATUS)0xC0000003L)    // ntsubauth

//
// MessageId: STATUS_INFO_LENGTH_MISMATCH
//
// MessageText:
//
// The specified information record length does not match the length required for the specified information class.
//
#define STATUS_INFO_LENGTH_MISMATCH      ((NTSTATUS)0xC0000004L)

//
// MessageId: STATUS_ACCESS_VIOLATION
//
// MessageText:
//
// The instruction at 0x%p referenced memory at 0x%p. The memory could not be %s.
//
#define STATUS_ACCESS_VIOLATION          ((NTSTATUS)0xC0000005L)    // winnt

//
// MessageId: STATUS_IN_PAGE_ERROR
//
// MessageText:
//
// The instruction at 0x%p referenced memory at 0x%p. The required data was not placed into memory because of an I/O error status of 0x%x.
//
#define STATUS_IN_PAGE_ERROR             ((NTSTATUS)0xC0000006L)    // winnt

//
// MessageId: STATUS_PAGEFILE_QUOTA
//
// MessageText:
//
// The pagefile quota for the process has been exhausted.
//
#define STATUS_PAGEFILE_QUOTA            ((NTSTATUS)0xC0000007L)

//
// MessageId: STATUS_INVALID_HANDLE
//
// MessageText:
//
// An invalid HANDLE was specified.
//
#define STATUS_INVALID_HANDLE            ((NTSTATUS)0xC0000008L)    // winnt

//
// MessageId: STATUS_BAD_INITIAL_STACK
//
// MessageText:
//
// An invalid initial stack was specified in a call to NtCreateThread.
//
#define STATUS_BAD_INITIAL_STACK         ((NTSTATUS)0xC0000009L)

//
// MessageId: STATUS_BAD_INITIAL_PC
//
// MessageText:
//
// An invalid initial start address was specified in a call to NtCreateThread.
//
#define STATUS_BAD_INITIAL_PC            ((NTSTATUS)0xC000000AL)

//
// MessageId: STATUS_INVALID_CID
//
// MessageText:
//
// An invalid Client ID was specified.
//
#define STATUS_INVALID_CID               ((NTSTATUS)0xC000000BL)

//
// MessageId: STATUS_TIMER_NOT_CANCELED
//
// MessageText:
//
// An attempt was made to cancel or set a timer that has an associated APC and the subject thread is not the thread that originally set the timer with an associated APC routine.
//
#define STATUS_TIMER_NOT_CANCELED        ((NTSTATUS)0xC000000CL)

//
// MessageId: STATUS_INVALID_PARAMETER
//
// MessageText:
//
// An invalid parameter was passed to a service or function.
//
#define STATUS_INVALID_PARAMETER         ((NTSTATUS)0xC000000DL)    // winnt

//
// MessageId: STATUS_NO_SUCH_DEVICE
//
// MessageText:
//
// A device which does not exist was specified.
//
#define STATUS_NO_SUCH_DEVICE            ((NTSTATUS)0xC000000EL)

//
// MessageId: STATUS_NO_SUCH_FILE
//
// MessageText:
//
// {File Not Found}
// The file %hs does not exist.
//
#define STATUS_NO_SUCH_FILE              ((NTSTATUS)0xC000000FL)

//
// MessageId: STATUS_INVALID_DEVICE_REQUEST
//
// MessageText:
//
// The specified request is not a valid operation for the target device.
//
#define STATUS_INVALID_DEVICE_REQUEST    ((NTSTATUS)0xC0000010L)

//
// MessageId: STATUS_END_OF_FILE
//
// MessageText:
//
// The end-of-file marker has been reached. There is no valid data in the file beyond this marker.
//
#define STATUS_END_OF_FILE               ((NTSTATUS)0xC0000011L)

//
// MessageId: STATUS_WRONG_VOLUME
//
// MessageText:
//
// {Wrong Volume}
// The wrong volume is in the drive.
// Please insert volume %hs into drive %hs.
//
#define STATUS_WRONG_VOLUME              ((NTSTATUS)0xC0000012L)

//
// MessageId: STATUS_NO_MEDIA_IN_DEVICE
//
// MessageText:
//
// {No Disk}
// There is no disk in the drive.
// Please insert a disk into drive %hs.
//
#define STATUS_NO_MEDIA_IN_DEVICE        ((NTSTATUS)0xC0000013L)

//
// MessageId: STATUS_UNRECOGNIZED_MEDIA
//
// MessageText:
//
// {Unknown Disk Format}
// The disk in drive %hs is not formatted properly.
// Please check the disk, and reformat if necessary.
//
#define STATUS_UNRECOGNIZED_MEDIA        ((NTSTATUS)0xC0000014L)

//
// MessageId: STATUS_NONEXISTENT_SECTOR
//
// MessageText:
//
// {Sector Not Found}
// The specified sector does not exist.
//
#define STATUS_NONEXISTENT_SECTOR        ((NTSTATUS)0xC0000015L)

//
// MessageId: STATUS_MORE_PROCESSING_REQUIRED
//
// MessageText:
//
// {Still Busy}
// The specified I/O request packet (IRP) cannot be disposed of because the I/O operation is not complete.
//
#define STATUS_MORE_PROCESSING_REQUIRED  ((NTSTATUS)0xC0000016L)

//
// MessageId: STATUS_NO_MEMORY
//
// MessageText:
//
// {Not Enough Quota}
// Not enough virtual memory or paging file quota is available to complete the specified operation.
//
#define STATUS_NO_MEMORY                 ((NTSTATUS)0xC0000017L)    // winnt

//
// MessageId: STATUS_CONFLICTING_ADDRESSES
//
// MessageText:
//
// {Conflicting Address Range}
// The specified address range conflicts with the address space.
//
#define STATUS_CONFLICTING_ADDRESSES     ((NTSTATUS)0xC0000018L)

//
// MessageId: STATUS_NOT_MAPPED_VIEW
//
// MessageText:
//
// Address range to unmap is not a mapped view.
//
#define STATUS_NOT_MAPPED_VIEW           ((NTSTATUS)0xC0000019L)

//
// MessageId: STATUS_UNABLE_TO_FREE_VM
//
// MessageText:
//
// Virtual memory cannot be freed.
//
#define STATUS_UNABLE_TO_FREE_VM         ((NTSTATUS)0xC000001AL)

//
// MessageId: STATUS_UNABLE_TO_DELETE_SECTION
//
// MessageText:
//
// Specified section cannot be deleted.
//
#define STATUS_UNABLE_TO_DELETE_SECTION  ((NTSTATUS)0xC000001BL)

//
// MessageId: STATUS_INVALID_SYSTEM_SERVICE
//
// MessageText:
//
// An invalid system service was specified in a system service call.
//
#define STATUS_INVALID_SYSTEM_SERVICE    ((NTSTATUS)0xC000001CL)

//
// MessageId: STATUS_ILLEGAL_INSTRUCTION
//
// MessageText:
//
// {EXCEPTION}
// Illegal Instruction
// An attempt was made to execute an illegal instruction.
//
#define STATUS_ILLEGAL_INSTRUCTION       ((NTSTATUS)0xC000001DL)    // winnt

//
// MessageId: STATUS_INVALID_LOCK_SEQUENCE
//
// MessageText:
//
// {Invalid Lock Sequence}
// An attempt was made to execute an invalid lock sequence.
//
#define STATUS_INVALID_LOCK_SEQUENCE     ((NTSTATUS)0xC000001EL)

//
// MessageId: STATUS_INVALID_VIEW_SIZE
//
// MessageText:
//
// {Invalid Mapping}
// An attempt was made to create a view for a section which is bigger than the section.
//
#define STATUS_INVALID_VIEW_SIZE         ((NTSTATUS)0xC000001FL)

//
// MessageId: STATUS_INVALID_FILE_FOR_SECTION
//
// MessageText:
//
// {Bad File}
// The attributes of the specified mapping file for a section of memory cannot be read.
//
#define STATUS_INVALID_FILE_FOR_SECTION  ((NTSTATUS)0xC0000020L)

//
// MessageId: STATUS_ALREADY_COMMITTED
//
// MessageText:
//
// {Already Committed}
// The specified address range is already committed.
//
#define STATUS_ALREADY_COMMITTED         ((NTSTATUS)0xC0000021L)

//
// MessageId: STATUS_ACCESS_DENIED
//
// MessageText:
//
// {Access Denied}
// A process has requested access to an object, but has not been granted those access rights.
//
#define STATUS_ACCESS_DENIED             ((NTSTATUS)0xC0000022L)

//
// MessageId: STATUS_BUFFER_TOO_SMALL
//
// MessageText:
//
// {Buffer Too Small}
// The buffer is too small to contain the entry. No information has been written to the buffer.
//
#define STATUS_BUFFER_TOO_SMALL          ((NTSTATUS)0xC0000023L)

//
// MessageId: STATUS_OBJECT_TYPE_MISMATCH
//
// MessageText:
//
// {Wrong Type}
// There is a mismatch between the type of object required by the requested operation and the type of object that is specified in the request.
//
#define STATUS_OBJECT_TYPE_MISMATCH      ((NTSTATUS)0xC0000024L)

//
// MessageId: STATUS_NONCONTINUABLE_EXCEPTION
//
// MessageText:
//
// {EXCEPTION}
// Cannot Continue
// Windows cannot continue from this exception.
//
#define STATUS_NONCONTINUABLE_EXCEPTION  ((NTSTATUS)0xC0000025L)    // winnt

//
// MessageId: STATUS_INVALID_DISPOSITION
//
// MessageText:
//
// An invalid exception disposition was returned by an exception handler.
//
#define STATUS_INVALID_DISPOSITION       ((NTSTATUS)0xC0000026L)    // winnt

//
// MessageId: STATUS_UNWIND
//
// MessageText:
//
// Unwind exception code.
//
#define STATUS_UNWIND                    ((NTSTATUS)0xC0000027L)

//
// MessageId: STATUS_BAD_STACK
//
// MessageText:
//
// An invalid or unaligned stack was encountered during an unwind operation.
//
#define STATUS_BAD_STACK                 ((NTSTATUS)0xC0000028L)

//
// MessageId: STATUS_INVALID_UNWIND_TARGET
//
// MessageText:
//
// An invalid unwind target was encountered during an unwind operation.
//
#define STATUS_INVALID_UNWIND_TARGET     ((NTSTATUS)0xC0000029L)

//
// MessageId: STATUS_NOT_LOCKED
//
// MessageText:
//
// An attempt was made to unlock a page of memory which was not locked.
//
#define STATUS_NOT_LOCKED                ((NTSTATUS)0xC000002AL)

//
// MessageId: STATUS_PARITY_ERROR
//
// MessageText:
//
// Device parity error on I/O operation.
//
#define STATUS_PARITY_ERROR              ((NTSTATUS)0xC000002BL)

//
// MessageId: STATUS_UNABLE_TO_DECOMMIT_VM
//
// MessageText:
//
// An attempt was made to decommit uncommitted virtual memory.
//
#define STATUS_UNABLE_TO_DECOMMIT_VM     ((NTSTATUS)0xC000002CL)

//
// MessageId: STATUS_NOT_COMMITTED
//
// MessageText:
//
// An attempt was made to change the attributes on memory that has not been committed.
//
#define STATUS_NOT_COMMITTED             ((NTSTATUS)0xC000002DL)

//
// MessageId: STATUS_INVALID_PORT_ATTRIBUTES
//
// MessageText:
//
// Invalid Object Attributes specified to NtCreatePort or invalid Port Attributes specified to NtConnectPort
//
#define STATUS_INVALID_PORT_ATTRIBUTES   ((NTSTATUS)0xC000002EL)

//
// MessageId: STATUS_PORT_MESSAGE_TOO_LONG
//
// MessageText:
//
// Length of message passed to NtRequestPort or NtRequestWaitReplyPort was longer than the maximum message allowed by the port.
//
#define STATUS_PORT_MESSAGE_TOO_LONG     ((NTSTATUS)0xC000002FL)

//
// MessageId: STATUS_INVALID_PARAMETER_MIX
//
// MessageText:
//
// An invalid combination of parameters was specified.
//
#define STATUS_INVALID_PARAMETER_MIX     ((NTSTATUS)0xC0000030L)

//
// MessageId: STATUS_INVALID_QUOTA_LOWER
//
// MessageText:
//
// An attempt was made to lower a quota limit below the current usage.
//
#define STATUS_INVALID_QUOTA_LOWER       ((NTSTATUS)0xC0000031L)

//
// MessageId: STATUS_DISK_CORRUPT_ERROR
//
// MessageText:
//
// {Corrupt Disk}
// The file system structure on the disk is corrupt and unusable.
// Please run the Chkdsk utility on the volume %hs.
//
#define STATUS_DISK_CORRUPT_ERROR        ((NTSTATUS)0xC0000032L)

//
// MessageId: STATUS_OBJECT_NAME_INVALID
//
// MessageText:
//
// Object Name invalid.
//
#define STATUS_OBJECT_NAME_INVALID       ((NTSTATUS)0xC0000033L)

//
// MessageId: STATUS_OBJECT_NAME_NOT_FOUND
//
// MessageText:
//
// Object Name not found.
//
#define STATUS_OBJECT_NAME_NOT_FOUND     ((NTSTATUS)0xC0000034L)

//
// MessageId: STATUS_OBJECT_NAME_COLLISION
//
// MessageText:
//
// Object Name already exists.
//
#define STATUS_OBJECT_NAME_COLLISION     ((NTSTATUS)0xC0000035L)

//
// MessageId: STATUS_PORT_DO_NOT_DISTURB
//
// MessageText:
//
// A port with the 'do not disturb' flag set attempted to send a message to a port in a suspended process.
// The process was not woken, and the message was not delivered.
//
#define STATUS_PORT_DO_NOT_DISTURB       ((NTSTATUS)0xC0000036L)

//
// MessageId: STATUS_PORT_DISCONNECTED
//
// MessageText:
//
// Attempt to send a message to a disconnected communication port.
//
#define STATUS_PORT_DISCONNECTED         ((NTSTATUS)0xC0000037L)

//
// MessageId: STATUS_DEVICE_ALREADY_ATTACHED
//
// MessageText:
//
// An attempt was made to attach to a device that was already attached to another device.
//
#define STATUS_DEVICE_ALREADY_ATTACHED   ((NTSTATUS)0xC0000038L)

//
// MessageId: STATUS_OBJECT_PATH_INVALID
//
// MessageText:
//
// Object Path Component was not a directory object.
//
#define STATUS_OBJECT_PATH_INVALID       ((NTSTATUS)0xC0000039L)

//
// MessageId: STATUS_OBJECT_PATH_NOT_FOUND
//
// MessageText:
//
// {Path Not Found}
// The path %hs does not exist.
//
#define STATUS_OBJECT_PATH_NOT_FOUND     ((NTSTATUS)0xC000003AL)

//
// MessageId: STATUS_OBJECT_PATH_SYNTAX_BAD
//
// MessageText:
//
// Object Path Component was not a directory object.
//
#define STATUS_OBJECT_PATH_SYNTAX_BAD    ((NTSTATUS)0xC000003BL)

//
// MessageId: STATUS_DATA_OVERRUN
//
// MessageText:
//
// {Data Overrun}
// A data overrun error occurred.
//
#define STATUS_DATA_OVERRUN              ((NTSTATUS)0xC000003CL)

//
// MessageId: STATUS_DATA_LATE_ERROR
//
// MessageText:
//
// {Data Late}
// A data late error occurred.
//
#define STATUS_DATA_LATE_ERROR           ((NTSTATUS)0xC000003DL)

//
// MessageId: STATUS_DATA_ERROR
//
// MessageText:
//
// {Data Error}
// An error in reading or writing data occurred.
//
#define STATUS_DATA_ERROR                ((NTSTATUS)0xC000003EL)

//
// MessageId: STATUS_CRC_ERROR
//
// MessageText:
//
// {Bad CRC}
// A cyclic redundancy check (CRC) checksum error occurred.
//
#define STATUS_CRC_ERROR                 ((NTSTATUS)0xC000003FL)

//
// MessageId: STATUS_SECTION_TOO_BIG
//
// MessageText:
//
// {Section Too Large}
// The specified section is too big to map the file.
//
#define STATUS_SECTION_TOO_BIG           ((NTSTATUS)0xC0000040L)

//
// MessageId: STATUS_PORT_CONNECTION_REFUSED
//
// MessageText:
//
// The NtConnectPort request is refused.
//
#define STATUS_PORT_CONNECTION_REFUSED   ((NTSTATUS)0xC0000041L)

//
// MessageId: STATUS_INVALID_PORT_HANDLE
//
// MessageText:
//
// The type of port handle is invalid for the operation requested.
//
#define STATUS_INVALID_PORT_HANDLE       ((NTSTATUS)0xC0000042L)

//
// MessageId: STATUS_SHARING_VIOLATION
//
// MessageText:
//
// A file cannot be opened because the share access flags are incompatible.
//
#define STATUS_SHARING_VIOLATION         ((NTSTATUS)0xC0000043L)

//
// MessageId: STATUS_QUOTA_EXCEEDED
//
// MessageText:
//
// Insufficient quota exists to complete the operation
//
#define STATUS_QUOTA_EXCEEDED            ((NTSTATUS)0xC0000044L)

//
// MessageId: STATUS_INVALID_PAGE_PROTECTION
//
// MessageText:
//
// The specified page protection was not valid.
//
#define STATUS_INVALID_PAGE_PROTECTION   ((NTSTATUS)0xC0000045L)

//
// MessageId: STATUS_MUTANT_NOT_OWNED
//
// MessageText:
//
// An attempt to release a mutant object was made by a thread that was not the owner of the mutant object.
//
#define STATUS_MUTANT_NOT_OWNED          ((NTSTATUS)0xC0000046L)

//
// MessageId: STATUS_SEMAPHORE_LIMIT_EXCEEDED
//
// MessageText:
//
// An attempt was made to release a semaphore such that its maximum count would have been exceeded.
//
#define STATUS_SEMAPHORE_LIMIT_EXCEEDED  ((NTSTATUS)0xC0000047L)

//
// MessageId: STATUS_PORT_ALREADY_SET
//
// MessageText:
//
// An attempt to set a process's DebugPort or ExceptionPort was made, but a port already exists in the process or an attempt to set a file's CompletionPort made, but a port was already set in the file or an attempt to set an ALPC port's associated completion port was made, but it is already set.
//
#define STATUS_PORT_ALREADY_SET          ((NTSTATUS)0xC0000048L)

//
// MessageId: STATUS_SECTION_NOT_IMAGE
//
// MessageText:
//
// An attempt was made to query image information on a section which does not map an image.
//
#define STATUS_SECTION_NOT_IMAGE         ((NTSTATUS)0xC0000049L)

//
// MessageId: STATUS_SUSPEND_COUNT_EXCEEDED
//
// MessageText:
//
// An attempt was made to suspend a thread whose suspend count was at its maximum.
//
#define STATUS_SUSPEND_COUNT_EXCEEDED    ((NTSTATUS)0xC000004AL)

//
// MessageId: STATUS_THREAD_IS_TERMINATING
//
// MessageText:
//
// An attempt was made to access a thread that has begun termination.
//
#define STATUS_THREAD_IS_TERMINATING     ((NTSTATUS)0xC000004BL)

//
// MessageId: STATUS_BAD_WORKING_SET_LIMIT
//
// MessageText:
//
// An attempt was made to set the working set limit to an invalid value (minimum greater than maximum, etc).
//
#define STATUS_BAD_WORKING_SET_LIMIT     ((NTSTATUS)0xC000004CL)

//
// MessageId: STATUS_INCOMPATIBLE_FILE_MAP
//
// MessageText:
//
// A section was created to map a file which is not compatible to an already existing section which maps the same file.
//
#define STATUS_INCOMPATIBLE_FILE_MAP     ((NTSTATUS)0xC000004DL)

//
// MessageId: STATUS_SECTION_PROTECTION
//
// MessageText:
//
// A view to a section specifies a protection which is incompatible with the initial view's protection.
//
#define STATUS_SECTION_PROTECTION        ((NTSTATUS)0xC000004EL)

//
// MessageId: STATUS_EAS_NOT_SUPPORTED
//
// MessageText:
//
// An operation involving EAs failed because the file system does not support EAs.
//
#define STATUS_EAS_NOT_SUPPORTED         ((NTSTATUS)0xC000004FL)

//
// MessageId: STATUS_EA_TOO_LARGE
//
// MessageText:
//
// An EA operation failed because EA set is too large.
//
#define STATUS_EA_TOO_LARGE              ((NTSTATUS)0xC0000050L)

//
// MessageId: STATUS_NONEXISTENT_EA_ENTRY
//
// MessageText:
//
// An EA operation failed because the name or EA index is invalid.
//
#define STATUS_NONEXISTENT_EA_ENTRY      ((NTSTATUS)0xC0000051L)

//
// MessageId: STATUS_NO_EAS_ON_FILE
//
// MessageText:
//
// The file for which EAs were requested has no EAs.
//
#define STATUS_NO_EAS_ON_FILE            ((NTSTATUS)0xC0000052L)

//
// MessageId: STATUS_EA_CORRUPT_ERROR
//
// MessageText:
//
// The EA is corrupt and non-readable.
//
#define STATUS_EA_CORRUPT_ERROR          ((NTSTATUS)0xC0000053L)

//
// MessageId: STATUS_FILE_LOCK_CONFLICT
//
// MessageText:
//
// A requested read/write cannot be granted due to a conflicting file lock.
//
#define STATUS_FILE_LOCK_CONFLICT        ((NTSTATUS)0xC0000054L)

//
// MessageId: STATUS_LOCK_NOT_GRANTED
//
// MessageText:
//
// A requested file lock cannot be granted due to other existing locks.
//
#define STATUS_LOCK_NOT_GRANTED          ((NTSTATUS)0xC0000055L)

//
// MessageId: STATUS_DELETE_PENDING
//
// MessageText:
//
// A non close operation has been requested of a file object with a delete pending.
//
#define STATUS_DELETE_PENDING            ((NTSTATUS)0xC0000056L)

//
// MessageId: STATUS_CTL_FILE_NOT_SUPPORTED
//
// MessageText:
//
// An attempt was made to set the control attribute on a file. This attribute is not supported in the target file system.
//
#define STATUS_CTL_FILE_NOT_SUPPORTED    ((NTSTATUS)0xC0000057L)

//
// MessageId: STATUS_UNKNOWN_REVISION
//
// MessageText:
//
// Indicates a revision number encountered or specified is not one known by the service. It may be a more recent revision than the service is aware of.
//
#define STATUS_UNKNOWN_REVISION          ((NTSTATUS)0xC0000058L)

//
// MessageId: STATUS_REVISION_MISMATCH
//
// MessageText:
//
// Indicates two revision levels are incompatible.
//
#define STATUS_REVISION_MISMATCH         ((NTSTATUS)0xC0000059L)

//
// MessageId: STATUS_INVALID_OWNER
//
// MessageText:
//
// Indicates a particular Security ID may not be assigned as the owner of an object.
//
#define STATUS_INVALID_OWNER             ((NTSTATUS)0xC000005AL)

//
// MessageId: STATUS_INVALID_PRIMARY_GROUP
//
// MessageText:
//
// Indicates a particular Security ID may not be assigned as the primary group of an object.
//
#define STATUS_INVALID_PRIMARY_GROUP     ((NTSTATUS)0xC000005BL)

//
// MessageId: STATUS_NO_IMPERSONATION_TOKEN
//
// MessageText:
//
// An attempt has been made to operate on an impersonation token by a thread that is not currently impersonating a client.
//
#define STATUS_NO_IMPERSONATION_TOKEN    ((NTSTATUS)0xC000005CL)

//
// MessageId: STATUS_CANT_DISABLE_MANDATORY
//
// MessageText:
//
// A mandatory group may not be disabled.
//
#define STATUS_CANT_DISABLE_MANDATORY    ((NTSTATUS)0xC000005DL)

//
// MessageId: STATUS_NO_LOGON_SERVERS
//
// MessageText:
//
// We can't sign you in with this credential because your domain isn't available. Make sure your device is connected to your organization's network and try again. If you previously signed in on this device with another credential, you can sign in with that credential.
//
#define STATUS_NO_LOGON_SERVERS          ((NTSTATUS)0xC000005EL)

//
// MessageId: STATUS_NO_SUCH_LOGON_SESSION
//
// MessageText:
//
// A specified logon session does not exist. It may already have been terminated.
//
#define STATUS_NO_SUCH_LOGON_SESSION     ((NTSTATUS)0xC000005FL)

//
// MessageId: STATUS_NO_SUCH_PRIVILEGE
//
// MessageText:
//
// A specified privilege does not exist.
//
#define STATUS_NO_SUCH_PRIVILEGE         ((NTSTATUS)0xC0000060L)

//
// MessageId: STATUS_PRIVILEGE_NOT_HELD
//
// MessageText:
//
// A required privilege is not held by the client.
//
#define STATUS_PRIVILEGE_NOT_HELD        ((NTSTATUS)0xC0000061L)

//
// MessageId: STATUS_INVALID_ACCOUNT_NAME
//
// MessageText:
//
// The name provided is not a properly formed account name.
//
#define STATUS_INVALID_ACCOUNT_NAME      ((NTSTATUS)0xC0000062L)

//
// MessageId: STATUS_USER_EXISTS
//
// MessageText:
//
// The specified account already exists.
//
#define STATUS_USER_EXISTS               ((NTSTATUS)0xC0000063L)

//
// MessageId: STATUS_NO_SUCH_USER
//
// MessageText:
//
// The specified account does not exist.
//
#define STATUS_NO_SUCH_USER              ((NTSTATUS)0xC0000064L)     // ntsubauth

//
// MessageId: STATUS_GROUP_EXISTS
//
// MessageText:
//
// The specified group already exists.
//
#define STATUS_GROUP_EXISTS              ((NTSTATUS)0xC0000065L)

//
// MessageId: STATUS_NO_SUCH_GROUP
//
// MessageText:
//
// The specified group does not exist.
//
#define STATUS_NO_SUCH_GROUP             ((NTSTATUS)0xC0000066L)

//
// MessageId: STATUS_MEMBER_IN_GROUP
//
// MessageText:
//
// The specified user account is already in the specified group account. Also used to indicate a group cannot be deleted because it contains a member.
//
#define STATUS_MEMBER_IN_GROUP           ((NTSTATUS)0xC0000067L)

//
// MessageId: STATUS_MEMBER_NOT_IN_GROUP
//
// MessageText:
//
// The specified user account is not a member of the specified group account.
//
#define STATUS_MEMBER_NOT_IN_GROUP       ((NTSTATUS)0xC0000068L)

//
// MessageId: STATUS_LAST_ADMIN
//
// MessageText:
//
// Indicates the requested operation would disable, delete or could prevent logon for an administration account.
// This is not allowed to prevent creating a situation in which the system cannot be administrated.
//
#define STATUS_LAST_ADMIN                ((NTSTATUS)0xC0000069L)

//
// MessageId: STATUS_WRONG_PASSWORD
//
// MessageText:
//
// When trying to update a password, this return status indicates that the value provided as the current password is not correct.
//
#define STATUS_WRONG_PASSWORD            ((NTSTATUS)0xC000006AL)     // ntsubauth

//
// MessageId: STATUS_ILL_FORMED_PASSWORD
//
// MessageText:
//
// When trying to update a password, this return status indicates that the value provided for the new password contains values that are not allowed in passwords.
//
#define STATUS_ILL_FORMED_PASSWORD       ((NTSTATUS)0xC000006BL)

//
// MessageId: STATUS_PASSWORD_RESTRICTION
//
// MessageText:
//
// When trying to update a password, this status indicates that some password update rule has been violated. For example, the password may not meet length criteria.
//
#define STATUS_PASSWORD_RESTRICTION      ((NTSTATUS)0xC000006CL)     // ntsubauth

//
// MessageId: STATUS_LOGON_FAILURE
//
// MessageText:
//
// The attempted logon is invalid. This is either due to a bad username or authentication information.
//
#define STATUS_LOGON_FAILURE             ((NTSTATUS)0xC000006DL)     // ntsubauth

//
// MessageId: STATUS_ACCOUNT_RESTRICTION
//
// MessageText:
//
// Indicates a referenced user name and authentication information are valid, but some user account restriction has prevented successful authentication (such as time-of-day restrictions).
//
#define STATUS_ACCOUNT_RESTRICTION       ((NTSTATUS)0xC000006EL)     // ntsubauth

//
// MessageId: STATUS_INVALID_LOGON_HOURS
//
// MessageText:
//
// The user account has time restrictions and may not be logged onto at this time.
//
#define STATUS_INVALID_LOGON_HOURS       ((NTSTATUS)0xC000006FL)     // ntsubauth

//
// MessageId: STATUS_INVALID_WORKSTATION
//
// MessageText:
//
// The user account is restricted such that it may not be used to log on from the source workstation.
//
#define STATUS_INVALID_WORKSTATION       ((NTSTATUS)0xC0000070L)     // ntsubauth

//
// MessageId: STATUS_PASSWORD_EXPIRED
//
// MessageText:
//
// The user account's password has expired.
//
#define STATUS_PASSWORD_EXPIRED          ((NTSTATUS)0xC0000071L)     // ntsubauth

//
// MessageId: STATUS_ACCOUNT_DISABLED
//
// MessageText:
//
// The referenced account is currently disabled and may not be logged on to.
//
#define STATUS_ACCOUNT_DISABLED          ((NTSTATUS)0xC0000072L)     // ntsubauth

//
// MessageId: STATUS_NONE_MAPPED
//
// MessageText:
//
// None of the information to be translated has been translated.
//
#define STATUS_NONE_MAPPED               ((NTSTATUS)0xC0000073L)

//
// MessageId: STATUS_TOO_MANY_LUIDS_REQUESTED
//
// MessageText:
//
// The number of LUIDs requested may not be allocated with a single allocation.
//
#define STATUS_TOO_MANY_LUIDS_REQUESTED  ((NTSTATUS)0xC0000074L)

//
// MessageId: STATUS_LUIDS_EXHAUSTED
//
// MessageText:
//
// Indicates there are no more LUIDs to allocate.
//
#define STATUS_LUIDS_EXHAUSTED           ((NTSTATUS)0xC0000075L)

//
// MessageId: STATUS_INVALID_SUB_AUTHORITY
//
// MessageText:
//
// Indicates the sub-authority value is invalid for the particular use.
//
#define STATUS_INVALID_SUB_AUTHORITY     ((NTSTATUS)0xC0000076L)

//
// MessageId: STATUS_INVALID_ACL
//
// MessageText:
//
// Indicates the ACL structure is not valid.
//
#define STATUS_INVALID_ACL               ((NTSTATUS)0xC0000077L)

//
// MessageId: STATUS_INVALID_SID
//
// MessageText:
//
// Indicates the SID structure is not valid.
//
#define STATUS_INVALID_SID               ((NTSTATUS)0xC0000078L)

//
// MessageId: STATUS_INVALID_SECURITY_DESCR
//
// MessageText:
//
// Indicates the SECURITY_DESCRIPTOR structure is not valid.
//
#define STATUS_INVALID_SECURITY_DESCR    ((NTSTATUS)0xC0000079L)

//
// MessageId: STATUS_PROCEDURE_NOT_FOUND
//
// MessageText:
//
// Indicates the specified procedure address cannot be found in the DLL.
//
#define STATUS_PROCEDURE_NOT_FOUND       ((NTSTATUS)0xC000007AL)

//
// MessageId: STATUS_INVALID_IMAGE_FORMAT
//
// MessageText:
//
// {Bad Image}
// %hs is either not designed to run on Windows or it contains an error. Try installing the program again using the original installation media or contact your system administrator or the software vendor for support. Error status 0x%08lx.
//
#define STATUS_INVALID_IMAGE_FORMAT      ((NTSTATUS)0xC000007BL)

//
// MessageId: STATUS_NO_TOKEN
//
// MessageText:
//
// An attempt was made to reference a token that doesn't exist.
// This is typically done by referencing the token associated with a thread when the thread is not impersonating a client.
//
#define STATUS_NO_TOKEN                  ((NTSTATUS)0xC000007CL)

//
// MessageId: STATUS_BAD_INHERITANCE_ACL
//
// MessageText:
//
// Indicates that an attempt to build either an inherited ACL or ACE was not successful.
// This can be caused by a number of things. One of the more probable causes is the replacement of a CreatorId with an SID that didn't fit into the ACE or ACL.
//
#define STATUS_BAD_INHERITANCE_ACL       ((NTSTATUS)0xC000007DL)

//
// MessageId: STATUS_RANGE_NOT_LOCKED
//
// MessageText:
//
// The range specified in NtUnlockFile was not locked.
//
#define STATUS_RANGE_NOT_LOCKED          ((NTSTATUS)0xC000007EL)

//
// MessageId: STATUS_DISK_FULL
//
// MessageText:
//
// An operation failed because the disk was full.
// If this is a thinly provisioned volume the physical storage backing this volume has been exhausted.
//
#define STATUS_DISK_FULL                 ((NTSTATUS)0xC000007FL)

//
// MessageId: STATUS_SERVER_DISABLED
//
// MessageText:
//
// The GUID allocation server is [already] disabled at the moment.
//
#define STATUS_SERVER_DISABLED           ((NTSTATUS)0xC0000080L)

//
// MessageId: STATUS_SERVER_NOT_DISABLED
//
// MessageText:
//
// The GUID allocation server is [already] enabled at the moment.
//
#define STATUS_SERVER_NOT_DISABLED       ((NTSTATUS)0xC0000081L)

//
// MessageId: STATUS_TOO_MANY_GUIDS_REQUESTED
//
// MessageText:
//
// Too many GUIDs were requested from the allocation server at once.
//
#define STATUS_TOO_MANY_GUIDS_REQUESTED  ((NTSTATUS)0xC0000082L)

//
// MessageId: STATUS_GUIDS_EXHAUSTED
//
// MessageText:
//
// The GUIDs could not be allocated because the Authority Agent was exhausted.
//
#define STATUS_GUIDS_EXHAUSTED           ((NTSTATUS)0xC0000083L)

//
// MessageId: STATUS_INVALID_ID_AUTHORITY
//
// MessageText:
//
// The value provided was an invalid value for an identifier authority.
//
#define STATUS_INVALID_ID_AUTHORITY      ((NTSTATUS)0xC0000084L)

//
// MessageId: STATUS_AGENTS_EXHAUSTED
//
// MessageText:
//
// There are no more authority agent values available for the given identifier authority value.
//
#define STATUS_AGENTS_EXHAUSTED          ((NTSTATUS)0xC0000085L)

//
// MessageId: STATUS_INVALID_VOLUME_LABEL
//
// MessageText:
//
// An invalid volume label has been specified.
//
#define STATUS_INVALID_VOLUME_LABEL      ((NTSTATUS)0xC0000086L)

//
// MessageId: STATUS_SECTION_NOT_EXTENDED
//
// MessageText:
//
// A mapped section could not be extended.
//
#define STATUS_SECTION_NOT_EXTENDED      ((NTSTATUS)0xC0000087L)

//
// MessageId: STATUS_NOT_MAPPED_DATA
//
// MessageText:
//
// Specified section to flush does not map a data file.
//
#define STATUS_NOT_MAPPED_DATA           ((NTSTATUS)0xC0000088L)

//
// MessageId: STATUS_RESOURCE_DATA_NOT_FOUND
//
// MessageText:
//
// Indicates the specified image file did not contain a resource section.
//
#define STATUS_RESOURCE_DATA_NOT_FOUND   ((NTSTATUS)0xC0000089L)

//
// MessageId: STATUS_RESOURCE_TYPE_NOT_FOUND
//
// MessageText:
//
// Indicates the specified resource type cannot be found in the image file.
//
#define STATUS_RESOURCE_TYPE_NOT_FOUND   ((NTSTATUS)0xC000008AL)

//
// MessageId: STATUS_RESOURCE_NAME_NOT_FOUND
//
// MessageText:
//
// Indicates the specified resource name cannot be found in the image file.
//
#define STATUS_RESOURCE_NAME_NOT_FOUND   ((NTSTATUS)0xC000008BL)

//
// MessageId: STATUS_ARRAY_BOUNDS_EXCEEDED
//
// MessageText:
//
// {EXCEPTION}
// Array bounds exceeded.
//
#define STATUS_ARRAY_BOUNDS_EXCEEDED     ((NTSTATUS)0xC000008CL)    // winnt

//
// MessageId: STATUS_FLOAT_DENORMAL_OPERAND
//
// MessageText:
//
// {EXCEPTION}
// Floating-point denormal operand.
//
#define STATUS_FLOAT_DENORMAL_OPERAND    ((NTSTATUS)0xC000008DL)    // winnt

//
// MessageId: STATUS_FLOAT_DIVIDE_BY_ZERO
//
// MessageText:
//
// {EXCEPTION}
// Floating-point division by zero.
//
#define STATUS_FLOAT_DIVIDE_BY_ZERO      ((NTSTATUS)0xC000008EL)    // winnt

//
// MessageId: STATUS_FLOAT_INEXACT_RESULT
//
// MessageText:
//
// {EXCEPTION}
// Floating-point inexact result.
//
#define STATUS_FLOAT_INEXACT_RESULT      ((NTSTATUS)0xC000008FL)    // winnt

//
// MessageId: STATUS_FLOAT_INVALID_OPERATION
//
// MessageText:
//
// {EXCEPTION}
// Floating-point invalid operation.
//
#define STATUS_FLOAT_INVALID_OPERATION   ((NTSTATUS)0xC0000090L)    // winnt

//
// MessageId: STATUS_FLOAT_OVERFLOW
//
// MessageText:
//
// {EXCEPTION}
// Floating-point overflow.
//
#define STATUS_FLOAT_OVERFLOW            ((NTSTATUS)0xC0000091L)    // winnt

//
// MessageId: STATUS_FLOAT_STACK_CHECK
//
// MessageText:
//
// {EXCEPTION}
// Floating-point stack check.
//
#define STATUS_FLOAT_STACK_CHECK         ((NTSTATUS)0xC0000092L)    // winnt

//
// MessageId: STATUS_FLOAT_UNDERFLOW
//
// MessageText:
//
// {EXCEPTION}
// Floating-point underflow.
//
#define STATUS_FLOAT_UNDERFLOW           ((NTSTATUS)0xC0000093L)    // winnt

//
// MessageId: STATUS_INTEGER_DIVIDE_BY_ZERO
//
// MessageText:
//
// {EXCEPTION}
// Integer division by zero.
//
#define STATUS_INTEGER_DIVIDE_BY_ZERO    ((NTSTATUS)0xC0000094L)    // winnt

//
// MessageId: STATUS_INTEGER_OVERFLOW
//
// MessageText:
//
// {EXCEPTION}
// Integer overflow.
//
#define STATUS_INTEGER_OVERFLOW          ((NTSTATUS)0xC0000095L)    // winnt

//
// MessageId: STATUS_PRIVILEGED_INSTRUCTION
//
// MessageText:
//
// {EXCEPTION}
// Privileged instruction.
//
#define STATUS_PRIVILEGED_INSTRUCTION    ((NTSTATUS)0xC0000096L)    // winnt

//
// MessageId: STATUS_TOO_MANY_PAGING_FILES
//
// MessageText:
//
// An attempt was made to install more paging files than the system supports.
//
#define STATUS_TOO_MANY_PAGING_FILES     ((NTSTATUS)0xC0000097L)

//
// MessageId: STATUS_FILE_INVALID
//
// MessageText:
//
// The volume for a file has been externally altered such that the opened file is no longer valid.
//
#define STATUS_FILE_INVALID              ((NTSTATUS)0xC0000098L)

//
// MessageId: STATUS_ALLOTTED_SPACE_EXCEEDED
//
// MessageText:
//
// When a block of memory is allotted for future updates, such as the memory allocated to hold discretionary access control and primary group information, successive updates may exceed the amount of memory originally allotted.
// Since quota may already have been charged to several processes which have handles to the object, it is not reasonable to alter the size of the allocated memory.
// Instead, a request that requires more memory than has been allotted must fail and the STATUS_ALLOTED_SPACE_EXCEEDED error returned.
//
#define STATUS_ALLOTTED_SPACE_EXCEEDED   ((NTSTATUS)0xC0000099L)

//
// MessageId: STATUS_INSUFFICIENT_RESOURCES
//
// MessageText:
//
// Insufficient system resources exist to complete the API.
//
#define STATUS_INSUFFICIENT_RESOURCES    ((NTSTATUS)0xC000009AL)     // ntsubauth

//
// MessageId: STATUS_DFS_EXIT_PATH_FOUND
//
// MessageText:
//
// An attempt has been made to open a DFS exit path control file.
//
#define STATUS_DFS_EXIT_PATH_FOUND       ((NTSTATUS)0xC000009BL)

//
// MessageId: STATUS_DEVICE_DATA_ERROR
//
// MessageText:
//
//  STATUS_DEVICE_DATA_ERROR
//
#define STATUS_DEVICE_DATA_ERROR         ((NTSTATUS)0xC000009CL)

//
// MessageId: STATUS_DEVICE_NOT_CONNECTED
//
// MessageText:
//
//  STATUS_DEVICE_NOT_CONNECTED
//
#define STATUS_DEVICE_NOT_CONNECTED      ((NTSTATUS)0xC000009DL)

//
// MessageId: STATUS_DEVICE_POWER_FAILURE
//
// MessageText:
//
//  STATUS_DEVICE_POWER_FAILURE
//
#define STATUS_DEVICE_POWER_FAILURE      ((NTSTATUS)0xC000009EL)

//
// MessageId: STATUS_FREE_VM_NOT_AT_BASE
//
// MessageText:
//
// Virtual memory cannot be freed as base address is not the base of the region and a region size of zero was specified.
//
#define STATUS_FREE_VM_NOT_AT_BASE       ((NTSTATUS)0xC000009FL)

//
// MessageId: STATUS_MEMORY_NOT_ALLOCATED
//
// MessageText:
//
// An attempt was made to free virtual memory which is not allocated.
//
#define STATUS_MEMORY_NOT_ALLOCATED      ((NTSTATUS)0xC00000A0L)

//
// MessageId: STATUS_WORKING_SET_QUOTA
//
// MessageText:
//
// The working set is not big enough to allow the requested pages to be locked.
//
#define STATUS_WORKING_SET_QUOTA         ((NTSTATUS)0xC00000A1L)

//
// MessageId: STATUS_MEDIA_WRITE_PROTECTED
//
// MessageText:
//
// {Write Protect Error}
// The disk cannot be written to because it is write protected. Please remove the write protection from the volume %hs in drive %hs.
//
#define STATUS_MEDIA_WRITE_PROTECTED     ((NTSTATUS)0xC00000A2L)

//
// MessageId: STATUS_DEVICE_NOT_READY
//
// MessageText:
//
// {Drive Not Ready}
// The drive is not ready for use; its door may be open. Please check drive %hs and make sure that a disk is inserted and that the drive door is closed.
//
#define STATUS_DEVICE_NOT_READY          ((NTSTATUS)0xC00000A3L)

//
// MessageId: STATUS_INVALID_GROUP_ATTRIBUTES
//
// MessageText:
//
// The specified attributes are invalid, or incompatible with the attributes for the group as a whole.
//
#define STATUS_INVALID_GROUP_ATTRIBUTES  ((NTSTATUS)0xC00000A4L)

//
// MessageId: STATUS_BAD_IMPERSONATION_LEVEL
//
// MessageText:
//
// A specified impersonation level is invalid.
// Also used to indicate a required impersonation level was not provided.
//
#define STATUS_BAD_IMPERSONATION_LEVEL   ((NTSTATUS)0xC00000A5L)

//
// MessageId: STATUS_CANT_OPEN_ANONYMOUS
//
// MessageText:
//
// An attempt was made to open an Anonymous level token.
// Anonymous tokens may not be opened.
//
#define STATUS_CANT_OPEN_ANONYMOUS       ((NTSTATUS)0xC00000A6L)

//
// MessageId: STATUS_BAD_VALIDATION_CLASS
//
// MessageText:
//
// The validation information class requested was invalid.
//
#define STATUS_BAD_VALIDATION_CLASS      ((NTSTATUS)0xC00000A7L)

//
// MessageId: STATUS_BAD_TOKEN_TYPE
//
// MessageText:
//
// The type of a token object is inappropriate for its attempted use.
//
#define STATUS_BAD_TOKEN_TYPE            ((NTSTATUS)0xC00000A8L)

//
// MessageId: STATUS_BAD_MASTER_BOOT_RECORD
//
// MessageText:
//
// The type of a token object is inappropriate for its attempted use.
//
#define STATUS_BAD_MASTER_BOOT_RECORD    ((NTSTATUS)0xC00000A9L)

//
// MessageId: STATUS_INSTRUCTION_MISALIGNMENT
//
// MessageText:
//
// An attempt was made to execute an instruction at an unaligned address and the host system does not support unaligned instruction references.
//
#define STATUS_INSTRUCTION_MISALIGNMENT  ((NTSTATUS)0xC00000AAL)

//
// MessageId: STATUS_INSTANCE_NOT_AVAILABLE
//
// MessageText:
//
// The maximum named pipe instance count has been reached.
//
#define STATUS_INSTANCE_NOT_AVAILABLE    ((NTSTATUS)0xC00000ABL)

//
// MessageId: STATUS_PIPE_NOT_AVAILABLE
//
// MessageText:
//
// An instance of a named pipe cannot be found in the listening state.
//
#define STATUS_PIPE_NOT_AVAILABLE        ((NTSTATUS)0xC00000ACL)

//
// MessageId: STATUS_INVALID_PIPE_STATE
//
// MessageText:
//
// The named pipe is not in the connected or closing state.
//
#define STATUS_INVALID_PIPE_STATE        ((NTSTATUS)0xC00000ADL)

//
// MessageId: STATUS_PIPE_BUSY
//
// MessageText:
//
// The specified pipe is set to complete operations and there are current I/O operations queued so it cannot be changed to queue operations.
//
#define STATUS_PIPE_BUSY                 ((NTSTATUS)0xC00000AEL)

//
// MessageId: STATUS_ILLEGAL_FUNCTION
//
// MessageText:
//
// The specified handle is not open to the server end of the named pipe.
//
#define STATUS_ILLEGAL_FUNCTION          ((NTSTATUS)0xC00000AFL)

//
// MessageId: STATUS_PIPE_DISCONNECTED
//
// MessageText:
//
// The specified named pipe is in the disconnected state.
//
#define STATUS_PIPE_DISCONNECTED         ((NTSTATUS)0xC00000B0L)

//
// MessageId: STATUS_PIPE_CLOSING
//
// MessageText:
//
// The specified named pipe is in the closing state.
//
#define STATUS_PIPE_CLOSING              ((NTSTATUS)0xC00000B1L)

//
// MessageId: STATUS_PIPE_CONNECTED
//
// MessageText:
//
// The specified named pipe is in the connected state.
//
#define STATUS_PIPE_CONNECTED            ((NTSTATUS)0xC00000B2L)

//
// MessageId: STATUS_PIPE_LISTENING
//
// MessageText:
//
// The specified named pipe is in the listening state.
//
#define STATUS_PIPE_LISTENING            ((NTSTATUS)0xC00000B3L)

//
// MessageId: STATUS_INVALID_READ_MODE
//
// MessageText:
//
// The specified named pipe is not in message mode.
//
#define STATUS_INVALID_READ_MODE         ((NTSTATUS)0xC00000B4L)

//
// MessageId: STATUS_IO_TIMEOUT
//
// MessageText:
//
// {Device Timeout}
// The specified I/O operation on %hs was not completed before the time-out period expired.
//
#define STATUS_IO_TIMEOUT                ((NTSTATUS)0xC00000B5L)

//
// MessageId: STATUS_FILE_FORCED_CLOSED
//
// MessageText:
//
// The specified file has been closed by another process.
//
#define STATUS_FILE_FORCED_CLOSED        ((NTSTATUS)0xC00000B6L)

//
// MessageId: STATUS_PROFILING_NOT_STARTED
//
// MessageText:
//
// Profiling not started.
//
#define STATUS_PROFILING_NOT_STARTED     ((NTSTATUS)0xC00000B7L)

//
// MessageId: STATUS_PROFILING_NOT_STOPPED
//
// MessageText:
//
// Profiling not stopped.
//
#define STATUS_PROFILING_NOT_STOPPED     ((NTSTATUS)0xC00000B8L)

//
// MessageId: STATUS_COULD_NOT_INTERPRET
//
// MessageText:
//
// The passed ACL did not contain the minimum required information.
//
#define STATUS_COULD_NOT_INTERPRET       ((NTSTATUS)0xC00000B9L)

//
// MessageId: STATUS_FILE_IS_A_DIRECTORY
//
// MessageText:
//
// The file that was specified as a target is a directory and the caller specified that it could be anything but a directory.
//
#define STATUS_FILE_IS_A_DIRECTORY       ((NTSTATUS)0xC00000BAL)

//
// Network specific errors.
//
//
//
// MessageId: STATUS_NOT_SUPPORTED
//
// MessageText:
//
// The request is not supported.
//
#define STATUS_NOT_SUPPORTED             ((NTSTATUS)0xC00000BBL)

//
// MessageId: STATUS_REMOTE_NOT_LISTENING
//
// MessageText:
//
// This remote computer is not listening.
//
#define STATUS_REMOTE_NOT_LISTENING      ((NTSTATUS)0xC00000BCL)

//
// MessageId: STATUS_DUPLICATE_NAME
//
// MessageText:
//
// A duplicate name exists on the network.
//
#define STATUS_DUPLICATE_NAME            ((NTSTATUS)0xC00000BDL)

//
// MessageId: STATUS_BAD_NETWORK_PATH
//
// MessageText:
//
// The network path cannot be located.
//
#define STATUS_BAD_NETWORK_PATH          ((NTSTATUS)0xC00000BEL)

//
// MessageId: STATUS_NETWORK_BUSY
//
// MessageText:
//
// The network is busy.
//
#define STATUS_NETWORK_BUSY              ((NTSTATUS)0xC00000BFL)

//
// MessageId: STATUS_DEVICE_DOES_NOT_EXIST
//
// MessageText:
//
// This device does not exist.
//
#define STATUS_DEVICE_DOES_NOT_EXIST     ((NTSTATUS)0xC00000C0L)

//
// MessageId: STATUS_TOO_MANY_COMMANDS
//
// MessageText:
//
// The network BIOS command limit has been reached.
//
#define STATUS_TOO_MANY_COMMANDS         ((NTSTATUS)0xC00000C1L)

//
// MessageId: STATUS_ADAPTER_HARDWARE_ERROR
//
// MessageText:
//
// An I/O adapter hardware error has occurred.
//
#define STATUS_ADAPTER_HARDWARE_ERROR    ((NTSTATUS)0xC00000C2L)

//
// MessageId: STATUS_INVALID_NETWORK_RESPONSE
//
// MessageText:
//
// The network responded incorrectly.
//
#define STATUS_INVALID_NETWORK_RESPONSE  ((NTSTATUS)0xC00000C3L)

//
// MessageId: STATUS_UNEXPECTED_NETWORK_ERROR
//
// MessageText:
//
// An unexpected network error occurred.
//
#define STATUS_UNEXPECTED_NETWORK_ERROR  ((NTSTATUS)0xC00000C4L)

//
// MessageId: STATUS_BAD_REMOTE_ADAPTER
//
// MessageText:
//
// The remote adapter is not compatible.
//
#define STATUS_BAD_REMOTE_ADAPTER        ((NTSTATUS)0xC00000C5L)

//
// MessageId: STATUS_PRINT_QUEUE_FULL
//
// MessageText:
//
// The printer queue is full.
//
#define STATUS_PRINT_QUEUE_FULL          ((NTSTATUS)0xC00000C6L)

//
// MessageId: STATUS_NO_SPOOL_SPACE
//
// MessageText:
//
// Space to store the file waiting to be printed is not available on the server.
//
#define STATUS_NO_SPOOL_SPACE            ((NTSTATUS)0xC00000C7L)

//
// MessageId: STATUS_PRINT_CANCELLED
//
// MessageText:
//
// The requested print file has been canceled.
//
#define STATUS_PRINT_CANCELLED           ((NTSTATUS)0xC00000C8L)

//
// MessageId: STATUS_NETWORK_NAME_DELETED
//
// MessageText:
//
// The network name was deleted.
//
#define STATUS_NETWORK_NAME_DELETED      ((NTSTATUS)0xC00000C9L)

//
// MessageId: STATUS_NETWORK_ACCESS_DENIED
//
// MessageText:
//
// Network access is denied.
//
#define STATUS_NETWORK_ACCESS_DENIED     ((NTSTATUS)0xC00000CAL)

//
// MessageId: STATUS_BAD_DEVICE_TYPE
//
// MessageText:
//
// {Incorrect Network Resource Type}
// The specified device type (LPT, for example) conflicts with the actual device type on the remote resource.
//
#define STATUS_BAD_DEVICE_TYPE           ((NTSTATUS)0xC00000CBL)

//
// MessageId: STATUS_BAD_NETWORK_NAME
//
// MessageText:
//
// {Network Name Not Found}
// The specified share name cannot be found on the remote server.
//
#define STATUS_BAD_NETWORK_NAME          ((NTSTATUS)0xC00000CCL)

//
// MessageId: STATUS_TOO_MANY_NAMES
//
// MessageText:
//
// The name limit for the local computer network adapter card was exceeded.
//
#define STATUS_TOO_MANY_NAMES            ((NTSTATUS)0xC00000CDL)

//
// MessageId: STATUS_TOO_MANY_SESSIONS
//
// MessageText:
//
// The network BIOS session limit was exceeded.
//
#define STATUS_TOO_MANY_SESSIONS         ((NTSTATUS)0xC00000CEL)

//
// MessageId: STATUS_SHARING_PAUSED
//
// MessageText:
//
// File sharing has been temporarily paused.
//
#define STATUS_SHARING_PAUSED            ((NTSTATUS)0xC00000CFL)

//
// MessageId: STATUS_REQUEST_NOT_ACCEPTED
//
// MessageText:
//
// No more connections can be made to this remote computer at this time because there are already as many connections as the computer can accept.
//
#define STATUS_REQUEST_NOT_ACCEPTED      ((NTSTATUS)0xC00000D0L)

//
// MessageId: STATUS_REDIRECTOR_PAUSED
//
// MessageText:
//
// Print or disk redirection is temporarily paused.
//
#define STATUS_REDIRECTOR_PAUSED         ((NTSTATUS)0xC00000D1L)

//
// MessageId: STATUS_NET_WRITE_FAULT
//
// MessageText:
//
// A network data fault occurred.
//
#define STATUS_NET_WRITE_FAULT           ((NTSTATUS)0xC00000D2L)

//
// MessageId: STATUS_PROFILING_AT_LIMIT
//
// MessageText:
//
// The number of active profiling objects is at the maximum and no more may be started.
//
#define STATUS_PROFILING_AT_LIMIT        ((NTSTATUS)0xC00000D3L)

//
// MessageId: STATUS_NOT_SAME_DEVICE
//
// MessageText:
//
// {Incorrect Volume}
// The target file of a rename request is located on a different device than the source of the rename request.
//
#define STATUS_NOT_SAME_DEVICE           ((NTSTATUS)0xC00000D4L)

//
// MessageId: STATUS_FILE_RENAMED
//
// MessageText:
//
// The file specified has been renamed and thus cannot be modified.
//
#define STATUS_FILE_RENAMED              ((NTSTATUS)0xC00000D5L)

//
// MessageId: STATUS_VIRTUAL_CIRCUIT_CLOSED
//
// MessageText:
//
// {Network Request Timeout}
// The session with a remote server has been disconnected because the time-out interval for a request has expired.
//
#define STATUS_VIRTUAL_CIRCUIT_CLOSED    ((NTSTATUS)0xC00000D6L)

//
// MessageId: STATUS_NO_SECURITY_ON_OBJECT
//
// MessageText:
//
// Indicates an attempt was made to operate on the security of an object that does not have security associated with it.
//
#define STATUS_NO_SECURITY_ON_OBJECT     ((NTSTATUS)0xC00000D7L)

//
// MessageId: STATUS_CANT_WAIT
//
// MessageText:
//
// Used to indicate that an operation cannot continue without blocking for I/O.
//
#define STATUS_CANT_WAIT                 ((NTSTATUS)0xC00000D8L)

//
// MessageId: STATUS_PIPE_EMPTY
//
// MessageText:
//
// Used to indicate that a read operation was done on an empty pipe.
//
#define STATUS_PIPE_EMPTY                ((NTSTATUS)0xC00000D9L)

//
// MessageId: STATUS_CANT_ACCESS_DOMAIN_INFO
//
// MessageText:
//
// Configuration information could not be read from the domain controller, either because the machine is unavailable, or access has been denied.
//
#define STATUS_CANT_ACCESS_DOMAIN_INFO   ((NTSTATUS)0xC00000DAL)

//
// MessageId: STATUS_CANT_TERMINATE_SELF
//
// MessageText:
//
// Indicates that a thread attempted to terminate itself by default (called NtTerminateThread with NULL) and it was the last thread in the current process.
//
#define STATUS_CANT_TERMINATE_SELF       ((NTSTATUS)0xC00000DBL)

//
// MessageId: STATUS_INVALID_SERVER_STATE
//
// MessageText:
//
// Indicates the Sam Server was in the wrong state to perform the desired operation.
//
#define STATUS_INVALID_SERVER_STATE      ((NTSTATUS)0xC00000DCL)

//
// MessageId: STATUS_INVALID_DOMAIN_STATE
//
// MessageText:
//
// Indicates the Domain was in the wrong state to perform the desired operation.
//
#define STATUS_INVALID_DOMAIN_STATE      ((NTSTATUS)0xC00000DDL)

//
// MessageId: STATUS_INVALID_DOMAIN_ROLE
//
// MessageText:
//
// This operation is only allowed for the Primary Domain Controller of the domain.
//
#define STATUS_INVALID_DOMAIN_ROLE       ((NTSTATUS)0xC00000DEL)

//
// MessageId: STATUS_NO_SUCH_DOMAIN
//
// MessageText:
//
// The specified Domain did not exist.
//
#define STATUS_NO_SUCH_DOMAIN            ((NTSTATUS)0xC00000DFL)

//
// MessageId: STATUS_DOMAIN_EXISTS
//
// MessageText:
//
// The specified Domain already exists.
//
#define STATUS_DOMAIN_EXISTS             ((NTSTATUS)0xC00000E0L)

//
// MessageId: STATUS_DOMAIN_LIMIT_EXCEEDED
//
// MessageText:
//
// An attempt was made to exceed the limit on the number of domains per server for this release.
//
#define STATUS_DOMAIN_LIMIT_EXCEEDED     ((NTSTATUS)0xC00000E1L)

//
// MessageId: STATUS_OPLOCK_NOT_GRANTED
//
// MessageText:
//
// Error status returned when oplock request is denied.
//
#define STATUS_OPLOCK_NOT_GRANTED        ((NTSTATUS)0xC00000E2L)

//
// MessageId: STATUS_INVALID_OPLOCK_PROTOCOL
//
// MessageText:
//
// Error status returned when an invalid oplock acknowledgment is received by a file system.
//
#define STATUS_INVALID_OPLOCK_PROTOCOL   ((NTSTATUS)0xC00000E3L)

//
// MessageId: STATUS_INTERNAL_DB_CORRUPTION
//
// MessageText:
//
// This error indicates that the requested operation cannot be completed due to a catastrophic media failure or on-disk data structure corruption.
//
#define STATUS_INTERNAL_DB_CORRUPTION    ((NTSTATUS)0xC00000E4L)

//
// MessageId: STATUS_INTERNAL_ERROR
//
// MessageText:
//
// An internal error occurred.
//
#define STATUS_INTERNAL_ERROR            ((NTSTATUS)0xC00000E5L)

//
// MessageId: STATUS_GENERIC_NOT_MAPPED
//
// MessageText:
//
// Indicates generic access types were contained in an access mask which should already be mapped to non-generic access types.
//
#define STATUS_GENERIC_NOT_MAPPED        ((NTSTATUS)0xC00000E6L)

//
// MessageId: STATUS_BAD_DESCRIPTOR_FORMAT
//
// MessageText:
//
// Indicates a security descriptor is not in the necessary format (absolute or self-relative).
//
#define STATUS_BAD_DESCRIPTOR_FORMAT     ((NTSTATUS)0xC00000E7L)

//
// Status codes raised by the Cache Manager which must be considered as
// "expected" by its callers.
//
//
// MessageId: STATUS_INVALID_USER_BUFFER
//
// MessageText:
//
// An access to a user buffer failed at an "expected" point in time. This code is defined since the caller does not want to accept STATUS_ACCESS_VIOLATION in its filter.
//
#define STATUS_INVALID_USER_BUFFER       ((NTSTATUS)0xC00000E8L)

//
// MessageId: STATUS_UNEXPECTED_IO_ERROR
//
// MessageText:
//
// If an I/O error is returned which is not defined in the standard FsRtl filter, it is converted to the following error which is guaranteed to be in the filter. In this case information is lost, however, the filter correctly handles the exception.
//
#define STATUS_UNEXPECTED_IO_ERROR       ((NTSTATUS)0xC00000E9L)

//
// MessageId: STATUS_UNEXPECTED_MM_CREATE_ERR
//
// MessageText:
//
// If an MM error is returned which is not defined in the standard FsRtl filter, it is converted to one of the following errors which is guaranteed to be in the filter. In this case information is lost, however, the filter correctly handles the exception.
//
#define STATUS_UNEXPECTED_MM_CREATE_ERR  ((NTSTATUS)0xC00000EAL)

//
// MessageId: STATUS_UNEXPECTED_MM_MAP_ERROR
//
// MessageText:
//
// If an MM error is returned which is not defined in the standard FsRtl filter, it is converted to one of the following errors which is guaranteed to be in the filter. In this case information is lost, however, the filter correctly handles the exception.
//
#define STATUS_UNEXPECTED_MM_MAP_ERROR   ((NTSTATUS)0xC00000EBL)

//
// MessageId: STATUS_UNEXPECTED_MM_EXTEND_ERR
//
// MessageText:
//
// If an MM error is returned which is not defined in the standard FsRtl filter, it is converted to one of the following errors which is guaranteed to be in the filter. In this case information is lost, however, the filter correctly handles the exception.
//
#define STATUS_UNEXPECTED_MM_EXTEND_ERR  ((NTSTATUS)0xC00000ECL)

//
// MessageId: STATUS_NOT_LOGON_PROCESS
//
// MessageText:
//
// The requested action is restricted for use by logon processes only. The calling process has not registered as a logon process.
//
#define STATUS_NOT_LOGON_PROCESS         ((NTSTATUS)0xC00000EDL)

//
// MessageId: STATUS_LOGON_SESSION_EXISTS
//
// MessageText:
//
// An attempt has been made to start a new session manager or LSA logon session with an ID that is already in use.
//
#define STATUS_LOGON_SESSION_EXISTS      ((NTSTATUS)0xC00000EEL)

//
// MessageId: STATUS_INVALID_PARAMETER_1
//
// MessageText:
//
// An invalid parameter was passed to a service or function as the first argument.
//
#define STATUS_INVALID_PARAMETER_1       ((NTSTATUS)0xC00000EFL)

//
// MessageId: STATUS_INVALID_PARAMETER_2
//
// MessageText:
//
// An invalid parameter was passed to a service or function as the second argument.
//
#define STATUS_INVALID_PARAMETER_2       ((NTSTATUS)0xC00000F0L)

//
// MessageId: STATUS_INVALID_PARAMETER_3
//
// MessageText:
//
// An invalid parameter was passed to a service or function as the third argument.
//
#define STATUS_INVALID_PARAMETER_3       ((NTSTATUS)0xC00000F1L)

//
// MessageId: STATUS_INVALID_PARAMETER_4
//
// MessageText:
//
// An invalid parameter was passed to a service or function as the fourth argument.
//
#define STATUS_INVALID_PARAMETER_4       ((NTSTATUS)0xC00000F2L)

//
// MessageId: STATUS_INVALID_PARAMETER_5
//
// MessageText:
//
// An invalid parameter was passed to a service or function as the fifth argument.
//
#define STATUS_INVALID_PARAMETER_5       ((NTSTATUS)0xC00000F3L)

//
// MessageId: STATUS_INVALID_PARAMETER_6
//
// MessageText:
//
// An invalid parameter was passed to a service or function as the sixth argument.
//
#define STATUS_INVALID_PARAMETER_6       ((NTSTATUS)0xC00000F4L)

//
// MessageId: STATUS_INVALID_PARAMETER_7
//
// MessageText:
//
// An invalid parameter was passed to a service or function as the seventh argument.
//
#define STATUS_INVALID_PARAMETER_7       ((NTSTATUS)0xC00000F5L)

//
// MessageId: STATUS_INVALID_PARAMETER_8
//
// MessageText:
//
// An invalid parameter was passed to a service or function as the eighth argument.
//
#define STATUS_INVALID_PARAMETER_8       ((NTSTATUS)0xC00000F6L)

//
// MessageId: STATUS_INVALID_PARAMETER_9
//
// MessageText:
//
// An invalid parameter was passed to a service or function as the ninth argument.
//
#define STATUS_INVALID_PARAMETER_9       ((NTSTATUS)0xC00000F7L)

//
// MessageId: STATUS_INVALID_PARAMETER_10
//
// MessageText:
//
// An invalid parameter was passed to a service or function as the tenth argument.
//
#define STATUS_INVALID_PARAMETER_10      ((NTSTATUS)0xC00000F8L)

//
// MessageId: STATUS_INVALID_PARAMETER_11
//
// MessageText:
//
// An invalid parameter was passed to a service or function as the eleventh argument.
//
#define STATUS_INVALID_PARAMETER_11      ((NTSTATUS)0xC00000F9L)

//
// MessageId: STATUS_INVALID_PARAMETER_12
//
// MessageText:
//
// An invalid parameter was passed to a service or function as the twelfth argument.
//
#define STATUS_INVALID_PARAMETER_12      ((NTSTATUS)0xC00000FAL)

//
// MessageId: STATUS_REDIRECTOR_NOT_STARTED
//
// MessageText:
//
// An attempt was made to access a network file, but the network software was not yet started.
//
#define STATUS_REDIRECTOR_NOT_STARTED    ((NTSTATUS)0xC00000FBL)

//
// MessageId: STATUS_REDIRECTOR_STARTED
//
// MessageText:
//
// An attempt was made to start the redirector, but the redirector has already been started.
//
#define STATUS_REDIRECTOR_STARTED        ((NTSTATUS)0xC00000FCL)

//
// MessageId: STATUS_STACK_OVERFLOW
//
// MessageText:
//
// A new guard page for the stack cannot be created.
//
#define STATUS_STACK_OVERFLOW            ((NTSTATUS)0xC00000FDL)    // winnt

//
// MessageId: STATUS_NO_SUCH_PACKAGE
//
// MessageText:
//
// A specified authentication package is unknown.
//
#define STATUS_NO_SUCH_PACKAGE           ((NTSTATUS)0xC00000FEL)

//
// MessageId: STATUS_BAD_FUNCTION_TABLE
//
// MessageText:
//
// A malformed function table was encountered during an unwind operation.
//
#define STATUS_BAD_FUNCTION_TABLE        ((NTSTATUS)0xC00000FFL)

//
// MessageId: STATUS_VARIABLE_NOT_FOUND
//
// MessageText:
//
// Indicates the specified environment variable name was not found in the specified environment block.
//
#define STATUS_VARIABLE_NOT_FOUND        ((NTSTATUS)0xC0000100L)

//
// MessageId: STATUS_DIRECTORY_NOT_EMPTY
//
// MessageText:
//
// Indicates that the directory trying to be deleted is not empty.
//
#define STATUS_DIRECTORY_NOT_EMPTY       ((NTSTATUS)0xC0000101L)

//
// MessageId: STATUS_FILE_CORRUPT_ERROR
//
// MessageText:
//
// {Corrupt File}
// The file or directory %hs is corrupt and unreadable.
// Please run the Chkdsk utility.
//
#define STATUS_FILE_CORRUPT_ERROR        ((NTSTATUS)0xC0000102L)

//
// MessageId: STATUS_NOT_A_DIRECTORY
//
// MessageText:
//
// A requested opened file is not a directory.
//
#define STATUS_NOT_A_DIRECTORY           ((NTSTATUS)0xC0000103L)

//
// MessageId: STATUS_BAD_LOGON_SESSION_STATE
//
// MessageText:
//
// The logon session is not in a state that is consistent with the requested operation.
//
#define STATUS_BAD_LOGON_SESSION_STATE   ((NTSTATUS)0xC0000104L)

//
// MessageId: STATUS_LOGON_SESSION_COLLISION
//
// MessageText:
//
// An internal LSA error has occurred. An authentication package has requested the creation of a Logon Session but the ID of an already existing Logon Session has been specified.
//
#define STATUS_LOGON_SESSION_COLLISION   ((NTSTATUS)0xC0000105L)

//
// MessageId: STATUS_NAME_TOO_LONG
//
// MessageText:
//
// A specified name string is too long for its intended use.
//
#define STATUS_NAME_TOO_LONG             ((NTSTATUS)0xC0000106L)

//
// MessageId: STATUS_FILES_OPEN
//
// MessageText:
//
// The user attempted to force close the files on a redirected drive, but there were opened files on the drive, and the user did not specify a sufficient level of force.
//
#define STATUS_FILES_OPEN                ((NTSTATUS)0xC0000107L)

//
// MessageId: STATUS_CONNECTION_IN_USE
//
// MessageText:
//
// The user attempted to force close the files on a redirected drive, but there were opened directories on the drive, and the user did not specify a sufficient level of force.
//
#define STATUS_CONNECTION_IN_USE         ((NTSTATUS)0xC0000108L)

//
// MessageId: STATUS_MESSAGE_NOT_FOUND
//
// MessageText:
//
// RtlFindMessage could not locate the requested message ID in the message table resource.
//
#define STATUS_MESSAGE_NOT_FOUND         ((NTSTATUS)0xC0000109L)

//
// MessageId: STATUS_PROCESS_IS_TERMINATING
//
// MessageText:
//
// An attempt was made to access an exiting process.
//
#define STATUS_PROCESS_IS_TERMINATING    ((NTSTATUS)0xC000010AL)

//
// MessageId: STATUS_INVALID_LOGON_TYPE
//
// MessageText:
//
// Indicates an invalid value has been provided for the LogonType requested.
//
#define STATUS_INVALID_LOGON_TYPE        ((NTSTATUS)0xC000010BL)

//
// MessageId: STATUS_NO_GUID_TRANSLATION
//
// MessageText:
//
// Indicates that an attempt was made to assign protection to a file system file or directory and one of the SIDs in the security descriptor could not be translated into a GUID that could be stored by the file system.
// This causes the protection attempt to fail, which may cause a file creation attempt to fail.
//
#define STATUS_NO_GUID_TRANSLATION       ((NTSTATUS)0xC000010CL)

//
// MessageId: STATUS_CANNOT_IMPERSONATE
//
// MessageText:
//
// Indicates that an attempt has been made to impersonate via a named pipe that has not yet been read from.
//
#define STATUS_CANNOT_IMPERSONATE        ((NTSTATUS)0xC000010DL)

//
// MessageId: STATUS_IMAGE_ALREADY_LOADED
//
// MessageText:
//
// Indicates that the specified image is already loaded.
//
#define STATUS_IMAGE_ALREADY_LOADED      ((NTSTATUS)0xC000010EL)


//
// ============================================================
// NOTE: The following ABIOS error code should be reserved on
//       non ABIOS kernel. Eventually, I will remove the ifdef
//       ABIOS.
// ============================================================
//
//
// MessageId: STATUS_ABIOS_NOT_PRESENT
//
// MessageText:
//
//  STATUS_ABIOS_NOT_PRESENT
//
#define STATUS_ABIOS_NOT_PRESENT         ((NTSTATUS)0xC000010FL)

//
// MessageId: STATUS_ABIOS_LID_NOT_EXIST
//
// MessageText:
//
//  STATUS_ABIOS_LID_NOT_EXIST
//
#define STATUS_ABIOS_LID_NOT_EXIST       ((NTSTATUS)0xC0000110L)

//
// MessageId: STATUS_ABIOS_LID_ALREADY_OWNED
//
// MessageText:
//
//  STATUS_ABIOS_LID_ALREADY_OWNED
//
#define STATUS_ABIOS_LID_ALREADY_OWNED   ((NTSTATUS)0xC0000111L)

//
// MessageId: STATUS_ABIOS_NOT_LID_OWNER
//
// MessageText:
//
//  STATUS_ABIOS_NOT_LID_OWNER
//
#define STATUS_ABIOS_NOT_LID_OWNER       ((NTSTATUS)0xC0000112L)

//
// MessageId: STATUS_ABIOS_INVALID_COMMAND
//
// MessageText:
//
//  STATUS_ABIOS_INVALID_COMMAND
//
#define STATUS_ABIOS_INVALID_COMMAND     ((NTSTATUS)0xC0000113L)

//
// MessageId: STATUS_ABIOS_INVALID_LID
//
// MessageText:
//
//  STATUS_ABIOS_INVALID_LID
//
#define STATUS_ABIOS_INVALID_LID         ((NTSTATUS)0xC0000114L)

//
// MessageId: STATUS_ABIOS_SELECTOR_NOT_AVAILABLE
//
// MessageText:
//
//  STATUS_ABIOS_SELECTOR_NOT_AVAILABLE
//
#define STATUS_ABIOS_SELECTOR_NOT_AVAILABLE ((NTSTATUS)0xC0000115L)

//
// MessageId: STATUS_ABIOS_INVALID_SELECTOR
//
// MessageText:
//
//  STATUS_ABIOS_INVALID_SELECTOR
//
#define STATUS_ABIOS_INVALID_SELECTOR    ((NTSTATUS)0xC0000116L)

//
// MessageId: STATUS_NO_LDT
//
// MessageText:
//
// Indicates that an attempt was made to change the size of the LDT for a process that has no LDT.
//
#define STATUS_NO_LDT                    ((NTSTATUS)0xC0000117L)

//
// MessageId: STATUS_INVALID_LDT_SIZE
//
// MessageText:
//
// Indicates that an attempt was made to grow an LDT by setting its size, or that the size was not an even number of selectors.
//
#define STATUS_INVALID_LDT_SIZE          ((NTSTATUS)0xC0000118L)

//
// MessageId: STATUS_INVALID_LDT_OFFSET
//
// MessageText:
//
// Indicates that the starting value for the LDT information was not an integral multiple of the selector size.
//
#define STATUS_INVALID_LDT_OFFSET        ((NTSTATUS)0xC0000119L)

//
// MessageId: STATUS_INVALID_LDT_DESCRIPTOR
//
// MessageText:
//
// Indicates that the user supplied an invalid descriptor when trying to set up Ldt descriptors.
//
#define STATUS_INVALID_LDT_DESCRIPTOR    ((NTSTATUS)0xC000011AL)

//
// MessageId: STATUS_INVALID_IMAGE_NE_FORMAT
//
// MessageText:
//
// The specified image file did not have the correct format. It appears to be NE format.
//
#define STATUS_INVALID_IMAGE_NE_FORMAT   ((NTSTATUS)0xC000011BL)

//
// MessageId: STATUS_RXACT_INVALID_STATE
//
// MessageText:
//
// Indicates that the transaction state of a registry sub-tree is incompatible with the requested operation. For example, a request has been made to start a new transaction with one already in progress, or a request has been made to apply a transaction when one is not currently in progress.
//
#define STATUS_RXACT_INVALID_STATE       ((NTSTATUS)0xC000011CL)

//
// MessageId: STATUS_RXACT_COMMIT_FAILURE
//
// MessageText:
//
// Indicates an error has occurred during a registry transaction commit. The database has been left in an unknown, but probably inconsistent, state. The state of the registry transaction is left as COMMITTING.
//
#define STATUS_RXACT_COMMIT_FAILURE      ((NTSTATUS)0xC000011DL)

//
// MessageId: STATUS_MAPPED_FILE_SIZE_ZERO
//
// MessageText:
//
// An attempt was made to map a file of size zero with the maximum size specified as zero.
//
#define STATUS_MAPPED_FILE_SIZE_ZERO     ((NTSTATUS)0xC000011EL)

//
// MessageId: STATUS_TOO_MANY_OPENED_FILES
//
// MessageText:
//
// Too many files are opened on a remote server.
// This error should only be returned by the Windows redirector on a remote drive.
//
#define STATUS_TOO_MANY_OPENED_FILES     ((NTSTATUS)0xC000011FL)

//
// MessageId: STATUS_CANCELLED
//
// MessageText:
//
// The I/O request was canceled.
//
#define STATUS_CANCELLED                 ((NTSTATUS)0xC0000120L)

//
// MessageId: STATUS_CANNOT_DELETE
//
// MessageText:
//
// An attempt has been made to remove a file or directory that cannot be deleted.
//
#define STATUS_CANNOT_DELETE             ((NTSTATUS)0xC0000121L)

//
// MessageId: STATUS_INVALID_COMPUTER_NAME
//
// MessageText:
//
// Indicates a name specified as a remote computer name is syntactically invalid.
//
#define STATUS_INVALID_COMPUTER_NAME     ((NTSTATUS)0xC0000122L)

//
// MessageId: STATUS_FILE_DELETED
//
// MessageText:
//
// An I/O request other than close was performed on a file after it has been deleted, which can only happen to a request which did not complete before the last handle was closed via NtClose.
//
#define STATUS_FILE_DELETED              ((NTSTATUS)0xC0000123L)

//
// MessageId: STATUS_SPECIAL_ACCOUNT
//
// MessageText:
//
// Indicates an operation has been attempted on a built-in (special) SAM account which is incompatible with built-in accounts. For example, built-in accounts cannot be deleted.
//
#define STATUS_SPECIAL_ACCOUNT           ((NTSTATUS)0xC0000124L)

//
// MessageId: STATUS_SPECIAL_GROUP
//
// MessageText:
//
// The operation requested may not be performed on the specified group because it is a built-in special group.
//
#define STATUS_SPECIAL_GROUP             ((NTSTATUS)0xC0000125L)

//
// MessageId: STATUS_SPECIAL_USER
//
// MessageText:
//
// The operation requested may not be performed on the specified user because it is a built-in special user.
//
#define STATUS_SPECIAL_USER              ((NTSTATUS)0xC0000126L)

//
// MessageId: STATUS_MEMBERS_PRIMARY_GROUP
//
// MessageText:
//
// Indicates a member cannot be removed from a group because the group is currently the member's primary group.
//
#define STATUS_MEMBERS_PRIMARY_GROUP     ((NTSTATUS)0xC0000127L)

//
// MessageId: STATUS_FILE_CLOSED
//
// MessageText:
//
// An I/O request other than close and several other special case operations was attempted using a file object that had already been closed.
//
#define STATUS_FILE_CLOSED               ((NTSTATUS)0xC0000128L)

//
// MessageId: STATUS_TOO_MANY_THREADS
//
// MessageText:
//
// Indicates a process has too many threads to perform the requested action. For example, assignment of a primary token may only be performed when a process has zero or one threads.
//
#define STATUS_TOO_MANY_THREADS          ((NTSTATUS)0xC0000129L)

//
// MessageId: STATUS_THREAD_NOT_IN_PROCESS
//
// MessageText:
//
// An attempt was made to operate on a thread within a specific process, but the thread specified is not in the process specified.
//
#define STATUS_THREAD_NOT_IN_PROCESS     ((NTSTATUS)0xC000012AL)

//
// MessageId: STATUS_TOKEN_ALREADY_IN_USE
//
// MessageText:
//
// An attempt was made to establish a token for use as a primary token but the token is already in use. A token can only be the primary token of one process at a time.
//
#define STATUS_TOKEN_ALREADY_IN_USE      ((NTSTATUS)0xC000012BL)

//
// MessageId: STATUS_PAGEFILE_QUOTA_EXCEEDED
//
// MessageText:
//
// Pagefile quota was exceeded.
//
#define STATUS_PAGEFILE_QUOTA_EXCEEDED   ((NTSTATUS)0xC000012CL)

//
// MessageId: STATUS_COMMITMENT_LIMIT
//
// MessageText:
//
// {Out of Virtual Memory}
// Your system is low on virtual memory. To ensure that Windows runs properly, increase the size of your virtual memory paging file. For more information, see Help.
//
#define STATUS_COMMITMENT_LIMIT          ((NTSTATUS)0xC000012DL)

//
// MessageId: STATUS_INVALID_IMAGE_LE_FORMAT
//
// MessageText:
//
// The specified image file did not have the correct format, it appears to be LE format.
//
#define STATUS_INVALID_IMAGE_LE_FORMAT   ((NTSTATUS)0xC000012EL)

//
// MessageId: STATUS_INVALID_IMAGE_NOT_MZ
//
// MessageText:
//
// The specified image file did not have the correct format, it did not have an initial MZ.
//
#define STATUS_INVALID_IMAGE_NOT_MZ      ((NTSTATUS)0xC000012FL)

//
// MessageId: STATUS_INVALID_IMAGE_PROTECT
//
// MessageText:
//
// The specified image file did not have the correct format, it did not have a proper e_lfarlc in the MZ header.
//
#define STATUS_INVALID_IMAGE_PROTECT     ((NTSTATUS)0xC0000130L)

//
// MessageId: STATUS_INVALID_IMAGE_WIN_16
//
// MessageText:
//
// The specified image file did not have the correct format, it appears to be a 16-bit Windows image.
//
#define STATUS_INVALID_IMAGE_WIN_16      ((NTSTATUS)0xC0000131L)

//
// MessageId: STATUS_LOGON_SERVER_CONFLICT
//
// MessageText:
//
// The Netlogon service cannot start because another Netlogon service running in the domain conflicts with the specified role.
//
#define STATUS_LOGON_SERVER_CONFLICT     ((NTSTATUS)0xC0000132L)

//
// MessageId: STATUS_TIME_DIFFERENCE_AT_DC
//
// MessageText:
//
// The time at the Primary Domain Controller is different than the time at the Backup Domain Controller or member server by too large an amount.
//
#define STATUS_TIME_DIFFERENCE_AT_DC     ((NTSTATUS)0xC0000133L)

//
// MessageId: STATUS_SYNCHRONIZATION_REQUIRED
//
// MessageText:
//
// The SAM database on a Windows Server is significantly out of synchronization with the copy on the Domain Controller. A complete synchronization is required.
//
#define STATUS_SYNCHRONIZATION_REQUIRED  ((NTSTATUS)0xC0000134L)

//
// MessageId: STATUS_DLL_NOT_FOUND
//
// MessageText:
//
// The code execution cannot proceed because %hs was not found. Reinstalling the program may fix this problem.
//
#define STATUS_DLL_NOT_FOUND             ((NTSTATUS)0xC0000135L)    // winnt

//
// MessageId: STATUS_OPEN_FAILED
//
// MessageText:
//
// The NtCreateFile API failed. This error should never be returned to an application, it is a place holder for the Windows Lan Manager Redirector to use in its internal error mapping routines.
//
#define STATUS_OPEN_FAILED               ((NTSTATUS)0xC0000136L)

//
// MessageId: STATUS_IO_PRIVILEGE_FAILED
//
// MessageText:
//
// {Privilege Failed}
// The I/O permissions for the process could not be changed.
//
#define STATUS_IO_PRIVILEGE_FAILED       ((NTSTATUS)0xC0000137L)

//
// MessageId: STATUS_ORDINAL_NOT_FOUND
//
// MessageText:
//
// {Ordinal Not Found}
// The ordinal %ld could not be located in the dynamic link library %hs.
//
#define STATUS_ORDINAL_NOT_FOUND         ((NTSTATUS)0xC0000138L)    // winnt

//
// MessageId: STATUS_ENTRYPOINT_NOT_FOUND
//
// MessageText:
//
// {Entry Point Not Found}
// The procedure entry point %hs could not be located in the dynamic link library %hs.
//
#define STATUS_ENTRYPOINT_NOT_FOUND      ((NTSTATUS)0xC0000139L)    // winnt

//
// MessageId: STATUS_CONTROL_C_EXIT
//
// MessageText:
//
// {Application Exit by CTRL+C}
// The application terminated as a result of a CTRL+C.
//
#define STATUS_CONTROL_C_EXIT            ((NTSTATUS)0xC000013AL)    // winnt

//
// MessageId: STATUS_LOCAL_DISCONNECT
//
// MessageText:
//
// {Virtual Circuit Closed}
// The network transport on your computer has closed a network connection. There may or may not be I/O requests outstanding.
//
#define STATUS_LOCAL_DISCONNECT          ((NTSTATUS)0xC000013BL)

//
// MessageId: STATUS_REMOTE_DISCONNECT
//
// MessageText:
//
// {Virtual Circuit Closed}
// The network transport on a remote computer has closed a network connection. There may or may not be I/O requests outstanding.
//
#define STATUS_REMOTE_DISCONNECT         ((NTSTATUS)0xC000013CL)

//
// MessageId: STATUS_REMOTE_RESOURCES
//
// MessageText:
//
// {Insufficient Resources on Remote Computer}
// The remote computer has insufficient resources to complete the network request. For instance, there may not be enough memory available on the remote computer to carry out the request at this time.
//
#define STATUS_REMOTE_RESOURCES          ((NTSTATUS)0xC000013DL)

//
// MessageId: STATUS_LINK_FAILED
//
// MessageText:
//
// {Virtual Circuit Closed}
// An existing connection (virtual circuit) has been broken at the remote computer. There is probably something wrong with the network software protocol or the network hardware on the remote computer.
//
#define STATUS_LINK_FAILED               ((NTSTATUS)0xC000013EL)

//
// MessageId: STATUS_LINK_TIMEOUT
//
// MessageText:
//
// {Virtual Circuit Closed}
// The network transport on your computer has closed a network connection because it had to wait too long for a response from the remote computer.
//
#define STATUS_LINK_TIMEOUT              ((NTSTATUS)0xC000013FL)

//
// MessageId: STATUS_INVALID_CONNECTION
//
// MessageText:
//
// The connection handle given to the transport was invalid.
//
#define STATUS_INVALID_CONNECTION        ((NTSTATUS)0xC0000140L)

//
// MessageId: STATUS_INVALID_ADDRESS
//
// MessageText:
//
// The address handle given to the transport was invalid.
//
#define STATUS_INVALID_ADDRESS           ((NTSTATUS)0xC0000141L)

//
// MessageId: STATUS_DLL_INIT_FAILED
//
// MessageText:
//
// {DLL Initialization Failed}
// Initialization of the dynamic link library %hs failed. The process is terminating abnormally.
//
#define STATUS_DLL_INIT_FAILED           ((NTSTATUS)0xC0000142L)    // winnt

//
// MessageId: STATUS_MISSING_SYSTEMFILE
//
// MessageText:
//
// {Missing System File}
// The required system file %hs is bad or missing.
//
#define STATUS_MISSING_SYSTEMFILE        ((NTSTATUS)0xC0000143L)

//
// MessageId: STATUS_UNHANDLED_EXCEPTION
//
// MessageText:
//
// {Application Error}
// The exception %s (0x%08lx) occurred in the application at location 0x%p.
//
#define STATUS_UNHANDLED_EXCEPTION       ((NTSTATUS)0xC0000144L)

//
// MessageId: STATUS_APP_INIT_FAILURE
//
// MessageText:
//
// {Application Error}
// The application was unable to start correctly (0x%lx). Click OK to close the application.
//
#define STATUS_APP_INIT_FAILURE          ((NTSTATUS)0xC0000145L)

//
// MessageId: STATUS_PAGEFILE_CREATE_FAILED
//
// MessageText:
//
// {Unable to Create Paging File}
// The creation of the paging file %hs failed (%lx). The requested size was %ld.
//
#define STATUS_PAGEFILE_CREATE_FAILED    ((NTSTATUS)0xC0000146L)

//
// MessageId: STATUS_NO_PAGEFILE
//
// MessageText:
//
// {No Paging File Specified}
// No paging file was specified in the system configuration.
//
#define STATUS_NO_PAGEFILE               ((NTSTATUS)0xC0000147L)

//
// MessageId: STATUS_INVALID_LEVEL
//
// MessageText:
//
// {Incorrect System Call Level}
// An invalid level was passed into the specified system call.
//
#define STATUS_INVALID_LEVEL             ((NTSTATUS)0xC0000148L)

//
// MessageId: STATUS_WRONG_PASSWORD_CORE
//
// MessageText:
//
// {Incorrect Password to LAN Manager Server}
// You specified an incorrect password to a LAN Manager 2.x or MS-NET server.
//
#define STATUS_WRONG_PASSWORD_CORE       ((NTSTATUS)0xC0000149L)

//
// MessageId: STATUS_ILLEGAL_FLOAT_CONTEXT
//
// MessageText:
//
// {EXCEPTION}
// A real-mode application issued a floating-point instruction and floating-point hardware is not present.
//
#define STATUS_ILLEGAL_FLOAT_CONTEXT     ((NTSTATUS)0xC000014AL)

//
// MessageId: STATUS_PIPE_BROKEN
//
// MessageText:
//
// The pipe operation has failed because the other end of the pipe has been closed.
//
#define STATUS_PIPE_BROKEN               ((NTSTATUS)0xC000014BL)

//
// MessageId: STATUS_REGISTRY_CORRUPT
//
// MessageText:
//
// {The Registry Is Corrupt}
// The structure of one of the files that contains Registry data is corrupt, or the image of the file in memory is corrupt, or the file could not be recovered because the alternate copy or log was absent or corrupt.
//
#define STATUS_REGISTRY_CORRUPT          ((NTSTATUS)0xC000014CL)

//
// MessageId: STATUS_REGISTRY_IO_FAILED
//
// MessageText:
//
// An I/O operation initiated by the Registry failed unrecoverably. The Registry could not read in, or write out, or flush, one of the files that contain the system's image of the Registry.
//
#define STATUS_REGISTRY_IO_FAILED        ((NTSTATUS)0xC000014DL)

//
// MessageId: STATUS_NO_EVENT_PAIR
//
// MessageText:
//
// An event pair synchronization operation was performed using the thread specific client/server event pair object, but no event pair object was associated with the thread.
//
#define STATUS_NO_EVENT_PAIR             ((NTSTATUS)0xC000014EL)

//
// MessageId: STATUS_UNRECOGNIZED_VOLUME
//
// MessageText:
//
// The volume does not contain a recognized file system. Please make sure that all required file system drivers are loaded and that the volume is not corrupt.
//
#define STATUS_UNRECOGNIZED_VOLUME       ((NTSTATUS)0xC000014FL)

//
// MessageId: STATUS_SERIAL_NO_DEVICE_INITED
//
// MessageText:
//
// No serial device was successfully initialized. The serial driver will unload.
//
#define STATUS_SERIAL_NO_DEVICE_INITED   ((NTSTATUS)0xC0000150L)

//
// MessageId: STATUS_NO_SUCH_ALIAS
//
// MessageText:
//
// The specified local group does not exist.
//
#define STATUS_NO_SUCH_ALIAS             ((NTSTATUS)0xC0000151L)

//
// MessageId: STATUS_MEMBER_NOT_IN_ALIAS
//
// MessageText:
//
// The specified account name is not a member of the group.
//
#define STATUS_MEMBER_NOT_IN_ALIAS       ((NTSTATUS)0xC0000152L)

//
// MessageId: STATUS_MEMBER_IN_ALIAS
//
// MessageText:
//
// The specified account name is already a member of the group.
//
#define STATUS_MEMBER_IN_ALIAS           ((NTSTATUS)0xC0000153L)

//
// MessageId: STATUS_ALIAS_EXISTS
//
// MessageText:
//
// The specified local group already exists.
//
#define STATUS_ALIAS_EXISTS              ((NTSTATUS)0xC0000154L)

//
// MessageId: STATUS_LOGON_NOT_GRANTED
//
// MessageText:
//
// A requested type of logon (e.g., Interactive, Network, Service) is not granted by the target system's local security policy.
// Please ask the system administrator to grant the necessary form of logon.
//
#define STATUS_LOGON_NOT_GRANTED         ((NTSTATUS)0xC0000155L)

//
// MessageId: STATUS_TOO_MANY_SECRETS
//
// MessageText:
//
// The maximum number of secrets that may be stored in a single system has been exceeded. The length and number of secrets is limited to satisfy United States State Department export restrictions.
//
#define STATUS_TOO_MANY_SECRETS          ((NTSTATUS)0xC0000156L)

//
// MessageId: STATUS_SECRET_TOO_LONG
//
// MessageText:
//
// The length of a secret exceeds the maximum length allowed. The length and number of secrets is limited to satisfy United States State Department export restrictions.
//
#define STATUS_SECRET_TOO_LONG           ((NTSTATUS)0xC0000157L)

//
// MessageId: STATUS_INTERNAL_DB_ERROR
//
// MessageText:
//
// The Local Security Authority (LSA) database contains an internal inconsistency.
//
#define STATUS_INTERNAL_DB_ERROR         ((NTSTATUS)0xC0000158L)

//
// MessageId: STATUS_FULLSCREEN_MODE
//
// MessageText:
//
// The requested operation cannot be performed in fullscreen mode.
//
#define STATUS_FULLSCREEN_MODE           ((NTSTATUS)0xC0000159L)

//
// MessageId: STATUS_TOO_MANY_CONTEXT_IDS
//
// MessageText:
//
// During a logon attempt, the user's security context accumulated too many security IDs. This is a very unusual situation. Remove the user from some global or local groups to reduce the number of security ids to incorporate into the security context.
//
#define STATUS_TOO_MANY_CONTEXT_IDS      ((NTSTATUS)0xC000015AL)

//
// MessageId: STATUS_LOGON_TYPE_NOT_GRANTED
//
// MessageText:
//
// A user has requested a type of logon (e.g., interactive or network) that has not been granted. An administrator has control over who may logon interactively and through the network.
//
#define STATUS_LOGON_TYPE_NOT_GRANTED    ((NTSTATUS)0xC000015BL)

//
// MessageId: STATUS_NOT_REGISTRY_FILE
//
// MessageText:
//
// The system has attempted to load or restore a file into the registry, and the specified file is not in the format of a registry file.
//
#define STATUS_NOT_REGISTRY_FILE         ((NTSTATUS)0xC000015CL)

//
// MessageId: STATUS_NT_CROSS_ENCRYPTION_REQUIRED
//
// MessageText:
//
// An attempt was made to change a user password in the security account manager without providing the necessary Windows cross-encrypted password.
//
#define STATUS_NT_CROSS_ENCRYPTION_REQUIRED ((NTSTATUS)0xC000015DL)

//
// MessageId: STATUS_DOMAIN_CTRLR_CONFIG_ERROR
//
// MessageText:
//
// A Windows Server has an incorrect configuration.
//
#define STATUS_DOMAIN_CTRLR_CONFIG_ERROR ((NTSTATUS)0xC000015EL)

//
// MessageId: STATUS_FT_MISSING_MEMBER
//
// MessageText:
//
// An attempt was made to explicitly access the secondary copy of information via a device control to the Fault Tolerance driver and the secondary copy is not present in the system.
//
#define STATUS_FT_MISSING_MEMBER         ((NTSTATUS)0xC000015FL)

//
// MessageId: STATUS_ILL_FORMED_SERVICE_ENTRY
//
// MessageText:
//
// A configuration registry node representing a driver service entry was ill-formed and did not contain required value entries.
//
#define STATUS_ILL_FORMED_SERVICE_ENTRY  ((NTSTATUS)0xC0000160L)

//
// MessageId: STATUS_ILLEGAL_CHARACTER
//
// MessageText:
//
// An illegal character was encountered. For a multi-byte character set this includes a lead byte without a succeeding trail byte. For the Unicode character set this includes the characters 0xFFFF and 0xFFFE.
//
#define STATUS_ILLEGAL_CHARACTER         ((NTSTATUS)0xC0000161L)

//
// MessageId: STATUS_UNMAPPABLE_CHARACTER
//
// MessageText:
//
// No mapping for the Unicode character exists in the target multi-byte code page.
//
#define STATUS_UNMAPPABLE_CHARACTER      ((NTSTATUS)0xC0000162L)

//
// MessageId: STATUS_UNDEFINED_CHARACTER
//
// MessageText:
//
// The Unicode character is not defined in the Unicode character set installed on the system.
//
#define STATUS_UNDEFINED_CHARACTER       ((NTSTATUS)0xC0000163L)

//
// MessageId: STATUS_FLOPPY_VOLUME
//
// MessageText:
//
// The paging file cannot be created on a floppy diskette.
//
#define STATUS_FLOPPY_VOLUME             ((NTSTATUS)0xC0000164L)

//
// MessageId: STATUS_FLOPPY_ID_MARK_NOT_FOUND
//
// MessageText:
//
// {Floppy Disk Error}
// While accessing a floppy disk, an ID address mark was not found.
//
#define STATUS_FLOPPY_ID_MARK_NOT_FOUND  ((NTSTATUS)0xC0000165L)

//
// MessageId: STATUS_FLOPPY_WRONG_CYLINDER
//
// MessageText:
//
// {Floppy Disk Error}
// While accessing a floppy disk, the track address from the sector ID field was found to be different than the track address maintained by the controller.
//
#define STATUS_FLOPPY_WRONG_CYLINDER     ((NTSTATUS)0xC0000166L)

//
// MessageId: STATUS_FLOPPY_UNKNOWN_ERROR
//
// MessageText:
//
// {Floppy Disk Error}
// The floppy disk controller reported an error that is not recognized by the floppy disk driver.
//
#define STATUS_FLOPPY_UNKNOWN_ERROR      ((NTSTATUS)0xC0000167L)

//
// MessageId: STATUS_FLOPPY_BAD_REGISTERS
//
// MessageText:
//
// {Floppy Disk Error}
// While accessing a floppy-disk, the controller returned inconsistent results via its registers.
//
#define STATUS_FLOPPY_BAD_REGISTERS      ((NTSTATUS)0xC0000168L)

//
// MessageId: STATUS_DISK_RECALIBRATE_FAILED
//
// MessageText:
//
// {Hard Disk Error}
// While accessing the hard disk, a recalibrate operation failed, even after retries.
//
#define STATUS_DISK_RECALIBRATE_FAILED   ((NTSTATUS)0xC0000169L)

//
// MessageId: STATUS_DISK_OPERATION_FAILED
//
// MessageText:
//
// {Hard Disk Error}
// While accessing the hard disk, a disk operation failed even after retries.
//
#define STATUS_DISK_OPERATION_FAILED     ((NTSTATUS)0xC000016AL)

//
// MessageId: STATUS_DISK_RESET_FAILED
//
// MessageText:
//
// {Hard Disk Error}
// While accessing the hard disk, a disk controller reset was needed, but even that failed.
//
#define STATUS_DISK_RESET_FAILED         ((NTSTATUS)0xC000016BL)

//
// MessageId: STATUS_SHARED_IRQ_BUSY
//
// MessageText:
//
// An attempt was made to open a device that was sharing an IRQ with other devices.
// At least one other device that uses that IRQ was already opened.
// Two concurrent opens of devices that share an IRQ and only work via interrupts is not supported for the particular bus type that the devices use.
//
#define STATUS_SHARED_IRQ_BUSY           ((NTSTATUS)0xC000016CL)

//
// MessageId: STATUS_FT_ORPHANING
//
// MessageText:
//
// {FT Orphaning}
// A disk that is part of a fault-tolerant volume can no longer be accessed.
//
#define STATUS_FT_ORPHANING              ((NTSTATUS)0xC000016DL)

//
// MessageId: STATUS_BIOS_FAILED_TO_CONNECT_INTERRUPT
//
// MessageText:
//
// The system bios failed to connect a system interrupt to the device or bus for which the device is connected.
//
#define STATUS_BIOS_FAILED_TO_CONNECT_INTERRUPT ((NTSTATUS)0xC000016EL)

//
// MessageId: STATUS_PARTITION_FAILURE
//
// MessageText:
//
// Tape could not be partitioned.
//
#define STATUS_PARTITION_FAILURE         ((NTSTATUS)0xC0000172L)

//
// MessageId: STATUS_INVALID_BLOCK_LENGTH
//
// MessageText:
//
// When accessing a new tape of a multivolume partition, the current blocksize is incorrect.
//
#define STATUS_INVALID_BLOCK_LENGTH      ((NTSTATUS)0xC0000173L)

//
// MessageId: STATUS_DEVICE_NOT_PARTITIONED
//
// MessageText:
//
// Tape partition information could not be found when loading a tape.
//
#define STATUS_DEVICE_NOT_PARTITIONED    ((NTSTATUS)0xC0000174L)

//
// MessageId: STATUS_UNABLE_TO_LOCK_MEDIA
//
// MessageText:
//
// Attempt to lock the eject media mechanism fails.
//
#define STATUS_UNABLE_TO_LOCK_MEDIA      ((NTSTATUS)0xC0000175L)

//
// MessageId: STATUS_UNABLE_TO_UNLOAD_MEDIA
//
// MessageText:
//
// Unload media fails.
//
#define STATUS_UNABLE_TO_UNLOAD_MEDIA    ((NTSTATUS)0xC0000176L)

//
// MessageId: STATUS_EOM_OVERFLOW
//
// MessageText:
//
// Physical end of tape was detected.
//
#define STATUS_EOM_OVERFLOW              ((NTSTATUS)0xC0000177L)

//
// MessageId: STATUS_NO_MEDIA
//
// MessageText:
//
// {No Media}
// There is no media in the drive. Please insert media into drive %hs.
//
#define STATUS_NO_MEDIA                  ((NTSTATUS)0xC0000178L)

//
// MessageId: STATUS_NO_SUCH_MEMBER
//
// MessageText:
//
// A member could not be added to or removed from the local group because the member does not exist.
//
#define STATUS_NO_SUCH_MEMBER            ((NTSTATUS)0xC000017AL)

//
// MessageId: STATUS_INVALID_MEMBER
//
// MessageText:
//
// A new member could not be added to a local group because the member has the wrong account type.
//
#define STATUS_INVALID_MEMBER            ((NTSTATUS)0xC000017BL)

//
// MessageId: STATUS_KEY_DELETED
//
// MessageText:
//
// Illegal operation attempted on a registry key which has been marked for deletion.
//
#define STATUS_KEY_DELETED               ((NTSTATUS)0xC000017CL)

//
// MessageId: STATUS_NO_LOG_SPACE
//
// MessageText:
//
// System could not allocate required space in a registry log.
//
#define STATUS_NO_LOG_SPACE              ((NTSTATUS)0xC000017DL)

//
// MessageId: STATUS_TOO_MANY_SIDS
//
// MessageText:
//
// Too many Sids have been specified.
//
#define STATUS_TOO_MANY_SIDS             ((NTSTATUS)0xC000017EL)

//
// MessageId: STATUS_LM_CROSS_ENCRYPTION_REQUIRED
//
// MessageText:
//
// An attempt was made to change a user password in the security account manager without providing the necessary LM cross-encrypted password.
//
#define STATUS_LM_CROSS_ENCRYPTION_REQUIRED ((NTSTATUS)0xC000017FL)

//
// MessageId: STATUS_KEY_HAS_CHILDREN
//
// MessageText:
//
// An attempt was made to create a symbolic link in a registry key that already has subkeys or values.
//
#define STATUS_KEY_HAS_CHILDREN          ((NTSTATUS)0xC0000180L)

//
// MessageId: STATUS_CHILD_MUST_BE_VOLATILE
//
// MessageText:
//
// An attempt was made to create a Stable subkey under a Volatile parent key.
//
#define STATUS_CHILD_MUST_BE_VOLATILE    ((NTSTATUS)0xC0000181L)

//
// MessageId: STATUS_DEVICE_CONFIGURATION_ERROR
//
// MessageText:
//
// The I/O device is configured incorrectly or the configuration parameters to the driver are incorrect.
//
#define STATUS_DEVICE_CONFIGURATION_ERROR ((NTSTATUS)0xC0000182L)

//
// MessageId: STATUS_DRIVER_INTERNAL_ERROR
//
// MessageText:
//
// An error was detected between two drivers or within an I/O driver.
//
#define STATUS_DRIVER_INTERNAL_ERROR     ((NTSTATUS)0xC0000183L)

//
// MessageId: STATUS_INVALID_DEVICE_STATE
//
// MessageText:
//
// The device is not in a valid state to perform this request.
//
#define STATUS_INVALID_DEVICE_STATE      ((NTSTATUS)0xC0000184L)

//
// MessageId: STATUS_IO_DEVICE_ERROR
//
// MessageText:
//
// The I/O device reported an I/O error.
//
#define STATUS_IO_DEVICE_ERROR           ((NTSTATUS)0xC0000185L)

//
// MessageId: STATUS_DEVICE_PROTOCOL_ERROR
//
// MessageText:
//
// A protocol error was detected between the driver and the device.
//
#define STATUS_DEVICE_PROTOCOL_ERROR     ((NTSTATUS)0xC0000186L)

//
// MessageId: STATUS_BACKUP_CONTROLLER
//
// MessageText:
//
// This operation is only allowed for the Primary Domain Controller of the domain.
//
#define STATUS_BACKUP_CONTROLLER         ((NTSTATUS)0xC0000187L)

//
// MessageId: STATUS_LOG_FILE_FULL
//
// MessageText:
//
// Log file space is insufficient to support this operation.
//
#define STATUS_LOG_FILE_FULL             ((NTSTATUS)0xC0000188L)

//
// MessageId: STATUS_TOO_LATE
//
// MessageText:
//
// A write operation was attempted to a volume after it was dismounted.
//
#define STATUS_TOO_LATE                  ((NTSTATUS)0xC0000189L)

//
// MessageId: STATUS_NO_TRUST_LSA_SECRET
//
// MessageText:
//
// The workstation does not have a trust secret for the primary domain in the local LSA database.
//
#define STATUS_NO_TRUST_LSA_SECRET       ((NTSTATUS)0xC000018AL)

//
// MessageId: STATUS_NO_TRUST_SAM_ACCOUNT
//
// MessageText:
//
// The SAM database on the Windows Server does not have a computer account for this workstation trust relationship.
//
#define STATUS_NO_TRUST_SAM_ACCOUNT      ((NTSTATUS)0xC000018BL)

//
// MessageId: STATUS_TRUSTED_DOMAIN_FAILURE
//
// MessageText:
//
// The logon request failed because the trust relationship between the primary domain and the trusted domain failed.
//
#define STATUS_TRUSTED_DOMAIN_FAILURE    ((NTSTATUS)0xC000018CL)

//
// MessageId: STATUS_TRUSTED_RELATIONSHIP_FAILURE
//
// MessageText:
//
// The logon request failed because the trust relationship between this workstation and the primary domain failed.
//
#define STATUS_TRUSTED_RELATIONSHIP_FAILURE ((NTSTATUS)0xC000018DL)

//
// MessageId: STATUS_EVENTLOG_FILE_CORRUPT
//
// MessageText:
//
// The Eventlog log file is corrupt.
//
#define STATUS_EVENTLOG_FILE_CORRUPT     ((NTSTATUS)0xC000018EL)

//
// MessageId: STATUS_EVENTLOG_CANT_START
//
// MessageText:
//
// No Eventlog log file could be opened. The Eventlog service did not start.
//
#define STATUS_EVENTLOG_CANT_START       ((NTSTATUS)0xC000018FL)

//
// MessageId: STATUS_TRUST_FAILURE
//
// MessageText:
//
// The network logon failed. This may be because the validation authority can't be reached.
//
#define STATUS_TRUST_FAILURE             ((NTSTATUS)0xC0000190L)

//
// MessageId: STATUS_MUTANT_LIMIT_EXCEEDED
//
// MessageText:
//
// An attempt was made to acquire a mutant such that its maximum count would have been exceeded.
//
#define STATUS_MUTANT_LIMIT_EXCEEDED     ((NTSTATUS)0xC0000191L)

//
// MessageId: STATUS_NETLOGON_NOT_STARTED
//
// MessageText:
//
// An attempt was made to logon, but the netlogon service was not started.
//
#define STATUS_NETLOGON_NOT_STARTED      ((NTSTATUS)0xC0000192L)

//
// MessageId: STATUS_ACCOUNT_EXPIRED
//
// MessageText:
//
// The user's account has expired.
//
#define STATUS_ACCOUNT_EXPIRED           ((NTSTATUS)0xC0000193L)    // ntsubauth

//
// MessageId: STATUS_POSSIBLE_DEADLOCK
//
// MessageText:
//
// {EXCEPTION}
// Possible deadlock condition.
//
#define STATUS_POSSIBLE_DEADLOCK         ((NTSTATUS)0xC0000194L)

//
// MessageId: STATUS_NETWORK_CREDENTIAL_CONFLICT
//
// MessageText:
//
// Multiple connections to a server or shared resource by the same user, using more than one user name, are not allowed. Disconnect all previous connections to the server or shared resource and try again.
//
#define STATUS_NETWORK_CREDENTIAL_CONFLICT ((NTSTATUS)0xC0000195L)

//
// MessageId: STATUS_REMOTE_SESSION_LIMIT
//
// MessageText:
//
// An attempt was made to establish a session to a network server, but there are already too many sessions established to that server.
//
#define STATUS_REMOTE_SESSION_LIMIT      ((NTSTATUS)0xC0000196L)

//
// MessageId: STATUS_EVENTLOG_FILE_CHANGED
//
// MessageText:
//
// The log file has changed between reads.
//
#define STATUS_EVENTLOG_FILE_CHANGED     ((NTSTATUS)0xC0000197L)

//
// MessageId: STATUS_NOLOGON_INTERDOMAIN_TRUST_ACCOUNT
//
// MessageText:
//
// The account used is an Interdomain Trust account. Use your global user account or local user account to access this server.
//
#define STATUS_NOLOGON_INTERDOMAIN_TRUST_ACCOUNT ((NTSTATUS)0xC0000198L)

//
// MessageId: STATUS_NOLOGON_WORKSTATION_TRUST_ACCOUNT
//
// MessageText:
//
// The account used is a Computer Account. Use your global user account or local user account to access this server.
//
#define STATUS_NOLOGON_WORKSTATION_TRUST_ACCOUNT ((NTSTATUS)0xC0000199L)

//
// MessageId: STATUS_NOLOGON_SERVER_TRUST_ACCOUNT
//
// MessageText:
//
// The account used is an Server Trust account. Use your global user account or local user account to access this server.
//
#define STATUS_NOLOGON_SERVER_TRUST_ACCOUNT ((NTSTATUS)0xC000019AL)

//
// MessageId: STATUS_DOMAIN_TRUST_INCONSISTENT
//
// MessageText:
//
// The name or SID of the domain specified is inconsistent with the trust information for that domain.
//
#define STATUS_DOMAIN_TRUST_INCONSISTENT ((NTSTATUS)0xC000019BL)

//
// MessageId: STATUS_FS_DRIVER_REQUIRED
//
// MessageText:
//
// A volume has been accessed for which a file system driver is required that has not yet been loaded.
//
#define STATUS_FS_DRIVER_REQUIRED        ((NTSTATUS)0xC000019CL)

//
// MessageId: STATUS_IMAGE_ALREADY_LOADED_AS_DLL
//
// MessageText:
//
// Indicates that the specified image is already loaded as a DLL.
//
#define STATUS_IMAGE_ALREADY_LOADED_AS_DLL ((NTSTATUS)0xC000019DL)

//
// MessageId: STATUS_INCOMPATIBLE_WITH_GLOBAL_SHORT_NAME_REGISTRY_SETTING
//
// MessageText:
//
// Short name settings may not be changed on this volume due to the global registry setting.
//
#define STATUS_INCOMPATIBLE_WITH_GLOBAL_SHORT_NAME_REGISTRY_SETTING ((NTSTATUS)0xC000019EL)

//
// MessageId: STATUS_SHORT_NAMES_NOT_ENABLED_ON_VOLUME
//
// MessageText:
//
// Short names are not enabled on this volume.
//
#define STATUS_SHORT_NAMES_NOT_ENABLED_ON_VOLUME ((NTSTATUS)0xC000019FL)

//
// MessageId: STATUS_SECURITY_STREAM_IS_INCONSISTENT
//
// MessageText:
//
// The security stream for the given volume is in an inconsistent state.
// Please run CHKDSK on the volume.
//
#define STATUS_SECURITY_STREAM_IS_INCONSISTENT ((NTSTATUS)0xC00001A0L)

//
// MessageId: STATUS_INVALID_LOCK_RANGE
//
// MessageText:
//
// A requested file lock operation cannot be processed due to an invalid byte range.
//
#define STATUS_INVALID_LOCK_RANGE        ((NTSTATUS)0xC00001A1L)

//
// MessageId: STATUS_INVALID_ACE_CONDITION
//
// MessageText:
//
// {Invalid ACE Condition}
// The specified access control entry (ACE) contains an invalid condition.
//
#define STATUS_INVALID_ACE_CONDITION     ((NTSTATUS)0xC00001A2L)

//
// MessageId: STATUS_IMAGE_SUBSYSTEM_NOT_PRESENT
//
// MessageText:
//
// The subsystem needed to support the image type is not present.
//
#define STATUS_IMAGE_SUBSYSTEM_NOT_PRESENT ((NTSTATUS)0xC00001A3L)

//
// MessageId: STATUS_NOTIFICATION_GUID_ALREADY_DEFINED
//
// MessageText:
//
// {Invalid ACE Condition}
// The specified file already has a notification GUID associated with it.
//
#define STATUS_NOTIFICATION_GUID_ALREADY_DEFINED ((NTSTATUS)0xC00001A4L)

//
// MessageId: STATUS_INVALID_EXCEPTION_HANDLER
//
// MessageText:
//
// An invalid exception handler routine has been detected.
//
#define STATUS_INVALID_EXCEPTION_HANDLER ((NTSTATUS)0xC00001A5L)

//
// MessageId: STATUS_DUPLICATE_PRIVILEGES
//
// MessageText:
//
// Duplicate privileges were specified for the token.
//
#define STATUS_DUPLICATE_PRIVILEGES      ((NTSTATUS)0xC00001A6L)

//
// MessageId: STATUS_NOT_ALLOWED_ON_SYSTEM_FILE
//
// MessageText:
//
// Requested action not allowed on a file system internal file.
//
#define STATUS_NOT_ALLOWED_ON_SYSTEM_FILE ((NTSTATUS)0xC00001A7L)

//
// MessageId: STATUS_REPAIR_NEEDED
//
// MessageText:
//
// A portion of the file system requires repair.
//
#define STATUS_REPAIR_NEEDED             ((NTSTATUS)0xC00001A8L)

//
// MessageId: STATUS_QUOTA_NOT_ENABLED
//
// MessageText:
//
// Quota support is not enabled on the system.
//
#define STATUS_QUOTA_NOT_ENABLED         ((NTSTATUS)0xC00001A9L)

//
// MessageId: STATUS_NO_APPLICATION_PACKAGE
//
// MessageText:
//
// The operation failed because the application is not part of an application package.
//
#define STATUS_NO_APPLICATION_PACKAGE    ((NTSTATUS)0xC00001AAL)

//
// MessageId: STATUS_FILE_METADATA_OPTIMIZATION_IN_PROGRESS
//
// MessageText:
//
// File metadata optimization is already in progress.
//
#define STATUS_FILE_METADATA_OPTIMIZATION_IN_PROGRESS ((NTSTATUS)0xC00001ABL)

//
// MessageId: STATUS_NOT_SAME_OBJECT
//
// MessageText:
//
// The objects are not identical.
//
#define STATUS_NOT_SAME_OBJECT           ((NTSTATUS)0xC00001ACL)

//
// MessageId: STATUS_FATAL_MEMORY_EXHAUSTION
//
// MessageText:
//
// The process has terminated because it could not allocate additional memory.
//
#define STATUS_FATAL_MEMORY_EXHAUSTION   ((NTSTATUS)0xC00001ADL)

//
// MessageId: STATUS_ERROR_PROCESS_NOT_IN_JOB
//
// MessageText:
//
// The process is not part of a job.
//
#define STATUS_ERROR_PROCESS_NOT_IN_JOB  ((NTSTATUS)0xC00001AEL)

//
// MessageId: STATUS_CPU_SET_INVALID
//
// MessageText:
//
// The specified CPU Set IDs are invalid.
//
#define STATUS_CPU_SET_INVALID           ((NTSTATUS)0xC00001AFL)

//
// MessageId: STATUS_IO_DEVICE_INVALID_DATA
//
// MessageText:
//
// The device reported an invalid data error.
//
#define STATUS_IO_DEVICE_INVALID_DATA    ((NTSTATUS)0xC00001B0L)

//
// MessageId: STATUS_IO_UNALIGNED_WRITE
//
// MessageText:
//
// The device reported an unaligned write error.
//
#define STATUS_IO_UNALIGNED_WRITE        ((NTSTATUS)0xC00001B1L)

//
// MessageId: STATUS_CONTROL_STACK_VIOLATION
//
// MessageText:
//
// An invalid address was found on the control flow stack.
//
#define STATUS_CONTROL_STACK_VIOLATION   ((NTSTATUS)0xC00001B2L)    //winnt

//
// MessageId: STATUS_WEAK_WHFBKEY_BLOCKED
//
// MessageText:
//
// The Security Account Manager blocked the use of a weak Windows Hello for Business key.
//
#define STATUS_WEAK_WHFBKEY_BLOCKED      ((NTSTATUS)0xC00001B3L)

//
// MessageId: STATUS_SERVER_TRANSPORT_CONFLICT
//
// MessageText:
//
// Multiple mappings to shared resource(s) on a server, using more than one transport, are not allowed. Use a single transport for all mappings to a server and try again.
//
#define STATUS_SERVER_TRANSPORT_CONFLICT ((NTSTATUS)0xC00001B4L)

//
// MessageId: STATUS_CERTIFICATE_VALIDATION_PREFERENCE_CONFLICT
//
// MessageText:
//
// Multiple mappings to shared resource(s) on a server, using different certificate validation preferences, are not allowed. Use the same preference for all mappings to a server and try again.
//
#define STATUS_CERTIFICATE_VALIDATION_PREFERENCE_CONFLICT ((NTSTATUS)0xC00001B5L)

//
// MessageId: STATUS_DEVICE_RESET_REQUIRED
//
// MessageText:
//
// The device needs to be reset.
//
#define STATUS_DEVICE_RESET_REQUIRED     ((NTSTATUS)0x800001B6L)

//
//  Available range of NTSTATUS codes
//
//
// MessageId: STATUS_NETWORK_OPEN_RESTRICTION
//
// MessageText:
//
// A remote open failed because the network open restrictions were not satisfied.
//
#define STATUS_NETWORK_OPEN_RESTRICTION  ((NTSTATUS)0xC0000201L)

//
// MessageId: STATUS_NO_USER_SESSION_KEY
//
// MessageText:
//
// There is no user session key for the specified logon session.
//
#define STATUS_NO_USER_SESSION_KEY       ((NTSTATUS)0xC0000202L)

//
// MessageId: STATUS_USER_SESSION_DELETED
//
// MessageText:
//
// The remote user session has been deleted.
//
#define STATUS_USER_SESSION_DELETED      ((NTSTATUS)0xC0000203L)

//
// MessageId: STATUS_RESOURCE_LANG_NOT_FOUND
//
// MessageText:
//
// Indicates the specified resource language ID cannot be found in the
// image file.
//
#define STATUS_RESOURCE_LANG_NOT_FOUND   ((NTSTATUS)0xC0000204L)

//
// MessageId: STATUS_INSUFF_SERVER_RESOURCES
//
// MessageText:
//
// Insufficient server resources exist to complete the request.
//
#define STATUS_INSUFF_SERVER_RESOURCES   ((NTSTATUS)0xC0000205L)

//
// MessageId: STATUS_INVALID_BUFFER_SIZE
//
// MessageText:
//
// The size of the buffer is invalid for the specified operation.
//
#define STATUS_INVALID_BUFFER_SIZE       ((NTSTATUS)0xC0000206L)

//
// MessageId: STATUS_INVALID_ADDRESS_COMPONENT
//
// MessageText:
//
// The transport rejected the network address specified as invalid.
//
#define STATUS_INVALID_ADDRESS_COMPONENT ((NTSTATUS)0xC0000207L)

//
// MessageId: STATUS_INVALID_ADDRESS_WILDCARD
//
// MessageText:
//
// The transport rejected the network address specified due to an invalid use of a wildcard.
//
#define STATUS_INVALID_ADDRESS_WILDCARD  ((NTSTATUS)0xC0000208L)

//
// MessageId: STATUS_TOO_MANY_ADDRESSES
//
// MessageText:
//
// The transport address could not be opened because all the available addresses are in use.
//
#define STATUS_TOO_MANY_ADDRESSES        ((NTSTATUS)0xC0000209L)

//
// MessageId: STATUS_ADDRESS_ALREADY_EXISTS
//
// MessageText:
//
// The transport address could not be opened because it already exists.
//
#define STATUS_ADDRESS_ALREADY_EXISTS    ((NTSTATUS)0xC000020AL)

//
// MessageId: STATUS_ADDRESS_CLOSED
//
// MessageText:
//
// The transport address is now closed.
//
#define STATUS_ADDRESS_CLOSED            ((NTSTATUS)0xC000020BL)

//
// MessageId: STATUS_CONNECTION_DISCONNECTED
//
// MessageText:
//
// The transport connection is now disconnected.
//
#define STATUS_CONNECTION_DISCONNECTED   ((NTSTATUS)0xC000020CL)

//
// MessageId: STATUS_CONNECTION_RESET
//
// MessageText:
//
// The transport connection has been reset.
//
#define STATUS_CONNECTION_RESET          ((NTSTATUS)0xC000020DL)

//
// MessageId: STATUS_TOO_MANY_NODES
//
// MessageText:
//
// The transport cannot dynamically acquire any more nodes.
//
#define STATUS_TOO_MANY_NODES            ((NTSTATUS)0xC000020EL)

//
// MessageId: STATUS_TRANSACTION_ABORTED
//
// MessageText:
//
// The transport aborted a pending transaction.
//
#define STATUS_TRANSACTION_ABORTED       ((NTSTATUS)0xC000020FL)

//
// MessageId: STATUS_TRANSACTION_TIMED_OUT
//
// MessageText:
//
// The transport timed out a request waiting for a response.
//
#define STATUS_TRANSACTION_TIMED_OUT     ((NTSTATUS)0xC0000210L)

//
// MessageId: STATUS_TRANSACTION_NO_RELEASE
//
// MessageText:
//
// The transport did not receive a release for a pending response.
//
#define STATUS_TRANSACTION_NO_RELEASE    ((NTSTATUS)0xC0000211L)

//
// MessageId: STATUS_TRANSACTION_NO_MATCH
//
// MessageText:
//
// The transport did not find a transaction matching the specific token.
//
#define STATUS_TRANSACTION_NO_MATCH      ((NTSTATUS)0xC0000212L)

//
// MessageId: STATUS_TRANSACTION_RESPONDED
//
// MessageText:
//
// The transport had previously responded to a transaction request.
//
#define STATUS_TRANSACTION_RESPONDED     ((NTSTATUS)0xC0000213L)

//
// MessageId: STATUS_TRANSACTION_INVALID_ID
//
// MessageText:
//
// The transport does not recognized the transaction request identifier specified.
//
#define STATUS_TRANSACTION_INVALID_ID    ((NTSTATUS)0xC0000214L)

//
// MessageId: STATUS_TRANSACTION_INVALID_TYPE
//
// MessageText:
//
// The transport does not recognize the transaction request type specified.
//
#define STATUS_TRANSACTION_INVALID_TYPE  ((NTSTATUS)0xC0000215L)

//
// MessageId: STATUS_NOT_SERVER_SESSION
//
// MessageText:
//
// The transport can only process the specified request on the server side of a session.
//
#define STATUS_NOT_SERVER_SESSION        ((NTSTATUS)0xC0000216L)

//
// MessageId: STATUS_NOT_CLIENT_SESSION
//
// MessageText:
//
// The transport can only process the specified request on the client side of a session.
//
#define STATUS_NOT_CLIENT_SESSION        ((NTSTATUS)0xC0000217L)

//
// MessageId: STATUS_CANNOT_LOAD_REGISTRY_FILE
//
// MessageText:
//
// {Registry File Failure}
// The registry cannot load the hive (file):
// %hs
// or its log or alternate.
// It is corrupt, absent, or not writable.
//
#define STATUS_CANNOT_LOAD_REGISTRY_FILE ((NTSTATUS)0xC0000218L)

//
// MessageId: STATUS_DEBUG_ATTACH_FAILED
//
// MessageText:
//
// {Unexpected Failure in DebugActiveProcess}
// An unexpected failure occurred while processing a DebugActiveProcess API request. You may choose OK to terminate the process, or Cancel to ignore the error.
//
#define STATUS_DEBUG_ATTACH_FAILED       ((NTSTATUS)0xC0000219L)

//
// MessageId: STATUS_SYSTEM_PROCESS_TERMINATED
//
// MessageText:
//
// {Fatal System Error}
// The %hs system process terminated unexpectedly with a status of 0x%08x (0x%08x 0x%08x).
// The system has been shut down.
//
#define STATUS_SYSTEM_PROCESS_TERMINATED ((NTSTATUS)0xC000021AL)

//
// MessageId: STATUS_DATA_NOT_ACCEPTED
//
// MessageText:
//
// {Data Not Accepted}
// The TDI client could not handle the data received during an indication.
//
#define STATUS_DATA_NOT_ACCEPTED         ((NTSTATUS)0xC000021BL)

//
// MessageId: STATUS_NO_BROWSER_SERVERS_FOUND
//
// MessageText:
//
// {Unable to Retrieve Browser Server List}
// The list of servers for this workgroup is not currently available.
//
#define STATUS_NO_BROWSER_SERVERS_FOUND  ((NTSTATUS)0xC000021CL)

//
// MessageId: STATUS_VDM_HARD_ERROR
//
// MessageText:
//
// NTVDM encountered a hard error.
//
#define STATUS_VDM_HARD_ERROR            ((NTSTATUS)0xC000021DL)

//
// MessageId: STATUS_DRIVER_CANCEL_TIMEOUT
//
// MessageText:
//
// {Cancel Timeout}
// The driver %hs failed to complete a cancelled I/O request in the allotted time.
//
#define STATUS_DRIVER_CANCEL_TIMEOUT     ((NTSTATUS)0xC000021EL)

//
// MessageId: STATUS_REPLY_MESSAGE_MISMATCH
//
// MessageText:
//
// {Reply Message Mismatch}
// An attempt was made to reply to an LPC message, but the thread specified by the client ID in the message was not waiting on that message.
//
#define STATUS_REPLY_MESSAGE_MISMATCH    ((NTSTATUS)0xC000021FL)

//
// MessageId: STATUS_MAPPED_ALIGNMENT
//
// MessageText:
//
// {Mapped View Alignment Incorrect}
// An attempt was made to map a view of a file, but either the specified base address or the offset into the file were not aligned on the proper allocation granularity.
//
#define STATUS_MAPPED_ALIGNMENT          ((NTSTATUS)0xC0000220L)

//
// MessageId: STATUS_IMAGE_CHECKSUM_MISMATCH
//
// MessageText:
//
// {Bad Image Checksum}
// The image %hs is possibly corrupt. The header checksum does not match the computed checksum.
//
#define STATUS_IMAGE_CHECKSUM_MISMATCH   ((NTSTATUS)0xC0000221L)

//
// MessageId: STATUS_LOST_WRITEBEHIND_DATA
//
// MessageText:
//
// {Delayed Write Failed}
// Windows was unable to save all the data for the file %hs. The data has been lost. This error may be caused by a failure of your computer hardware or network connection. Please try to save this file elsewhere.
//
#define STATUS_LOST_WRITEBEHIND_DATA     ((NTSTATUS)0xC0000222L)

//
// MessageId: STATUS_CLIENT_SERVER_PARAMETERS_INVALID
//
// MessageText:
//
// The parameter(s) passed to the server in the client/server shared memory window were invalid. Too much data may have been put in the shared memory window.
//
#define STATUS_CLIENT_SERVER_PARAMETERS_INVALID ((NTSTATUS)0xC0000223L)

//
// MessageId: STATUS_PASSWORD_MUST_CHANGE
//
// MessageText:
//
// The user's password must be changed before signing in.
//
#define STATUS_PASSWORD_MUST_CHANGE      ((NTSTATUS)0xC0000224L)    // ntsubauth

//
// MessageId: STATUS_NOT_FOUND
//
// MessageText:
//
// The object was not found.
//
#define STATUS_NOT_FOUND                 ((NTSTATUS)0xC0000225L)

//
// MessageId: STATUS_NOT_TINY_STREAM
//
// MessageText:
//
// The stream is not a tiny stream.
//
#define STATUS_NOT_TINY_STREAM           ((NTSTATUS)0xC0000226L)

//
// MessageId: STATUS_RECOVERY_FAILURE
//
// MessageText:
//
// A transaction recover failed.
//
#define STATUS_RECOVERY_FAILURE          ((NTSTATUS)0xC0000227L)

//
// MessageId: STATUS_STACK_OVERFLOW_READ
//
// MessageText:
//
// The request must be handled by the stack overflow code.
//
#define STATUS_STACK_OVERFLOW_READ       ((NTSTATUS)0xC0000228L)

//
// MessageId: STATUS_FAIL_CHECK
//
// MessageText:
//
// A consistency check failed.
//
#define STATUS_FAIL_CHECK                ((NTSTATUS)0xC0000229L)

//
// MessageId: STATUS_DUPLICATE_OBJECTID
//
// MessageText:
//
// The attempt to insert the ID in the index failed because the ID is already in the index.
//
#define STATUS_DUPLICATE_OBJECTID        ((NTSTATUS)0xC000022AL)

//
// MessageId: STATUS_OBJECTID_EXISTS
//
// MessageText:
//
// The attempt to set the object's ID failed because the object already has an ID.
//
#define STATUS_OBJECTID_EXISTS           ((NTSTATUS)0xC000022BL)

//
// MessageId: STATUS_CONVERT_TO_LARGE
//
// MessageText:
//
// Internal OFS status codes indicating how an allocation operation is handled. Either it is retried after the containing onode is moved or the extent stream is converted to a large stream.
//
#define STATUS_CONVERT_TO_LARGE          ((NTSTATUS)0xC000022CL)

//
// MessageId: STATUS_RETRY
//
// MessageText:
//
// The request needs to be retried.
//
#define STATUS_RETRY                     ((NTSTATUS)0xC000022DL)

//
// MessageId: STATUS_FOUND_OUT_OF_SCOPE
//
// MessageText:
//
// The attempt to find the object found an object matching by ID on the volume but it is out of the scope of the handle used for the operation.
//
#define STATUS_FOUND_OUT_OF_SCOPE        ((NTSTATUS)0xC000022EL)

//
// MessageId: STATUS_ALLOCATE_BUCKET
//
// MessageText:
//
// The bucket array must be grown. Retry transaction after doing so.
//
#define STATUS_ALLOCATE_BUCKET           ((NTSTATUS)0xC000022FL)

//
// MessageId: STATUS_PROPSET_NOT_FOUND
//
// MessageText:
//
// The property set specified does not exist on the object.
//
#define STATUS_PROPSET_NOT_FOUND         ((NTSTATUS)0xC0000230L)

//
// MessageId: STATUS_MARSHALL_OVERFLOW
//
// MessageText:
//
// The user/kernel marshalling buffer has overflowed.
//
#define STATUS_MARSHALL_OVERFLOW         ((NTSTATUS)0xC0000231L)

//
// MessageId: STATUS_INVALID_VARIANT
//
// MessageText:
//
// The supplied variant structure contains invalid data.
//
#define STATUS_INVALID_VARIANT           ((NTSTATUS)0xC0000232L)

//
// MessageId: STATUS_DOMAIN_CONTROLLER_NOT_FOUND
//
// MessageText:
//
// Could not find a domain controller for this domain.
//
#define STATUS_DOMAIN_CONTROLLER_NOT_FOUND ((NTSTATUS)0xC0000233L)

//
// MessageId: STATUS_ACCOUNT_LOCKED_OUT
//
// MessageText:
//
// The user account has been automatically locked because too many invalid logon attempts or password change attempts have been requested.
//
#define STATUS_ACCOUNT_LOCKED_OUT        ((NTSTATUS)0xC0000234L)    // ntsubauth

//
// MessageId: STATUS_HANDLE_NOT_CLOSABLE
//
// MessageText:
//
// NtClose was called on a handle that was protected from close via NtSetInformationObject.
//
#define STATUS_HANDLE_NOT_CLOSABLE       ((NTSTATUS)0xC0000235L)

//
// MessageId: STATUS_CONNECTION_REFUSED
//
// MessageText:
//
// The transport connection attempt was refused by the remote system.
//
#define STATUS_CONNECTION_REFUSED        ((NTSTATUS)0xC0000236L)

//
// MessageId: STATUS_GRACEFUL_DISCONNECT
//
// MessageText:
//
// The transport connection was gracefully closed.
//
#define STATUS_GRACEFUL_DISCONNECT       ((NTSTATUS)0xC0000237L)

//
// MessageId: STATUS_ADDRESS_ALREADY_ASSOCIATED
//
// MessageText:
//
// The transport endpoint already has an address associated with it.
//
#define STATUS_ADDRESS_ALREADY_ASSOCIATED ((NTSTATUS)0xC0000238L)

//
// MessageId: STATUS_ADDRESS_NOT_ASSOCIATED
//
// MessageText:
//
// An address has not yet been associated with the transport endpoint.
//
#define STATUS_ADDRESS_NOT_ASSOCIATED    ((NTSTATUS)0xC0000239L)

//
// MessageId: STATUS_CONNECTION_INVALID
//
// MessageText:
//
// An operation was attempted on a nonexistent transport connection.
//
#define STATUS_CONNECTION_INVALID        ((NTSTATUS)0xC000023AL)

//
// MessageId: STATUS_CONNECTION_ACTIVE
//
// MessageText:
//
// An invalid operation was attempted on an active transport connection.
//
#define STATUS_CONNECTION_ACTIVE         ((NTSTATUS)0xC000023BL)

//
// MessageId: STATUS_NETWORK_UNREACHABLE
//
// MessageText:
//
// The remote network is not reachable by the transport.
//
#define STATUS_NETWORK_UNREACHABLE       ((NTSTATUS)0xC000023CL)

//
// MessageId: STATUS_HOST_UNREACHABLE
//
// MessageText:
//
// The remote system is not reachable by the transport.
//
#define STATUS_HOST_UNREACHABLE          ((NTSTATUS)0xC000023DL)

//
// MessageId: STATUS_PROTOCOL_UNREACHABLE
//
// MessageText:
//
// The remote system does not support the transport protocol.
//
#define STATUS_PROTOCOL_UNREACHABLE      ((NTSTATUS)0xC000023EL)

//
// MessageId: STATUS_PORT_UNREACHABLE
//
// MessageText:
//
// No service is operating at the destination port of the transport on the remote system.
//
#define STATUS_PORT_UNREACHABLE          ((NTSTATUS)0xC000023FL)

//
// MessageId: STATUS_REQUEST_ABORTED
//
// MessageText:
//
// The request was aborted.
//
#define STATUS_REQUEST_ABORTED           ((NTSTATUS)0xC0000240L)

//
// MessageId: STATUS_CONNECTION_ABORTED
//
// MessageText:
//
// The transport connection was aborted by the local system.
//
#define STATUS_CONNECTION_ABORTED        ((NTSTATUS)0xC0000241L)

//
// MessageId: STATUS_BAD_COMPRESSION_BUFFER
//
// MessageText:
//
// The specified buffer contains ill-formed data.
//
#define STATUS_BAD_COMPRESSION_BUFFER    ((NTSTATUS)0xC0000242L)

//
// MessageId: STATUS_USER_MAPPED_FILE
//
// MessageText:
//
// The requested operation cannot be performed on a file with a user mapped section open.
//
#define STATUS_USER_MAPPED_FILE          ((NTSTATUS)0xC0000243L)

//
// MessageId: STATUS_AUDIT_FAILED
//
// MessageText:
//
// {Audit Failed}
// An attempt to generate a security audit failed.
//
#define STATUS_AUDIT_FAILED              ((NTSTATUS)0xC0000244L)

//
// MessageId: STATUS_TIMER_RESOLUTION_NOT_SET
//
// MessageText:
//
// The timer resolution was not previously set by the current process.
//
#define STATUS_TIMER_RESOLUTION_NOT_SET  ((NTSTATUS)0xC0000245L)

//
// MessageId: STATUS_CONNECTION_COUNT_LIMIT
//
// MessageText:
//
// A connection to the server could not be made because the limit on the number of concurrent connections for this account has been reached.
//
#define STATUS_CONNECTION_COUNT_LIMIT    ((NTSTATUS)0xC0000246L)

//
// MessageId: STATUS_LOGIN_TIME_RESTRICTION
//
// MessageText:
//
// Attempting to login during an unauthorized time of day for this account.
//
#define STATUS_LOGIN_TIME_RESTRICTION    ((NTSTATUS)0xC0000247L)

//
// MessageId: STATUS_LOGIN_WKSTA_RESTRICTION
//
// MessageText:
//
// The account is not authorized to login from this station.
//
#define STATUS_LOGIN_WKSTA_RESTRICTION   ((NTSTATUS)0xC0000248L)

//
// MessageId: STATUS_IMAGE_MP_UP_MISMATCH
//
// MessageText:
//
// {UP/MP Image Mismatch}
// The image %hs has been modified for use on a uniprocessor system, but you are running it on a multiprocessor machine.
// Please reinstall the image file.
//
#define STATUS_IMAGE_MP_UP_MISMATCH      ((NTSTATUS)0xC0000249L)

//
// MessageId: STATUS_INSUFFICIENT_LOGON_INFO
//
// MessageText:
//
// There is insufficient account information to log you on.
//
#define STATUS_INSUFFICIENT_LOGON_INFO   ((NTSTATUS)0xC0000250L)

//
// MessageId: STATUS_BAD_DLL_ENTRYPOINT
//
// MessageText:
//
// {Invalid DLL Entrypoint}
// The dynamic link library %hs is not written correctly. The stack pointer has been left in an inconsistent state. The entrypoint should be declared as WINAPI or STDCALL. Select YES to fail the DLL load. Select NO to continue execution. Selecting NO may cause the application to operate incorrectly.
//
#define STATUS_BAD_DLL_ENTRYPOINT        ((NTSTATUS)0xC0000251L)

//
// MessageId: STATUS_BAD_SERVICE_ENTRYPOINT
//
// MessageText:
//
// {Invalid Service Callback Entrypoint}
// The %hs service is not written correctly. The stack pointer has been left in an inconsistent state. The callback entrypoint should be declared as WINAPI or STDCALL. Selecting OK will cause the service to continue operation. However, the service process may operate incorrectly.
//
#define STATUS_BAD_SERVICE_ENTRYPOINT    ((NTSTATUS)0xC0000252L)

//
// MessageId: STATUS_LPC_REPLY_LOST
//
// MessageText:
//
// The server received the messages but did not send a reply.
//
#define STATUS_LPC_REPLY_LOST            ((NTSTATUS)0xC0000253L)

//
// MessageId: STATUS_IP_ADDRESS_CONFLICT1
//
// MessageText:
//
// There is an IP address conflict with another system on the network
//
#define STATUS_IP_ADDRESS_CONFLICT1      ((NTSTATUS)0xC0000254L)

//
// MessageId: STATUS_IP_ADDRESS_CONFLICT2
//
// MessageText:
//
// There is an IP address conflict with another system on the network
//
#define STATUS_IP_ADDRESS_CONFLICT2      ((NTSTATUS)0xC0000255L)

//
// MessageId: STATUS_REGISTRY_QUOTA_LIMIT
//
// MessageText:
//
// {Low On Registry Space}
// The system has reached the maximum size allowed for the system part of the registry. Additional storage requests will be ignored.
//
#define STATUS_REGISTRY_QUOTA_LIMIT      ((NTSTATUS)0xC0000256L)

//
// MessageId: STATUS_PATH_NOT_COVERED
//
// MessageText:
//
// The contacted server does not support the indicated part of the DFS namespace.
//
#define STATUS_PATH_NOT_COVERED          ((NTSTATUS)0xC0000257L)

//
// MessageId: STATUS_NO_CALLBACK_ACTIVE
//
// MessageText:
//
// A callback return system service cannot be executed when no callback is active.
//
#define STATUS_NO_CALLBACK_ACTIVE        ((NTSTATUS)0xC0000258L)

//
// MessageId: STATUS_LICENSE_QUOTA_EXCEEDED
//
// MessageText:
//
// The service being accessed is licensed for a particular number of connections. No more connections can be made to the service at this time because there are already as many connections as the service can accept.
//
#define STATUS_LICENSE_QUOTA_EXCEEDED    ((NTSTATUS)0xC0000259L)

//
// MessageId: STATUS_PWD_TOO_SHORT
//
// MessageText:
//
// The password provided is too short to meet the policy of your user account. Please choose a longer password.
//
#define STATUS_PWD_TOO_SHORT             ((NTSTATUS)0xC000025AL)

//
// MessageId: STATUS_PWD_TOO_RECENT
//
// MessageText:
//
// The policy of your user account does not allow you to change passwords too frequently. This is done to prevent users from changing back to a familiar, but potentially discovered, password. If you feel your password has been compromised then please contact your administrator immediately to have a new one assigned.
//
#define STATUS_PWD_TOO_RECENT            ((NTSTATUS)0xC000025BL)

//
// MessageId: STATUS_PWD_HISTORY_CONFLICT
//
// MessageText:
//
// You have attempted to change your password to one that you have used in the past. The policy of your user account does not allow this. Please select a password that you have not previously used.
//
#define STATUS_PWD_HISTORY_CONFLICT      ((NTSTATUS)0xC000025CL)

//
// MessageId: STATUS_PLUGPLAY_NO_DEVICE
//
// MessageText:
//
// You have attempted to load a legacy device driver while its device instance had been disabled.
//
#define STATUS_PLUGPLAY_NO_DEVICE        ((NTSTATUS)0xC000025EL)

//
// MessageId: STATUS_UNSUPPORTED_COMPRESSION
//
// MessageText:
//
// The specified compression format is unsupported.
//
#define STATUS_UNSUPPORTED_COMPRESSION   ((NTSTATUS)0xC000025FL)

//
// MessageId: STATUS_INVALID_HW_PROFILE
//
// MessageText:
//
// The specified hardware profile configuration is invalid.
//
#define STATUS_INVALID_HW_PROFILE        ((NTSTATUS)0xC0000260L)

//
// MessageId: STATUS_INVALID_PLUGPLAY_DEVICE_PATH
//
// MessageText:
//
// The specified Plug and Play registry device path is invalid.
//
#define STATUS_INVALID_PLUGPLAY_DEVICE_PATH ((NTSTATUS)0xC0000261L)

//
// MessageId: STATUS_DRIVER_ORDINAL_NOT_FOUND
//
// MessageText:
//
// {Driver Entry Point Not Found}
// The %hs device driver could not locate the ordinal %ld in driver %hs.
//
#define STATUS_DRIVER_ORDINAL_NOT_FOUND  ((NTSTATUS)0xC0000262L)

//
// MessageId: STATUS_DRIVER_ENTRYPOINT_NOT_FOUND
//
// MessageText:
//
// {Driver Entry Point Not Found}
// The %hs device driver could not locate the entry point %hs in driver %hs.
//
#define STATUS_DRIVER_ENTRYPOINT_NOT_FOUND ((NTSTATUS)0xC0000263L)

//
// MessageId: STATUS_RESOURCE_NOT_OWNED
//
// MessageText:
//
// {Application Error}
// The application attempted to release a resource it did not own. Click OK to terminate the application.
//
#define STATUS_RESOURCE_NOT_OWNED        ((NTSTATUS)0xC0000264L)

//
// MessageId: STATUS_TOO_MANY_LINKS
//
// MessageText:
//
// An attempt was made to create more links on a file than the file system supports.
//
#define STATUS_TOO_MANY_LINKS            ((NTSTATUS)0xC0000265L)

//
// MessageId: STATUS_QUOTA_LIST_INCONSISTENT
//
// MessageText:
//
// The specified quota list is internally inconsistent with its descriptor.
//
#define STATUS_QUOTA_LIST_INCONSISTENT   ((NTSTATUS)0xC0000266L)

//
// MessageId: STATUS_FILE_IS_OFFLINE
//
// MessageText:
//
// The specified file has been relocated to offline storage.
//
#define STATUS_FILE_IS_OFFLINE           ((NTSTATUS)0xC0000267L)

//
// MessageId: STATUS_EVALUATION_EXPIRATION
//
// MessageText:
//
// {Windows Evaluation Notification}
// The evaluation period for this installation of Windows has expired. This system will shutdown in 1 hour. To restore access to this installation of Windows, please upgrade this installation using a licensed distribution of this product.
//
#define STATUS_EVALUATION_EXPIRATION     ((NTSTATUS)0xC0000268L)

//
// MessageId: STATUS_ILLEGAL_DLL_RELOCATION
//
// MessageText:
//
// {Illegal System DLL Relocation}
// The system DLL %hs was relocated in memory. The application will not run properly. The relocation occurred because the DLL %hs occupied an address range reserved for Windows system DLLs. The vendor supplying the DLL should be contacted for a new DLL.
//
#define STATUS_ILLEGAL_DLL_RELOCATION    ((NTSTATUS)0xC0000269L)

//
// MessageId: STATUS_LICENSE_VIOLATION
//
// MessageText:
//
// {License Violation}
// The system has detected tampering with your registered product type. This is a violation of your software license. Tampering with product type is not permitted.
//
#define STATUS_LICENSE_VIOLATION         ((NTSTATUS)0xC000026AL)

//
// MessageId: STATUS_DLL_INIT_FAILED_LOGOFF
//
// MessageText:
//
// {DLL Initialization Failed}
// The application failed to initialize because the window station is shutting down.
//
#define STATUS_DLL_INIT_FAILED_LOGOFF    ((NTSTATUS)0xC000026BL)

//
// MessageId: STATUS_DRIVER_UNABLE_TO_LOAD
//
// MessageText:
//
// {Unable to Load Device Driver}
// %hs device driver could not be loaded.
// Error Status was 0x%x
//
#define STATUS_DRIVER_UNABLE_TO_LOAD     ((NTSTATUS)0xC000026CL)

//
// MessageId: STATUS_DFS_UNAVAILABLE
//
// MessageText:
//
// DFS is unavailable on the contacted server.
//
#define STATUS_DFS_UNAVAILABLE           ((NTSTATUS)0xC000026DL)

//
// MessageId: STATUS_VOLUME_DISMOUNTED
//
// MessageText:
//
// An operation was attempted to a volume after it was dismounted.
//
#define STATUS_VOLUME_DISMOUNTED         ((NTSTATUS)0xC000026EL)

//
// MessageId: STATUS_WX86_INTERNAL_ERROR
//
// MessageText:
//
// An internal error occurred in the Win32 x86 emulation subsystem.
//
#define STATUS_WX86_INTERNAL_ERROR       ((NTSTATUS)0xC000026FL)

//
// MessageId: STATUS_WX86_FLOAT_STACK_CHECK
//
// MessageText:
//
// Win32 x86 emulation subsystem Floating-point stack check.
//
#define STATUS_WX86_FLOAT_STACK_CHECK    ((NTSTATUS)0xC0000270L)

//
// MessageId: STATUS_VALIDATE_CONTINUE
//
// MessageText:
//
// The validation process needs to continue on to the next step.
//
#define STATUS_VALIDATE_CONTINUE         ((NTSTATUS)0xC0000271L)

//
// MessageId: STATUS_NO_MATCH
//
// MessageText:
//
// There was no match for the specified key in the index.
//
#define STATUS_NO_MATCH                  ((NTSTATUS)0xC0000272L)

//
// MessageId: STATUS_NO_MORE_MATCHES
//
// MessageText:
//
// There are no more matches for the current index enumeration.
//
#define STATUS_NO_MORE_MATCHES           ((NTSTATUS)0xC0000273L)

//
// MessageId: STATUS_NOT_A_REPARSE_POINT
//
// MessageText:
//
// The file or directory is not a reparse point.
//
#define STATUS_NOT_A_REPARSE_POINT       ((NTSTATUS)0xC0000275L)

//
// MessageId: STATUS_IO_REPARSE_TAG_INVALID
//
// MessageText:
//
// The Windows I/O reparse tag passed for the reparse point is invalid.
//
#define STATUS_IO_REPARSE_TAG_INVALID    ((NTSTATUS)0xC0000276L)

//
// MessageId: STATUS_IO_REPARSE_TAG_MISMATCH
//
// MessageText:
//
// The Windows I/O reparse tag does not match the one present in the reparse point.
//
#define STATUS_IO_REPARSE_TAG_MISMATCH   ((NTSTATUS)0xC0000277L)

//
// MessageId: STATUS_IO_REPARSE_DATA_INVALID
//
// MessageText:
//
// The user data passed for the reparse point is invalid.
//
#define STATUS_IO_REPARSE_DATA_INVALID   ((NTSTATUS)0xC0000278L)

//
// MessageId: STATUS_IO_REPARSE_TAG_NOT_HANDLED
//
// MessageText:
//
// The layered file system driver for this IO tag did not handle it when needed.
//
#define STATUS_IO_REPARSE_TAG_NOT_HANDLED ((NTSTATUS)0xC0000279L)

//
// MessageId: STATUS_PWD_TOO_LONG
//
// MessageText:
//
// The password provided is too long to meet the policy of your user account. Please choose a shorter password.
//
#define STATUS_PWD_TOO_LONG              ((NTSTATUS)0xC000027AL)

//
// MessageId: STATUS_STOWED_EXCEPTION
//
// MessageText:
//
// An application-internal exception has occurred.
//
#define STATUS_STOWED_EXCEPTION          ((NTSTATUS)0xC000027BL)

//
// MessageId: STATUS_CONTEXT_STOWED_EXCEPTION
//
// MessageText:
//
// An application-internal exception has occurred.
//
#define STATUS_CONTEXT_STOWED_EXCEPTION  ((NTSTATUS)0xC000027CL)

//
// MessageId: STATUS_REPARSE_POINT_NOT_RESOLVED
//
// MessageText:
//
// The symbolic link could not be resolved even though the initial file name is valid.
//
#define STATUS_REPARSE_POINT_NOT_RESOLVED ((NTSTATUS)0xC0000280L)

//
// MessageId: STATUS_DIRECTORY_IS_A_REPARSE_POINT
//
// MessageText:
//
// The directory is a reparse point.
//
#define STATUS_DIRECTORY_IS_A_REPARSE_POINT ((NTSTATUS)0xC0000281L)

//
// MessageId: STATUS_RANGE_LIST_CONFLICT
//
// MessageText:
//
// The range could not be added to the range list because of a conflict.
//
#define STATUS_RANGE_LIST_CONFLICT       ((NTSTATUS)0xC0000282L)

//
// MessageId: STATUS_SOURCE_ELEMENT_EMPTY
//
// MessageText:
//
// The specified medium changer source element contains no media.
//
#define STATUS_SOURCE_ELEMENT_EMPTY      ((NTSTATUS)0xC0000283L)

//
// MessageId: STATUS_DESTINATION_ELEMENT_FULL
//
// MessageText:
//
// The specified medium changer destination element already contains media.
//
#define STATUS_DESTINATION_ELEMENT_FULL  ((NTSTATUS)0xC0000284L)

//
// MessageId: STATUS_ILLEGAL_ELEMENT_ADDRESS
//
// MessageText:
//
// The specified medium changer element does not exist.
//
#define STATUS_ILLEGAL_ELEMENT_ADDRESS   ((NTSTATUS)0xC0000285L)

//
// MessageId: STATUS_MAGAZINE_NOT_PRESENT
//
// MessageText:
//
// The specified element is contained within a magazine that is no longer present.
//
#define STATUS_MAGAZINE_NOT_PRESENT      ((NTSTATUS)0xC0000286L)

//
// MessageId: STATUS_REINITIALIZATION_NEEDED
//
// MessageText:
//
// The device requires reinitialization due to hardware errors.
//
#define STATUS_REINITIALIZATION_NEEDED   ((NTSTATUS)0xC0000287L)

//
// MessageId: STATUS_DEVICE_REQUIRES_CLEANING
//
// MessageText:
//
// The device has indicated that cleaning is necessary.
//
#define STATUS_DEVICE_REQUIRES_CLEANING  ((NTSTATUS)0x80000288L)

//
// MessageId: STATUS_DEVICE_DOOR_OPEN
//
// MessageText:
//
// The device has indicated that its door is open. Further operations require it closed and secured.
//
#define STATUS_DEVICE_DOOR_OPEN          ((NTSTATUS)0x80000289L)

//
// MessageId: STATUS_ENCRYPTION_FAILED
//
// MessageText:
//
// The file encryption attempt failed.
//
#define STATUS_ENCRYPTION_FAILED         ((NTSTATUS)0xC000028AL)

//
// MessageId: STATUS_DECRYPTION_FAILED
//
// MessageText:
//
// The file decryption attempt failed.
//
#define STATUS_DECRYPTION_FAILED         ((NTSTATUS)0xC000028BL)

//
// MessageId: STATUS_RANGE_NOT_FOUND
//
// MessageText:
//
// The specified range could not be found in the range list.
//
#define STATUS_RANGE_NOT_FOUND           ((NTSTATUS)0xC000028CL)

//
// MessageId: STATUS_NO_RECOVERY_POLICY
//
// MessageText:
//
// There is no encryption recovery policy configured for this system.
//
#define STATUS_NO_RECOVERY_POLICY        ((NTSTATUS)0xC000028DL)

//
// MessageId: STATUS_NO_EFS
//
// MessageText:
//
// The required encryption driver is not loaded for this system.
//
#define STATUS_NO_EFS                    ((NTSTATUS)0xC000028EL)

//
// MessageId: STATUS_WRONG_EFS
//
// MessageText:
//
// The file was encrypted with a different encryption driver than is currently loaded.
//
#define STATUS_WRONG_EFS                 ((NTSTATUS)0xC000028FL)

//
// MessageId: STATUS_NO_USER_KEYS
//
// MessageText:
//
// There are no EFS keys defined for the user.
//
#define STATUS_NO_USER_KEYS              ((NTSTATUS)0xC0000290L)

//
// MessageId: STATUS_FILE_NOT_ENCRYPTED
//
// MessageText:
//
// The specified file is not encrypted.
//
#define STATUS_FILE_NOT_ENCRYPTED        ((NTSTATUS)0xC0000291L)

//
// MessageId: STATUS_NOT_EXPORT_FORMAT
//
// MessageText:
//
// The specified file is not in the defined EFS export format.
//
#define STATUS_NOT_EXPORT_FORMAT         ((NTSTATUS)0xC0000292L)

//
// MessageId: STATUS_FILE_ENCRYPTED
//
// MessageText:
//
// The specified file is encrypted and the user does not have the ability to decrypt it.
//
#define STATUS_FILE_ENCRYPTED            ((NTSTATUS)0xC0000293L)

//
// MessageId: STATUS_WAKE_SYSTEM
//
// MessageText:
//
// The system has awoken
//
#define STATUS_WAKE_SYSTEM               ((NTSTATUS)0x40000294L)

//
// MessageId: STATUS_WMI_GUID_NOT_FOUND
//
// MessageText:
//
// The guid passed was not recognized as valid by a WMI data provider.
//
#define STATUS_WMI_GUID_NOT_FOUND        ((NTSTATUS)0xC0000295L)

//
// MessageId: STATUS_WMI_INSTANCE_NOT_FOUND
//
// MessageText:
//
// The instance name passed was not recognized as valid by a WMI data provider.
//
#define STATUS_WMI_INSTANCE_NOT_FOUND    ((NTSTATUS)0xC0000296L)

//
// MessageId: STATUS_WMI_ITEMID_NOT_FOUND
//
// MessageText:
//
// The data item id passed was not recognized as valid by a WMI data provider.
//
#define STATUS_WMI_ITEMID_NOT_FOUND      ((NTSTATUS)0xC0000297L)

//
// MessageId: STATUS_WMI_TRY_AGAIN
//
// MessageText:
//
// The WMI request could not be completed and should be retried.
//
#define STATUS_WMI_TRY_AGAIN             ((NTSTATUS)0xC0000298L)

//
// MessageId: STATUS_SHARED_POLICY
//
// MessageText:
//
// The policy object is shared and can only be modified at the root
//
#define STATUS_SHARED_POLICY             ((NTSTATUS)0xC0000299L)

//
// MessageId: STATUS_POLICY_OBJECT_NOT_FOUND
//
// MessageText:
//
// The policy object does not exist when it should
//
#define STATUS_POLICY_OBJECT_NOT_FOUND   ((NTSTATUS)0xC000029AL)

//
// MessageId: STATUS_POLICY_ONLY_IN_DS
//
// MessageText:
//
// The requested policy information only lives in the Ds
//
#define STATUS_POLICY_ONLY_IN_DS         ((NTSTATUS)0xC000029BL)

//
// MessageId: STATUS_VOLUME_NOT_UPGRADED
//
// MessageText:
//
// The volume must be upgraded to enable this feature
//
#define STATUS_VOLUME_NOT_UPGRADED       ((NTSTATUS)0xC000029CL)

//
// MessageId: STATUS_REMOTE_STORAGE_NOT_ACTIVE
//
// MessageText:
//
// The remote storage service is not operational at this time.
//
#define STATUS_REMOTE_STORAGE_NOT_ACTIVE ((NTSTATUS)0xC000029DL)

//
// MessageId: STATUS_REMOTE_STORAGE_MEDIA_ERROR
//
// MessageText:
//
// The remote storage service encountered a media error.
//
#define STATUS_REMOTE_STORAGE_MEDIA_ERROR ((NTSTATUS)0xC000029EL)

//
// MessageId: STATUS_NO_TRACKING_SERVICE
//
// MessageText:
//
// The tracking (workstation) service is not running.
//
#define STATUS_NO_TRACKING_SERVICE       ((NTSTATUS)0xC000029FL)

//
// MessageId: STATUS_SERVER_SID_MISMATCH
//
// MessageText:
//
// The server process is running under a SID different than that required by client.
//
#define STATUS_SERVER_SID_MISMATCH       ((NTSTATUS)0xC00002A0L)

//
// Directory Service specific Errors
//
//
// MessageId: STATUS_DS_NO_ATTRIBUTE_OR_VALUE
//
// MessageText:
//
// The specified directory service attribute or value does not exist.
//
#define STATUS_DS_NO_ATTRIBUTE_OR_VALUE  ((NTSTATUS)0xC00002A1L)

//
// MessageId: STATUS_DS_INVALID_ATTRIBUTE_SYNTAX
//
// MessageText:
//
// The attribute syntax specified to the directory service is invalid.
//
#define STATUS_DS_INVALID_ATTRIBUTE_SYNTAX ((NTSTATUS)0xC00002A2L)

//
// MessageId: STATUS_DS_ATTRIBUTE_TYPE_UNDEFINED
//
// MessageText:
//
// The attribute type specified to the directory service is not defined.
//
#define STATUS_DS_ATTRIBUTE_TYPE_UNDEFINED ((NTSTATUS)0xC00002A3L)

//
// MessageId: STATUS_DS_ATTRIBUTE_OR_VALUE_EXISTS
//
// MessageText:
//
// The specified directory service attribute or value already exists.
//
#define STATUS_DS_ATTRIBUTE_OR_VALUE_EXISTS ((NTSTATUS)0xC00002A4L)

//
// MessageId: STATUS_DS_BUSY
//
// MessageText:
//
// The directory service is busy.
//
#define STATUS_DS_BUSY                   ((NTSTATUS)0xC00002A5L)

//
// MessageId: STATUS_DS_UNAVAILABLE
//
// MessageText:
//
// The directory service is not available.
//
#define STATUS_DS_UNAVAILABLE            ((NTSTATUS)0xC00002A6L)

//
// MessageId: STATUS_DS_NO_RIDS_ALLOCATED
//
// MessageText:
//
// The directory service was unable to allocate a relative identifier.
//
#define STATUS_DS_NO_RIDS_ALLOCATED      ((NTSTATUS)0xC00002A7L)

//
// MessageId: STATUS_DS_NO_MORE_RIDS
//
// MessageText:
//
// The directory service has exhausted the pool of relative identifiers.
//
#define STATUS_DS_NO_MORE_RIDS           ((NTSTATUS)0xC00002A8L)

//
// MessageId: STATUS_DS_INCORRECT_ROLE_OWNER
//
// MessageText:
//
// The requested operation could not be performed because the directory service is not the master for that type of operation.
//
#define STATUS_DS_INCORRECT_ROLE_OWNER   ((NTSTATUS)0xC00002A9L)

//
// MessageId: STATUS_DS_RIDMGR_INIT_ERROR
//
// MessageText:
//
// The directory service was unable to initialize the subsystem that allocates relative identifiers.
//
#define STATUS_DS_RIDMGR_INIT_ERROR      ((NTSTATUS)0xC00002AAL)

//
// MessageId: STATUS_DS_OBJ_CLASS_VIOLATION
//
// MessageText:
//
// The requested operation did not satisfy one or more constraints associated with the class of the object.
//
#define STATUS_DS_OBJ_CLASS_VIOLATION    ((NTSTATUS)0xC00002ABL)

//
// MessageId: STATUS_DS_CANT_ON_NON_LEAF
//
// MessageText:
//
// The directory service can perform the requested operation only on a leaf object.
//
#define STATUS_DS_CANT_ON_NON_LEAF       ((NTSTATUS)0xC00002ACL)

//
// MessageId: STATUS_DS_CANT_ON_RDN
//
// MessageText:
//
// The directory service cannot perform the requested operation on the Relatively Defined Name (RDN) attribute of an object.
//
#define STATUS_DS_CANT_ON_RDN            ((NTSTATUS)0xC00002ADL)

//
// MessageId: STATUS_DS_CANT_MOD_OBJ_CLASS
//
// MessageText:
//
// The directory service detected an attempt to modify the object class of an object.
//
#define STATUS_DS_CANT_MOD_OBJ_CLASS     ((NTSTATUS)0xC00002AEL)

//
// MessageId: STATUS_DS_CROSS_DOM_MOVE_FAILED
//
// MessageText:
//
// An error occurred while performing a cross domain move operation.
//
#define STATUS_DS_CROSS_DOM_MOVE_FAILED  ((NTSTATUS)0xC00002AFL)

//
// MessageId: STATUS_DS_GC_NOT_AVAILABLE
//
// MessageText:
//
// Unable to Contact the Global Catalog Server.
//
#define STATUS_DS_GC_NOT_AVAILABLE       ((NTSTATUS)0xC00002B0L)

//
// MessageId: STATUS_DIRECTORY_SERVICE_REQUIRED
//
// MessageText:
//
// The requested operation requires a directory service, and none was available.
//
#define STATUS_DIRECTORY_SERVICE_REQUIRED ((NTSTATUS)0xC00002B1L)

//
// MessageId: STATUS_REPARSE_ATTRIBUTE_CONFLICT
//
// MessageText:
//
// The reparse attribute cannot be set as it is incompatible with an existing attribute.
//
#define STATUS_REPARSE_ATTRIBUTE_CONFLICT ((NTSTATUS)0xC00002B2L)

//
// MessageId: STATUS_CANT_ENABLE_DENY_ONLY
//
// MessageText:
//
// A group marked use for deny only cannot be enabled.
//
#define STATUS_CANT_ENABLE_DENY_ONLY     ((NTSTATUS)0xC00002B3L)

//
// MessageId: STATUS_FLOAT_MULTIPLE_FAULTS
//
// MessageText:
//
// {EXCEPTION}
// Multiple floating point faults.
//
#define STATUS_FLOAT_MULTIPLE_FAULTS     ((NTSTATUS)0xC00002B4L)    // winnt

//
// MessageId: STATUS_FLOAT_MULTIPLE_TRAPS
//
// MessageText:
//
// {EXCEPTION}
// Multiple floating point traps.
//
#define STATUS_FLOAT_MULTIPLE_TRAPS      ((NTSTATUS)0xC00002B5L)    // winnt

//
// MessageId: STATUS_DEVICE_REMOVED
//
// MessageText:
//
// The device has been removed.
//
#define STATUS_DEVICE_REMOVED            ((NTSTATUS)0xC00002B6L)

//
// MessageId: STATUS_JOURNAL_DELETE_IN_PROGRESS
//
// MessageText:
//
// The volume change journal is being deleted.
//
#define STATUS_JOURNAL_DELETE_IN_PROGRESS ((NTSTATUS)0xC00002B7L)

//
// MessageId: STATUS_JOURNAL_NOT_ACTIVE
//
// MessageText:
//
// The volume change journal is not active.
//
#define STATUS_JOURNAL_NOT_ACTIVE        ((NTSTATUS)0xC00002B8L)

//
// MessageId: STATUS_NOINTERFACE
//
// MessageText:
//
// The requested interface is not supported.
//
#define STATUS_NOINTERFACE               ((NTSTATUS)0xC00002B9L)

//
// MessageId: STATUS_DS_RIDMGR_DISABLED
//
// MessageText:
//
// The directory service detected the subsystem that allocates relative identifiers is disabled. This can occur as a protective mechanism when the system determines a significant portion of relative identifiers (RIDs) have been exhausted. Please see http://go.microsoft.com/fwlink/?LinkId=228610 for recommended diagnostic steps and the procedure to re-enable account creation.
//
#define STATUS_DS_RIDMGR_DISABLED        ((NTSTATUS)0xC00002BAL)

//
// MessageId: STATUS_DS_ADMIN_LIMIT_EXCEEDED
//
// MessageText:
//
// A directory service resource limit has been exceeded.
//
#define STATUS_DS_ADMIN_LIMIT_EXCEEDED   ((NTSTATUS)0xC00002C1L)

//
// MessageId: STATUS_DRIVER_FAILED_SLEEP
//
// MessageText:
//
// {System Standby Failed}
// The driver %hs does not support standby mode. Updating this driver may allow the system to go to standby mode.
//
#define STATUS_DRIVER_FAILED_SLEEP       ((NTSTATUS)0xC00002C2L)

//
// MessageId: STATUS_MUTUAL_AUTHENTICATION_FAILED
//
// MessageText:
//
// Mutual Authentication failed. The server's password is out of date at the domain controller.
//
#define STATUS_MUTUAL_AUTHENTICATION_FAILED ((NTSTATUS)0xC00002C3L)

//
// MessageId: STATUS_CORRUPT_SYSTEM_FILE
//
// MessageText:
//
// The system file %1 has become corrupt and has been replaced.
//
#define STATUS_CORRUPT_SYSTEM_FILE       ((NTSTATUS)0xC00002C4L)

//
// MessageId: STATUS_DATATYPE_MISALIGNMENT_ERROR
//
// MessageText:
//
// {EXCEPTION}
// Alignment Error
// A datatype misalignment error was detected in a load or store instruction.
//
#define STATUS_DATATYPE_MISALIGNMENT_ERROR ((NTSTATUS)0xC00002C5L)    

//
// MessageId: STATUS_WMI_READ_ONLY
//
// MessageText:
//
// The WMI data item or data block is read only.
//
#define STATUS_WMI_READ_ONLY             ((NTSTATUS)0xC00002C6L)

//
// MessageId: STATUS_WMI_SET_FAILURE
//
// MessageText:
//
// The WMI data item or data block could not be changed.
//
#define STATUS_WMI_SET_FAILURE           ((NTSTATUS)0xC00002C7L)

//
// MessageId: STATUS_COMMITMENT_MINIMUM
//
// MessageText:
//
// {Virtual Memory Minimum Too Low}
// Your system is low on virtual memory. Windows is increasing the size of your virtual memory paging file. During this process, memory requests for some applications may be denied. For more information, see Help.
//
#define STATUS_COMMITMENT_MINIMUM        ((NTSTATUS)0xC00002C8L)

//
// MessageId: STATUS_REG_NAT_CONSUMPTION
//
// MessageText:
//
// {EXCEPTION}
// Register NaT consumption faults.
// A NaT value is consumed on a non speculative instruction.
//
#define STATUS_REG_NAT_CONSUMPTION       ((NTSTATUS)0xC00002C9L)    // winnt

//
// MessageId: STATUS_TRANSPORT_FULL
//
// MessageText:
//
// The medium changer's transport element contains media, which is causing the operation to fail.
//
#define STATUS_TRANSPORT_FULL            ((NTSTATUS)0xC00002CAL)

//
// MessageId: STATUS_DS_SAM_INIT_FAILURE
//
// MessageText:
//
// Security Accounts Manager initialization failed because of the following error:
// %hs
// Error Status: 0x%x.
// Please shutdown this system and reboot into Directory Services Restore Mode, check the event log for more detailed information.
//
#define STATUS_DS_SAM_INIT_FAILURE       ((NTSTATUS)0xC00002CBL)

//
// MessageId: STATUS_ONLY_IF_CONNECTED
//
// MessageText:
//
// This operation is supported only when you are connected to the server.
//
#define STATUS_ONLY_IF_CONNECTED         ((NTSTATUS)0xC00002CCL)

//
// MessageId: STATUS_DS_SENSITIVE_GROUP_VIOLATION
//
// MessageText:
//
// Only an administrator can modify the membership list of an administrative group.
//
#define STATUS_DS_SENSITIVE_GROUP_VIOLATION ((NTSTATUS)0xC00002CDL)

//
// MessageId: STATUS_PNP_RESTART_ENUMERATION
//
// MessageText:
//
// A device was removed so enumeration must be restarted.
//
#define STATUS_PNP_RESTART_ENUMERATION   ((NTSTATUS)0xC00002CEL)

//
// MessageId: STATUS_JOURNAL_ENTRY_DELETED
//
// MessageText:
//
// The journal entry has been deleted from the journal.
//
#define STATUS_JOURNAL_ENTRY_DELETED     ((NTSTATUS)0xC00002CFL)

//
// MessageId: STATUS_DS_CANT_MOD_PRIMARYGROUPID
//
// MessageText:
//
// Cannot change the primary group ID of a domain controller account.
//
#define STATUS_DS_CANT_MOD_PRIMARYGROUPID ((NTSTATUS)0xC00002D0L)

//
// MessageId: STATUS_SYSTEM_IMAGE_BAD_SIGNATURE
//
// MessageText:
//
// {Fatal System Error}
// The system image %s is not properly signed. The file has been replaced with the signed file. The system has been shut down.
//
#define STATUS_SYSTEM_IMAGE_BAD_SIGNATURE ((NTSTATUS)0xC00002D1L)

//
// MessageId: STATUS_PNP_REBOOT_REQUIRED
//
// MessageText:
//
// Device will not start without a reboot.
//
#define STATUS_PNP_REBOOT_REQUIRED       ((NTSTATUS)0xC00002D2L)

//
// MessageId: STATUS_POWER_STATE_INVALID
//
// MessageText:
//
// Current device power state cannot support this request.
//
#define STATUS_POWER_STATE_INVALID       ((NTSTATUS)0xC00002D3L)

//
// MessageId: STATUS_DS_INVALID_GROUP_TYPE
//
// MessageText:
//
// The specified group type is invalid.
//
#define STATUS_DS_INVALID_GROUP_TYPE     ((NTSTATUS)0xC00002D4L)

//
// MessageId: STATUS_DS_NO_NEST_GLOBALGROUP_IN_MIXEDDOMAIN
//
// MessageText:
//
// In mixed domain no nesting of global group if group is security enabled.
//
#define STATUS_DS_NO_NEST_GLOBALGROUP_IN_MIXEDDOMAIN ((NTSTATUS)0xC00002D5L)

//
// MessageId: STATUS_DS_NO_NEST_LOCALGROUP_IN_MIXEDDOMAIN
//
// MessageText:
//
// In mixed domain, cannot nest local groups with other local groups, if the group is security enabled.
//
#define STATUS_DS_NO_NEST_LOCALGROUP_IN_MIXEDDOMAIN ((NTSTATUS)0xC00002D6L)

//
// MessageId: STATUS_DS_GLOBAL_CANT_HAVE_LOCAL_MEMBER
//
// MessageText:
//
// A global group cannot have a local group as a member.
//
#define STATUS_DS_GLOBAL_CANT_HAVE_LOCAL_MEMBER ((NTSTATUS)0xC00002D7L)

//
// MessageId: STATUS_DS_GLOBAL_CANT_HAVE_UNIVERSAL_MEMBER
//
// MessageText:
//
// A global group cannot have a universal group as a member.
//
#define STATUS_DS_GLOBAL_CANT_HAVE_UNIVERSAL_MEMBER ((NTSTATUS)0xC00002D8L)

//
// MessageId: STATUS_DS_UNIVERSAL_CANT_HAVE_LOCAL_MEMBER
//
// MessageText:
//
// A universal group cannot have a local group as a member.
//
#define STATUS_DS_UNIVERSAL_CANT_HAVE_LOCAL_MEMBER ((NTSTATUS)0xC00002D9L)

//
// MessageId: STATUS_DS_GLOBAL_CANT_HAVE_CROSSDOMAIN_MEMBER
//
// MessageText:
//
// A global group cannot have a cross domain member.
//
#define STATUS_DS_GLOBAL_CANT_HAVE_CROSSDOMAIN_MEMBER ((NTSTATUS)0xC00002DAL)

//
// MessageId: STATUS_DS_LOCAL_CANT_HAVE_CROSSDOMAIN_LOCAL_MEMBER
//
// MessageText:
//
// A local group cannot have another cross domain local group as a member.
//
#define STATUS_DS_LOCAL_CANT_HAVE_CROSSDOMAIN_LOCAL_MEMBER ((NTSTATUS)0xC00002DBL)

//
// MessageId: STATUS_DS_HAVE_PRIMARY_MEMBERS
//
// MessageText:
//
// Cannot change to security disabled group because of having primary members in this group.
//
#define STATUS_DS_HAVE_PRIMARY_MEMBERS   ((NTSTATUS)0xC00002DCL)

//
// MessageId: STATUS_WMI_NOT_SUPPORTED
//
// MessageText:
//
// The WMI operation is not supported by the data block or method.
//
#define STATUS_WMI_NOT_SUPPORTED         ((NTSTATUS)0xC00002DDL)

//
// MessageId: STATUS_INSUFFICIENT_POWER
//
// MessageText:
//
// There is not enough power to complete the requested operation.
//
#define STATUS_INSUFFICIENT_POWER        ((NTSTATUS)0xC00002DEL)

//
// MessageId: STATUS_SAM_NEED_BOOTKEY_PASSWORD
//
// MessageText:
//
// Security Account Manager needs to get the boot password.
//
#define STATUS_SAM_NEED_BOOTKEY_PASSWORD ((NTSTATUS)0xC00002DFL)

//
// MessageId: STATUS_SAM_NEED_BOOTKEY_FLOPPY
//
// MessageText:
//
// Security Account Manager needs to get the boot key from floppy disk.
//
#define STATUS_SAM_NEED_BOOTKEY_FLOPPY   ((NTSTATUS)0xC00002E0L)

//
// MessageId: STATUS_DS_CANT_START
//
// MessageText:
//
// Directory Service cannot start.
//
#define STATUS_DS_CANT_START             ((NTSTATUS)0xC00002E1L)

//
// MessageId: STATUS_DS_INIT_FAILURE
//
// MessageText:
//
// Directory Services could not start because of the following error:
// %hs
// Error Status: 0x%x.
// Please shutdown this system and reboot into Directory Services Restore Mode, check the event log for more detailed information.
//
#define STATUS_DS_INIT_FAILURE           ((NTSTATUS)0xC00002E2L)

//
// MessageId: STATUS_SAM_INIT_FAILURE
//
// MessageText:
//
// Security Accounts Manager initialization failed because of the following error:
// %hs
// Error Status: 0x%x.
// Please click OK to shutdown this system and reboot into Safe Mode, check the event log for more detailed information.
//
#define STATUS_SAM_INIT_FAILURE          ((NTSTATUS)0xC00002E3L)

//
// MessageId: STATUS_DS_GC_REQUIRED
//
// MessageText:
//
// The requested operation can be performed only on a global catalog server.
//
#define STATUS_DS_GC_REQUIRED            ((NTSTATUS)0xC00002E4L)

//
// MessageId: STATUS_DS_LOCAL_MEMBER_OF_LOCAL_ONLY
//
// MessageText:
//
// A local group can only be a member of other local groups in the same domain.
//
#define STATUS_DS_LOCAL_MEMBER_OF_LOCAL_ONLY ((NTSTATUS)0xC00002E5L)

//
// MessageId: STATUS_DS_NO_FPO_IN_UNIVERSAL_GROUPS
//
// MessageText:
//
// Foreign security principals cannot be members of universal groups.
//
#define STATUS_DS_NO_FPO_IN_UNIVERSAL_GROUPS ((NTSTATUS)0xC00002E6L)

//
// MessageId: STATUS_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED
//
// MessageText:
//
// Your computer could not be joined to the domain. You have exceeded the maximum number of computer accounts you are allowed to create in this domain. Contact your system administrator to have this limit reset or increased.
//
#define STATUS_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED ((NTSTATUS)0xC00002E7L)

//
// MessageId: STATUS_MULTIPLE_FAULT_VIOLATION
//
// MessageText:
//
//  STATUS_MULTIPLE_FAULT_VIOLATION
//
#define STATUS_MULTIPLE_FAULT_VIOLATION  ((NTSTATUS)0xC00002E8L)

//
// MessageId: STATUS_CURRENT_DOMAIN_NOT_ALLOWED
//
// MessageText:
//
// This operation cannot be performed on the current domain.
//
#define STATUS_CURRENT_DOMAIN_NOT_ALLOWED ((NTSTATUS)0xC00002E9L)

//
// MessageId: STATUS_CANNOT_MAKE
//
// MessageText:
//
// The directory or file cannot be created.
//
#define STATUS_CANNOT_MAKE               ((NTSTATUS)0xC00002EAL)

//
// MessageId: STATUS_SYSTEM_SHUTDOWN
//
// MessageText:
//
// The system is in the process of shutting down.
//
#define STATUS_SYSTEM_SHUTDOWN           ((NTSTATUS)0xC00002EBL)

//
// MessageId: STATUS_DS_INIT_FAILURE_CONSOLE
//
// MessageText:
//
// Directory Services could not start because of the following error:
// %hs
// Error Status: 0x%x.
// Please click OK to shutdown the system. You can use the recovery console to diagnose the system further.
//
#define STATUS_DS_INIT_FAILURE_CONSOLE   ((NTSTATUS)0xC00002ECL)

//
// MessageId: STATUS_DS_SAM_INIT_FAILURE_CONSOLE
//
// MessageText:
//
// Security Accounts Manager initialization failed because of the following error:
// %hs
// Error Status: 0x%x.
// Please click OK to shutdown the system. You can use the recovery console to diagnose the system further.
//
#define STATUS_DS_SAM_INIT_FAILURE_CONSOLE ((NTSTATUS)0xC00002EDL)

//
// MessageId: STATUS_UNFINISHED_CONTEXT_DELETED
//
// MessageText:
//
// A security context was deleted before the context was completed. This is considered a logon failure.
//
#define STATUS_UNFINISHED_CONTEXT_DELETED ((NTSTATUS)0xC00002EEL)

//
// MessageId: STATUS_NO_TGT_REPLY
//
// MessageText:
//
// The client is trying to negotiate a context and the server requires user-to-user but didn't send a TGT reply.
//
#define STATUS_NO_TGT_REPLY              ((NTSTATUS)0xC00002EFL)

//
// MessageId: STATUS_OBJECTID_NOT_FOUND
//
// MessageText:
//
// An object ID was not found in the file.
//
#define STATUS_OBJECTID_NOT_FOUND        ((NTSTATUS)0xC00002F0L)

//
// MessageId: STATUS_NO_IP_ADDRESSES
//
// MessageText:
//
// Unable to accomplish the requested task because the local machine does not have any IP addresses.
//
#define STATUS_NO_IP_ADDRESSES           ((NTSTATUS)0xC00002F1L)

//
// MessageId: STATUS_WRONG_CREDENTIAL_HANDLE
//
// MessageText:
//
// The supplied credential handle does not match the credential associated with the security context.
//
#define STATUS_WRONG_CREDENTIAL_HANDLE   ((NTSTATUS)0xC00002F2L)

//
// MessageId: STATUS_CRYPTO_SYSTEM_INVALID
//
// MessageText:
//
// The crypto system or checksum function is invalid because a required function is unavailable.
//
#define STATUS_CRYPTO_SYSTEM_INVALID     ((NTSTATUS)0xC00002F3L)

//
// MessageId: STATUS_MAX_REFERRALS_EXCEEDED
//
// MessageText:
//
// The number of maximum ticket referrals has been exceeded.
//
#define STATUS_MAX_REFERRALS_EXCEEDED    ((NTSTATUS)0xC00002F4L)

//
// MessageId: STATUS_MUST_BE_KDC
//
// MessageText:
//
// The local machine must be a Kerberos KDC (domain controller) and it is not.
//
#define STATUS_MUST_BE_KDC               ((NTSTATUS)0xC00002F5L)

//
// MessageId: STATUS_STRONG_CRYPTO_NOT_SUPPORTED
//
// MessageText:
//
// The other end of the security negotiation is requires strong crypto but it is not supported on the local machine.
//
#define STATUS_STRONG_CRYPTO_NOT_SUPPORTED ((NTSTATUS)0xC00002F6L)

//
// MessageId: STATUS_TOO_MANY_PRINCIPALS
//
// MessageText:
//
// The KDC reply contained more than one principal name.
//
#define STATUS_TOO_MANY_PRINCIPALS       ((NTSTATUS)0xC00002F7L)

//
// MessageId: STATUS_NO_PA_DATA
//
// MessageText:
//
// Expected to find PA data for a hint of what etype to use, but it was not found.
//
#define STATUS_NO_PA_DATA                ((NTSTATUS)0xC00002F8L)

//
// MessageId: STATUS_PKINIT_NAME_MISMATCH
//
// MessageText:
//
// The client certificate does not contain a valid UPN, or does not match the client name in the logon request. Please contact your administrator.
//
#define STATUS_PKINIT_NAME_MISMATCH      ((NTSTATUS)0xC00002F9L)

//
// MessageId: STATUS_SMARTCARD_LOGON_REQUIRED
//
// MessageText:
//
// Smartcard logon is required and was not used.
//
#define STATUS_SMARTCARD_LOGON_REQUIRED  ((NTSTATUS)0xC00002FAL)

//
// MessageId: STATUS_KDC_INVALID_REQUEST
//
// MessageText:
//
// An invalid request was sent to the KDC.
//
#define STATUS_KDC_INVALID_REQUEST       ((NTSTATUS)0xC00002FBL)

//
// MessageId: STATUS_KDC_UNABLE_TO_REFER
//
// MessageText:
//
// The KDC was unable to generate a referral for the service requested.
//
#define STATUS_KDC_UNABLE_TO_REFER       ((NTSTATUS)0xC00002FCL)

//
// MessageId: STATUS_KDC_UNKNOWN_ETYPE
//
// MessageText:
//
// The encryption type requested is not supported by the KDC.
//
#define STATUS_KDC_UNKNOWN_ETYPE         ((NTSTATUS)0xC00002FDL)

//
// MessageId: STATUS_SHUTDOWN_IN_PROGRESS
//
// MessageText:
//
// A system shutdown is in progress.
//
#define STATUS_SHUTDOWN_IN_PROGRESS      ((NTSTATUS)0xC00002FEL)

//
// MessageId: STATUS_SERVER_SHUTDOWN_IN_PROGRESS
//
// MessageText:
//
// The server machine is shutting down.
//
#define STATUS_SERVER_SHUTDOWN_IN_PROGRESS ((NTSTATUS)0xC00002FFL)

//
// MessageId: STATUS_NOT_SUPPORTED_ON_SBS
//
// MessageText:
//
// This operation is not supported on a computer running Windows Server 2003 for Small Business Server
//
#define STATUS_NOT_SUPPORTED_ON_SBS      ((NTSTATUS)0xC0000300L)

//
// MessageId: STATUS_WMI_GUID_DISCONNECTED
//
// MessageText:
//
// The WMI GUID is no longer available
//
#define STATUS_WMI_GUID_DISCONNECTED     ((NTSTATUS)0xC0000301L)

//
// MessageId: STATUS_WMI_ALREADY_DISABLED
//
// MessageText:
//
// Collection or events for the WMI GUID is already disabled.
//
#define STATUS_WMI_ALREADY_DISABLED      ((NTSTATUS)0xC0000302L)

//
// MessageId: STATUS_WMI_ALREADY_ENABLED
//
// MessageText:
//
// Collection or events for the WMI GUID is already enabled.
//
#define STATUS_WMI_ALREADY_ENABLED       ((NTSTATUS)0xC0000303L)

//
// MessageId: STATUS_MFT_TOO_FRAGMENTED
//
// MessageText:
//
// The Master File Table on the volume is too fragmented to complete this operation.
//
#define STATUS_MFT_TOO_FRAGMENTED        ((NTSTATUS)0xC0000304L)

//
// MessageId: STATUS_COPY_PROTECTION_FAILURE
//
// MessageText:
//
// Copy protection failure.
//
#define STATUS_COPY_PROTECTION_FAILURE   ((NTSTATUS)0xC0000305L)

//
// MessageId: STATUS_CSS_AUTHENTICATION_FAILURE
//
// MessageText:
//
// Copy protection error - DVD CSS Authentication failed.
//
#define STATUS_CSS_AUTHENTICATION_FAILURE ((NTSTATUS)0xC0000306L)

//
// MessageId: STATUS_CSS_KEY_NOT_PRESENT
//
// MessageText:
//
// Copy protection error - The given sector does not contain a valid key.
//
#define STATUS_CSS_KEY_NOT_PRESENT       ((NTSTATUS)0xC0000307L)

//
// MessageId: STATUS_CSS_KEY_NOT_ESTABLISHED
//
// MessageText:
//
// Copy protection error - DVD session key not established.
//
#define STATUS_CSS_KEY_NOT_ESTABLISHED   ((NTSTATUS)0xC0000308L)

//
// MessageId: STATUS_CSS_SCRAMBLED_SECTOR
//
// MessageText:
//
// Copy protection error - The read failed because the sector is encrypted.
//
#define STATUS_CSS_SCRAMBLED_SECTOR      ((NTSTATUS)0xC0000309L)

//
// MessageId: STATUS_CSS_REGION_MISMATCH
//
// MessageText:
//
// Copy protection error - The given DVD's region does not correspond to the
// region setting of the drive.
//
#define STATUS_CSS_REGION_MISMATCH       ((NTSTATUS)0xC000030AL)

//
// MessageId: STATUS_CSS_RESETS_EXHAUSTED
//
// MessageText:
//
// Copy protection error - The drive's region setting may be permanent.
//
#define STATUS_CSS_RESETS_EXHAUSTED      ((NTSTATUS)0xC000030BL)

//
// MessageId: STATUS_PASSWORD_CHANGE_REQUIRED
//
// MessageText:
//
// EAS policy requires that the user change their password before this operation can be performed.
//
#define STATUS_PASSWORD_CHANGE_REQUIRED  ((NTSTATUS)0xC000030CL)

//
// MessageId: STATUS_LOST_MODE_LOGON_RESTRICTION
//
// MessageText:
//
// An administrator has restricted sign in. To sign in, make sure your device is connected to the Internet, and have your administrator sign in first.
//
#define STATUS_LOST_MODE_LOGON_RESTRICTION ((NTSTATUS)0xC000030DL)

/*++

 MessageId's 0x030e - 0x031f (inclusive) are reserved for future **STORAGE**
 copy protection errors.

--*/
//
// MessageId: STATUS_PKINIT_FAILURE
//
// MessageText:
//
// The Kerberos protocol encountered an error while validating the KDC certificate during logon. There is more information in the system event log.
//
#define STATUS_PKINIT_FAILURE            ((NTSTATUS)0xC0000320L)

//
// MessageId: STATUS_SMARTCARD_SUBSYSTEM_FAILURE
//
// MessageText:
//
// The Kerberos protocol encountered an error while attempting to utilize the smartcard subsystem.
//
#define STATUS_SMARTCARD_SUBSYSTEM_FAILURE ((NTSTATUS)0xC0000321L)

//
// MessageId: STATUS_NO_KERB_KEY
//
// MessageText:
//
// The target server does not have acceptable Kerberos credentials.
//
#define STATUS_NO_KERB_KEY               ((NTSTATUS)0xC0000322L)

/*++

 MessageId's 0x0323 - 0x034f (inclusive) are reserved for other future copy
 protection errors.

--*/
//
// MessageId: STATUS_HOST_DOWN
//
// MessageText:
//
// The transport determined that the remote system is down.
//
#define STATUS_HOST_DOWN                 ((NTSTATUS)0xC0000350L)

//
// MessageId: STATUS_UNSUPPORTED_PREAUTH
//
// MessageText:
//
// An unsupported preauthentication mechanism was presented to the Kerberos package.
//
#define STATUS_UNSUPPORTED_PREAUTH       ((NTSTATUS)0xC0000351L)

//
// MessageId: STATUS_EFS_ALG_BLOB_TOO_BIG
//
// MessageText:
//
// The encryption algorithm used on the source file needs a bigger key buffer than the one used on the destination file.
//
#define STATUS_EFS_ALG_BLOB_TOO_BIG      ((NTSTATUS)0xC0000352L)

//
// MessageId: STATUS_PORT_NOT_SET
//
// MessageText:
//
// An attempt to remove a process's DebugPort was made, but a port was not already associated with the process.
//
#define STATUS_PORT_NOT_SET              ((NTSTATUS)0xC0000353L)

//
// MessageId: STATUS_DEBUGGER_INACTIVE
//
// MessageText:
//
// Debugger Inactive: Windows may have been started without kernel debugging enabled.
//
#define STATUS_DEBUGGER_INACTIVE         ((NTSTATUS)0xC0000354L)

//
// MessageId: STATUS_DS_VERSION_CHECK_FAILURE
//
// MessageText:
//
// This version of Windows is not compatible with the behavior version of directory forest, domain or domain controller.
//
#define STATUS_DS_VERSION_CHECK_FAILURE  ((NTSTATUS)0xC0000355L)

//
// MessageId: STATUS_AUDITING_DISABLED
//
// MessageText:
//
// The specified event is currently not being audited.
//
#define STATUS_AUDITING_DISABLED         ((NTSTATUS)0xC0000356L)

//
// MessageId: STATUS_PRENT4_MACHINE_ACCOUNT
//
// MessageText:
//
// The machine account was created pre-NT4. The account needs to be recreated.
//
#define STATUS_PRENT4_MACHINE_ACCOUNT    ((NTSTATUS)0xC0000357L)

//
// MessageId: STATUS_DS_AG_CANT_HAVE_UNIVERSAL_MEMBER
//
// MessageText:
//
// A account group cannot have a universal group as a member.
//
#define STATUS_DS_AG_CANT_HAVE_UNIVERSAL_MEMBER ((NTSTATUS)0xC0000358L)

//
// MessageId: STATUS_INVALID_IMAGE_WIN_32
//
// MessageText:
//
// The specified image file did not have the correct format, it appears to be a 32-bit Windows image.
//
#define STATUS_INVALID_IMAGE_WIN_32      ((NTSTATUS)0xC0000359L)

//
// MessageId: STATUS_INVALID_IMAGE_WIN_64
//
// MessageText:
//
// The specified image file did not have the correct format, it appears to be a 64-bit Windows image.
//
#define STATUS_INVALID_IMAGE_WIN_64      ((NTSTATUS)0xC000035AL)

//
// MessageId: STATUS_BAD_BINDINGS
//
// MessageText:
//
// Client's supplied SSPI channel bindings were incorrect.
//
#define STATUS_BAD_BINDINGS              ((NTSTATUS)0xC000035BL)

//
// MessageId: STATUS_NETWORK_SESSION_EXPIRED
//
// MessageText:
//
// The client's session has expired, so the client must reauthenticate to continue accessing the remote resources.
//
#define STATUS_NETWORK_SESSION_EXPIRED   ((NTSTATUS)0xC000035CL)

//
// MessageId: STATUS_APPHELP_BLOCK
//
// MessageText:
//
// AppHelp dialog canceled thus preventing the application from starting.
//
#define STATUS_APPHELP_BLOCK             ((NTSTATUS)0xC000035DL)

//
// MessageId: STATUS_ALL_SIDS_FILTERED
//
// MessageText:
//
// The SID filtering operation removed all SIDs.
//
#define STATUS_ALL_SIDS_FILTERED         ((NTSTATUS)0xC000035EL)

//
// MessageId: STATUS_NOT_SAFE_MODE_DRIVER
//
// MessageText:
//
// The driver was not loaded because the system is booting into safe mode.
//
#define STATUS_NOT_SAFE_MODE_DRIVER      ((NTSTATUS)0xC000035FL)

//
// MessageId: STATUS_ACCESS_DISABLED_BY_POLICY_DEFAULT
//
// MessageText:
//
// Access to %1 has been restricted by your Administrator by the default software restriction policy level.
//
#define STATUS_ACCESS_DISABLED_BY_POLICY_DEFAULT ((NTSTATUS)0xC0000361L)

//
// MessageId: STATUS_ACCESS_DISABLED_BY_POLICY_PATH
//
// MessageText:
//
// Access to %1 has been restricted by your Administrator by location with policy rule %2 placed on path %3
//
#define STATUS_ACCESS_DISABLED_BY_POLICY_PATH ((NTSTATUS)0xC0000362L)

//
// MessageId: STATUS_ACCESS_DISABLED_BY_POLICY_PUBLISHER
//
// MessageText:
//
// Access to %1 has been restricted by your Administrator by software publisher policy.
//
#define STATUS_ACCESS_DISABLED_BY_POLICY_PUBLISHER ((NTSTATUS)0xC0000363L)

//
// MessageId: STATUS_ACCESS_DISABLED_BY_POLICY_OTHER
//
// MessageText:
//
// Access to %1 has been restricted by your Administrator by policy rule %2.
//
#define STATUS_ACCESS_DISABLED_BY_POLICY_OTHER ((NTSTATUS)0xC0000364L)

//
// MessageId: STATUS_FAILED_DRIVER_ENTRY
//
// MessageText:
//
// The driver was not loaded because it failed its initialization call.
//
#define STATUS_FAILED_DRIVER_ENTRY       ((NTSTATUS)0xC0000365L)

//
// MessageId: STATUS_DEVICE_ENUMERATION_ERROR
//
// MessageText:
//
// The "%hs" encountered an error while applying power or reading the device configuration. This may be caused by a failure of your hardware or by a poor connection.
//
#define STATUS_DEVICE_ENUMERATION_ERROR  ((NTSTATUS)0xC0000366L)

//
// MessageId: STATUS_MOUNT_POINT_NOT_RESOLVED
//
// MessageText:
//
// The create operation failed because the name contained at least one mount point which resolves to a volume to which the specified device object is not attached.
//
#define STATUS_MOUNT_POINT_NOT_RESOLVED  ((NTSTATUS)0xC0000368L)

//
// MessageId: STATUS_INVALID_DEVICE_OBJECT_PARAMETER
//
// MessageText:
//
// The device object parameter is either not a valid device object or is not attached to the volume specified by the file name.
//
#define STATUS_INVALID_DEVICE_OBJECT_PARAMETER ((NTSTATUS)0xC0000369L)

//
// MessageId: STATUS_MCA_OCCURED
//
// MessageText:
//
// A Machine Check Error has occurred. Please check the system eventlog for additional information.
//
#define STATUS_MCA_OCCURED               ((NTSTATUS)0xC000036AL)

//
// MessageId: STATUS_DRIVER_BLOCKED_CRITICAL
//
// MessageText:
//
// Driver %2 has been blocked from loading.
//
#define STATUS_DRIVER_BLOCKED_CRITICAL   ((NTSTATUS)0xC000036BL)

//
// MessageId: STATUS_DRIVER_BLOCKED
//
// MessageText:
//
// Driver %2 has been blocked from loading.
//
#define STATUS_DRIVER_BLOCKED            ((NTSTATUS)0xC000036CL)

//
// MessageId: STATUS_DRIVER_DATABASE_ERROR
//
// MessageText:
//
// There was error [%2] processing the driver database.
//
#define STATUS_DRIVER_DATABASE_ERROR     ((NTSTATUS)0xC000036DL)

//
// MessageId: STATUS_SYSTEM_HIVE_TOO_LARGE
//
// MessageText:
//
// System hive size has exceeded its limit.
//
#define STATUS_SYSTEM_HIVE_TOO_LARGE     ((NTSTATUS)0xC000036EL)

//
// MessageId: STATUS_INVALID_IMPORT_OF_NON_DLL
//
// MessageText:
//
// A dynamic link library (DLL) referenced a module that was neither a DLL nor the process's executable image.
//
#define STATUS_INVALID_IMPORT_OF_NON_DLL ((NTSTATUS)0xC000036FL)

//
// MessageId: STATUS_DS_SHUTTING_DOWN
//
// MessageText:
//
// The Directory Service is shutting down.
//
#define STATUS_DS_SHUTTING_DOWN          ((NTSTATUS)0x40000370L)

//
// MessageId: STATUS_NO_SECRETS
//
// MessageText:
//
// The local account store does not contain secret material for the specified account.
//
#define STATUS_NO_SECRETS                ((NTSTATUS)0xC0000371L)

//
// MessageId: STATUS_ACCESS_DISABLED_NO_SAFER_UI_BY_POLICY
//
// MessageText:
//
// Access to %1 has been restricted by your Administrator by policy rule %2.
//
#define STATUS_ACCESS_DISABLED_NO_SAFER_UI_BY_POLICY ((NTSTATUS)0xC0000372L)    

//
// MessageId: STATUS_FAILED_STACK_SWITCH
//
// MessageText:
//
// The system was not able to allocate enough memory to perform a stack switch.
//
#define STATUS_FAILED_STACK_SWITCH       ((NTSTATUS)0xC0000373L)

//
// MessageId: STATUS_HEAP_CORRUPTION
//
// MessageText:
//
// A heap has been corrupted.
//
#define STATUS_HEAP_CORRUPTION           ((NTSTATUS)0xC0000374L)    // winnt

//
// MessageId: STATUS_SMARTCARD_WRONG_PIN
//
// MessageText:
//
// An incorrect PIN was presented to the smart card
//
#define STATUS_SMARTCARD_WRONG_PIN       ((NTSTATUS)0xC0000380L)

//
// MessageId: STATUS_SMARTCARD_CARD_BLOCKED
//
// MessageText:
//
// The smart card is blocked
//
#define STATUS_SMARTCARD_CARD_BLOCKED    ((NTSTATUS)0xC0000381L)

//
// MessageId: STATUS_SMARTCARD_CARD_NOT_AUTHENTICATED
//
// MessageText:
//
// No PIN was presented to the smart card
//
#define STATUS_SMARTCARD_CARD_NOT_AUTHENTICATED ((NTSTATUS)0xC0000382L)

//
// MessageId: STATUS_SMARTCARD_NO_CARD
//
// MessageText:
//
// No smart card available
//
#define STATUS_SMARTCARD_NO_CARD         ((NTSTATUS)0xC0000383L)

//
// MessageId: STATUS_SMARTCARD_NO_KEY_CONTAINER
//
// MessageText:
//
// The requested key container does not exist on the smart card
//
#define STATUS_SMARTCARD_NO_KEY_CONTAINER ((NTSTATUS)0xC0000384L)

//
// MessageId: STATUS_SMARTCARD_NO_CERTIFICATE
//
// MessageText:
//
// The requested certificate does not exist on the smart card
//
#define STATUS_SMARTCARD_NO_CERTIFICATE  ((NTSTATUS)0xC0000385L)

//
// MessageId: STATUS_SMARTCARD_NO_KEYSET
//
// MessageText:
//
// The requested keyset does not exist
//
#define STATUS_SMARTCARD_NO_KEYSET       ((NTSTATUS)0xC0000386L)

//
// MessageId: STATUS_SMARTCARD_IO_ERROR
//
// MessageText:
//
// A communication error with the smart card has been detected.
//
#define STATUS_SMARTCARD_IO_ERROR        ((NTSTATUS)0xC0000387L)

//
// MessageId: STATUS_DOWNGRADE_DETECTED
//
// MessageText:
//
// The system cannot contact a domain controller to service the authentication request. Please try again later.
//
#define STATUS_DOWNGRADE_DETECTED        ((NTSTATUS)0xC0000388L)

//
// MessageId: STATUS_SMARTCARD_CERT_REVOKED
//
// MessageText:
//
// The smartcard certificate used for authentication has been revoked. Please contact your system administrator. There may be additional information in the event log.
//
#define STATUS_SMARTCARD_CERT_REVOKED    ((NTSTATUS)0xC0000389L)

//
// MessageId: STATUS_ISSUING_CA_UNTRUSTED
//
// MessageText:
//
// An untrusted certificate authority was detected while processing the certificate used for authentication.
//
#define STATUS_ISSUING_CA_UNTRUSTED      ((NTSTATUS)0xC000038AL)

//
// MessageId: STATUS_REVOCATION_OFFLINE_C
//
// MessageText:
//
// The revocation status of the certificate used for authentication could not be determined.
//
#define STATUS_REVOCATION_OFFLINE_C      ((NTSTATUS)0xC000038BL)

//
// MessageId: STATUS_PKINIT_CLIENT_FAILURE
//
// MessageText:
//
// The client certificate used for authentication was not trusted.
//
#define STATUS_PKINIT_CLIENT_FAILURE     ((NTSTATUS)0xC000038CL)

//
// MessageId: STATUS_SMARTCARD_CERT_EXPIRED
//
// MessageText:
//
// The smartcard certificate used for authentication has expired. Please
// contact your system administrator.
//
#define STATUS_SMARTCARD_CERT_EXPIRED    ((NTSTATUS)0xC000038DL)

//
// MessageId: STATUS_DRIVER_FAILED_PRIOR_UNLOAD
//
// MessageText:
//
// The driver could not be loaded because a previous version of the driver is still in memory.
//
#define STATUS_DRIVER_FAILED_PRIOR_UNLOAD ((NTSTATUS)0xC000038EL)

//
// MessageId: STATUS_SMARTCARD_SILENT_CONTEXT
//
// MessageText:
//
// The smartcard provider could not perform the action since the context was acquired as silent.
//
#define STATUS_SMARTCARD_SILENT_CONTEXT  ((NTSTATUS)0xC000038FL)

 /* MessageId up to 0x400 is reserved for smart cards */
//
// MessageId: STATUS_PER_USER_TRUST_QUOTA_EXCEEDED
//
// MessageText:
//
// The current user's delegated trust creation quota has been exceeded.
//
#define STATUS_PER_USER_TRUST_QUOTA_EXCEEDED ((NTSTATUS)0xC0000401L)

//
// MessageId: STATUS_ALL_USER_TRUST_QUOTA_EXCEEDED
//
// MessageText:
//
// The total delegated trust creation quota has been exceeded.
//
#define STATUS_ALL_USER_TRUST_QUOTA_EXCEEDED ((NTSTATUS)0xC0000402L)

//
// MessageId: STATUS_USER_DELETE_TRUST_QUOTA_EXCEEDED
//
// MessageText:
//
// The current user's delegated trust deletion quota has been exceeded.
//
#define STATUS_USER_DELETE_TRUST_QUOTA_EXCEEDED ((NTSTATUS)0xC0000403L)

//
// MessageId: STATUS_DS_NAME_NOT_UNIQUE
//
// MessageText:
//
// The requested name already exists as a unique identifier.
//
#define STATUS_DS_NAME_NOT_UNIQUE        ((NTSTATUS)0xC0000404L)

//
// MessageId: STATUS_DS_DUPLICATE_ID_FOUND
//
// MessageText:
//
// The requested object has a non-unique identifier and cannot be retrieved.
//
#define STATUS_DS_DUPLICATE_ID_FOUND     ((NTSTATUS)0xC0000405L)

//
// MessageId: STATUS_DS_GROUP_CONVERSION_ERROR
//
// MessageText:
//
// The group cannot be converted due to attribute restrictions on the requested group type.
//
#define STATUS_DS_GROUP_CONVERSION_ERROR ((NTSTATUS)0xC0000406L)

//
// MessageId: STATUS_VOLSNAP_PREPARE_HIBERNATE
//
// MessageText:
//
// {Volume Shadow Copy Service}
// Please wait while the Volume Shadow Copy Service prepares volume %hs for hibernation.
//
#define STATUS_VOLSNAP_PREPARE_HIBERNATE ((NTSTATUS)0xC0000407L)

//
// MessageId: STATUS_USER2USER_REQUIRED
//
// MessageText:
//
// Kerberos sub-protocol User2User is required.
//
#define STATUS_USER2USER_REQUIRED        ((NTSTATUS)0xC0000408L)

//
// MessageId: STATUS_STACK_BUFFER_OVERRUN
//
// MessageText:
//
// The system detected an overrun of a stack-based buffer in this application. This overrun could potentially allow a malicious user to gain control of this application.
//
#define STATUS_STACK_BUFFER_OVERRUN      ((NTSTATUS)0xC0000409L)    // winnt

//
// MessageId: STATUS_NO_S4U_PROT_SUPPORT
//
// MessageText:
//
// The Kerberos subsystem encountered an error. A service for user protocol request was made against a domain controller which does not support service for user.
//
#define STATUS_NO_S4U_PROT_SUPPORT       ((NTSTATUS)0xC000040AL)

//
// MessageId: STATUS_CROSSREALM_DELEGATION_FAILURE
//
// MessageText:
//
// An attempt was made by this server to make a Kerberos constrained delegation request for a target outside of the server's realm. This is not supported, and indicates a misconfiguration on this server's allowed to delegate to list. Please contact your administrator.
//
#define STATUS_CROSSREALM_DELEGATION_FAILURE ((NTSTATUS)0xC000040BL)

//
// MessageId: STATUS_REVOCATION_OFFLINE_KDC
//
// MessageText:
//
// The revocation status of the domain controller certificate used for authentication could not be determined. There is additional information in the system event log.
//
#define STATUS_REVOCATION_OFFLINE_KDC    ((NTSTATUS)0xC000040CL)

//
// MessageId: STATUS_ISSUING_CA_UNTRUSTED_KDC
//
// MessageText:
//
// An untrusted certificate authority was detected while processing the domain controller certificate used for authentication. There is additional information in the system event log. Please contact your system administrator.
//
#define STATUS_ISSUING_CA_UNTRUSTED_KDC  ((NTSTATUS)0xC000040DL)

//
// MessageId: STATUS_KDC_CERT_EXPIRED
//
// MessageText:
//
// The domain controller certificate used for logon has expired. There is additional information in the system event log.
//
#define STATUS_KDC_CERT_EXPIRED          ((NTSTATUS)0xC000040EL)

//
// MessageId: STATUS_KDC_CERT_REVOKED
//
// MessageText:
//
// The domain controller certificate used for logon has been revoked. There is additional information in the system event log.
//
#define STATUS_KDC_CERT_REVOKED          ((NTSTATUS)0xC000040FL)

//
// MessageId: STATUS_PARAMETER_QUOTA_EXCEEDED
//
// MessageText:
//
// Data present in one of the parameters is more than the function can operate on.
//
#define STATUS_PARAMETER_QUOTA_EXCEEDED  ((NTSTATUS)0xC0000410L)

//
// MessageId: STATUS_HIBERNATION_FAILURE
//
// MessageText:
//
// The system has failed to hibernate (The error code is %hs). Hibernation will be disabled until the system is restarted.
//
#define STATUS_HIBERNATION_FAILURE       ((NTSTATUS)0xC0000411L)

//
// MessageId: STATUS_DELAY_LOAD_FAILED
//
// MessageText:
//
// An attempt to delay-load a .dll or get a function address in a delay-loaded .dll failed.
//
#define STATUS_DELAY_LOAD_FAILED         ((NTSTATUS)0xC0000412L)

//
// MessageId: STATUS_AUTHENTICATION_FIREWALL_FAILED
//
// MessageText:
//
// Logon Failure: The machine you are logging onto is protected by an authentication firewall. The specified account is not allowed to authenticate to the machine.
//
#define STATUS_AUTHENTICATION_FIREWALL_FAILED ((NTSTATUS)0xC0000413L)

//
// MessageId: STATUS_VDM_DISALLOWED
//
// MessageText:
//
// %hs is a 16-bit application. You do not have permissions to execute 16-bit applications. Check your permissions with your system administrator.
//
#define STATUS_VDM_DISALLOWED            ((NTSTATUS)0xC0000414L)

//
// MessageId: STATUS_HUNG_DISPLAY_DRIVER_THREAD
//
// MessageText:
//
// {Display Driver Stopped Responding}
// The %hs display driver has stopped working normally. Save your work and reboot the system to restore full display functionality. The next time you reboot the machine a dialog will be displayed giving you a chance to report this failure to Microsoft.
//
#define STATUS_HUNG_DISPLAY_DRIVER_THREAD ((NTSTATUS)0xC0000415L)

//
// MessageId: STATUS_INSUFFICIENT_RESOURCE_FOR_SPECIFIED_SHARED_SECTION_SIZE
//
// MessageText:
//
// The Desktop heap encountered an error while allocating session memory. There is more information in the system event log.
//
#define STATUS_INSUFFICIENT_RESOURCE_FOR_SPECIFIED_SHARED_SECTION_SIZE ((NTSTATUS)0xC0000416L)

//
// MessageId: STATUS_INVALID_CRUNTIME_PARAMETER
//
// MessageText:
//
// An invalid parameter was passed to a C runtime function.
//
#define STATUS_INVALID_CRUNTIME_PARAMETER ((NTSTATUS)0xC0000417L)    // winnt

//
// MessageId: STATUS_NTLM_BLOCKED
//
// MessageText:
//
// The authentication failed since NTLM was blocked.
//
#define STATUS_NTLM_BLOCKED              ((NTSTATUS)0xC0000418L)

//
// MessageId: STATUS_DS_SRC_SID_EXISTS_IN_FOREST
//
// MessageText:
//
// The source object's SID already exists in destination forest.
//
#define STATUS_DS_SRC_SID_EXISTS_IN_FOREST ((NTSTATUS)0xC0000419L)

//
// MessageId: STATUS_DS_DOMAIN_NAME_EXISTS_IN_FOREST
//
// MessageText:
//
// The domain name of the trusted domain already exists in the forest.
//
#define STATUS_DS_DOMAIN_NAME_EXISTS_IN_FOREST ((NTSTATUS)0xC000041AL)

//
// MessageId: STATUS_DS_FLAT_NAME_EXISTS_IN_FOREST
//
// MessageText:
//
// The flat name of the trusted domain already exists in the forest.
//
#define STATUS_DS_FLAT_NAME_EXISTS_IN_FOREST ((NTSTATUS)0xC000041BL)

//
// MessageId: STATUS_INVALID_USER_PRINCIPAL_NAME
//
// MessageText:
//
// The User Principal Name (UPN) is invalid.
//
#define STATUS_INVALID_USER_PRINCIPAL_NAME ((NTSTATUS)0xC000041CL)

//
// MessageId: STATUS_FATAL_USER_CALLBACK_EXCEPTION
//
// MessageText:
//
// An unhandled exception was encountered during a user callback.
//
#define STATUS_FATAL_USER_CALLBACK_EXCEPTION ((NTSTATUS)0xC000041DL)

//
// MessageId: STATUS_ASSERTION_FAILURE
//
// MessageText:
//
// An assertion failure has occurred.
//
#define STATUS_ASSERTION_FAILURE         ((NTSTATUS)0xC0000420L)    // winnt

//
// MessageId: STATUS_VERIFIER_STOP
//
// MessageText:
//
// Application verifier has found an error in the current process.
//
#define STATUS_VERIFIER_STOP             ((NTSTATUS)0xC0000421L)

//
// MessageId: STATUS_CALLBACK_POP_STACK
//
// MessageText:
//
// An exception has occurred in a user mode callback and the kernel callback frame should be removed.
//
#define STATUS_CALLBACK_POP_STACK        ((NTSTATUS)0xC0000423L)

//
// MessageId: STATUS_INCOMPATIBLE_DRIVER_BLOCKED
//
// MessageText:
//
// %2 has been blocked from loading due to incompatibility with this system. Please contact your software vendor for a compatible version of the driver.
//
#define STATUS_INCOMPATIBLE_DRIVER_BLOCKED ((NTSTATUS)0xC0000424L)

//
// MessageId: STATUS_HIVE_UNLOADED
//
// MessageText:
//
// Illegal operation attempted on a registry key which has already been unloaded.
//
#define STATUS_HIVE_UNLOADED             ((NTSTATUS)0xC0000425L)

//
// MessageId: STATUS_COMPRESSION_DISABLED
//
// MessageText:
//
// Compression is disabled for this volume.
//
#define STATUS_COMPRESSION_DISABLED      ((NTSTATUS)0xC0000426L)

//
// MessageId: STATUS_FILE_SYSTEM_LIMITATION
//
// MessageText:
//
// The requested operation could not be completed due to a file system limitation
//
#define STATUS_FILE_SYSTEM_LIMITATION    ((NTSTATUS)0xC0000427L)

//
// MessageId: STATUS_INVALID_IMAGE_HASH
//
// MessageText:
//
// Windows cannot verify the digital signature for this file. A recent hardware or software change might have installed a file that is signed incorrectly or damaged, or that might be malicious software from an unknown source.
//
#define STATUS_INVALID_IMAGE_HASH        ((NTSTATUS)0xC0000428L)

//
// MessageId: STATUS_NOT_CAPABLE
//
// MessageText:
//
// The implementation is not capable of performing the request.
//
#define STATUS_NOT_CAPABLE               ((NTSTATUS)0xC0000429L)

//
// MessageId: STATUS_REQUEST_OUT_OF_SEQUENCE
//
// MessageText:
//
// The requested operation is out of order with respect to other operations.
//
#define STATUS_REQUEST_OUT_OF_SEQUENCE   ((NTSTATUS)0xC000042AL)

//
// MessageId: STATUS_IMPLEMENTATION_LIMIT
//
// MessageText:
//
// An operation attempted to exceed an implementation-defined limit.
//
#define STATUS_IMPLEMENTATION_LIMIT      ((NTSTATUS)0xC000042BL)

//
// MessageId: STATUS_ELEVATION_REQUIRED
//
// MessageText:
//
// The requested operation requires elevation.
//
#define STATUS_ELEVATION_REQUIRED        ((NTSTATUS)0xC000042CL)

//
// MessageId: STATUS_NO_SECURITY_CONTEXT
//
// MessageText:
//
// The required security context does not exist.
//
#define STATUS_NO_SECURITY_CONTEXT       ((NTSTATUS)0xC000042DL)

//
// MessageId 0x042E is reserved and used in isolation lib as
//
// MessageId=0x042E Facility=System Severity=ERROR SymbolicName=STATUS_VERSION_PARSE_ERROR
// Language=English
// A version number could not be parsed.
// .
//
// MessageId: STATUS_PKU2U_CERT_FAILURE
//
// MessageText:
//
// The PKU2U protocol encountered an error while attempting to utilize the associated certificates.
//
#define STATUS_PKU2U_CERT_FAILURE        ((NTSTATUS)0xC000042FL)

//
// MessageId: STATUS_BEYOND_VDL
//
// MessageText:
//
// The operation was attempted beyond the valid data length of the file.
//
#define STATUS_BEYOND_VDL                ((NTSTATUS)0xC0000432L)

//
// MessageId: STATUS_ENCOUNTERED_WRITE_IN_PROGRESS
//
// MessageText:
//
// The attempted write operation encountered a write already in progress for some portion of the range.
//
#define STATUS_ENCOUNTERED_WRITE_IN_PROGRESS ((NTSTATUS)0xC0000433L)

//
// MessageId: STATUS_PTE_CHANGED
//
// MessageText:
//
// The page fault mappings changed in the middle of processing a fault so the operation must be retried.
//
#define STATUS_PTE_CHANGED               ((NTSTATUS)0xC0000434L)

//
// MessageId: STATUS_PURGE_FAILED
//
// MessageText:
//
// The attempt to purge this file from memory failed to purge some or all the data from memory.
//
#define STATUS_PURGE_FAILED              ((NTSTATUS)0xC0000435L)

//
// MessageId: STATUS_CRED_REQUIRES_CONFIRMATION
//
// MessageText:
//
// The requested credential requires confirmation.
//
#define STATUS_CRED_REQUIRES_CONFIRMATION ((NTSTATUS)0xC0000440L)

//
// MessageId: STATUS_CS_ENCRYPTION_INVALID_SERVER_RESPONSE
//
// MessageText:
//
// The remote server sent an invalid response for a file being opened with Client Side Encryption.
//
#define STATUS_CS_ENCRYPTION_INVALID_SERVER_RESPONSE ((NTSTATUS)0xC0000441L)

//
// MessageId: STATUS_CS_ENCRYPTION_UNSUPPORTED_SERVER
//
// MessageText:
//
// Client Side Encryption is not supported by the remote server even though it claims to support it.
//
#define STATUS_CS_ENCRYPTION_UNSUPPORTED_SERVER ((NTSTATUS)0xC0000442L)

//
// MessageId: STATUS_CS_ENCRYPTION_EXISTING_ENCRYPTED_FILE
//
// MessageText:
//
// File is encrypted and should be opened in Client Side Encryption mode.
//
#define STATUS_CS_ENCRYPTION_EXISTING_ENCRYPTED_FILE ((NTSTATUS)0xC0000443L)

//
// MessageId: STATUS_CS_ENCRYPTION_NEW_ENCRYPTED_FILE
//
// MessageText:
//
// A new encrypted file is being created and a $EFS needs to be provided.
//
#define STATUS_CS_ENCRYPTION_NEW_ENCRYPTED_FILE ((NTSTATUS)0xC0000444L)

//
// MessageId: STATUS_CS_ENCRYPTION_FILE_NOT_CSE
//
// MessageText:
//
// The SMB client requested a CSE FSCTL on a non-CSE file.
//
#define STATUS_CS_ENCRYPTION_FILE_NOT_CSE ((NTSTATUS)0xC0000445L)

//
// MessageId: STATUS_INVALID_LABEL
//
// MessageText:
//
// Indicates a particular Security ID may not be assigned as the label of an object.
//
#define STATUS_INVALID_LABEL             ((NTSTATUS)0xC0000446L)

//
// MessageId: STATUS_DRIVER_PROCESS_TERMINATED
//
// MessageText:
//
// The process hosting the driver for this device has terminated.
//
#define STATUS_DRIVER_PROCESS_TERMINATED ((NTSTATUS)0xC0000450L)

//
// MessageId: STATUS_AMBIGUOUS_SYSTEM_DEVICE
//
// MessageText:
//
// The requested system device cannot be identified due to multiple indistinguishable devices potentially matching the identification criteria.
//
#define STATUS_AMBIGUOUS_SYSTEM_DEVICE   ((NTSTATUS)0xC0000451L)

//
// MessageId: STATUS_SYSTEM_DEVICE_NOT_FOUND
//
// MessageText:
//
// The requested system device cannot be found.
//
#define STATUS_SYSTEM_DEVICE_NOT_FOUND   ((NTSTATUS)0xC0000452L)

//
// MessageId: STATUS_RESTART_BOOT_APPLICATION
//
// MessageText:
//
// This boot application must be restarted.
//
#define STATUS_RESTART_BOOT_APPLICATION  ((NTSTATUS)0xC0000453L)

//
// MessageId: STATUS_INSUFFICIENT_NVRAM_RESOURCES
//
// MessageText:
//
// Insufficient NVRAM resources exist to complete the API.  A reboot might be required.
//
#define STATUS_INSUFFICIENT_NVRAM_RESOURCES ((NTSTATUS)0xC0000454L)    

//
// MessageId: STATUS_INVALID_SESSION
//
// MessageText:
//
// The specified session is invalid.
//
#define STATUS_INVALID_SESSION           ((NTSTATUS)0xC0000455L)

//
// MessageId: STATUS_THREAD_ALREADY_IN_SESSION
//
// MessageText:
//
// The specified thread is already in a session.
//
#define STATUS_THREAD_ALREADY_IN_SESSION ((NTSTATUS)0xC0000456L)

//
// MessageId: STATUS_THREAD_NOT_IN_SESSION
//
// MessageText:
//
// The specified thread is not in a session.
//
#define STATUS_THREAD_NOT_IN_SESSION     ((NTSTATUS)0xC0000457L)

//
// MessageId: STATUS_INVALID_WEIGHT
//
// MessageText:
//
// The specified weight is invalid.
//
#define STATUS_INVALID_WEIGHT            ((NTSTATUS)0xC0000458L)

//
// MessageId: STATUS_REQUEST_PAUSED
//
// MessageText:
//
// The operation was paused.
//
#define STATUS_REQUEST_PAUSED            ((NTSTATUS)0xC0000459L)

//
// MessageId: STATUS_NO_RANGES_PROCESSED
//
// MessageText:
//
// No ranges for the specified operation were able to be processed.
//
#define STATUS_NO_RANGES_PROCESSED       ((NTSTATUS)0xC0000460L)

//
// MessageId: STATUS_DISK_RESOURCES_EXHAUSTED
//
// MessageText:
//
// The physical resources of this disk have been exhausted.
//
#define STATUS_DISK_RESOURCES_EXHAUSTED  ((NTSTATUS)0xC0000461L)

//
// MessageId: STATUS_NEEDS_REMEDIATION
//
// MessageText:
//
// The application cannot be started. Try reinstalling the application to fix the problem.
//
#define STATUS_NEEDS_REMEDIATION         ((NTSTATUS)0xC0000462L)

//
// MessageId: STATUS_DEVICE_FEATURE_NOT_SUPPORTED
//
// MessageText:
//
// {Device Feature Not Supported}
// The device does not support the command feature.
//
#define STATUS_DEVICE_FEATURE_NOT_SUPPORTED ((NTSTATUS)0xC0000463L)

//
// MessageId: STATUS_DEVICE_UNREACHABLE
//
// MessageText:
//
// {Source/Destination device unreachable}
// The device is unreachable.
//
#define STATUS_DEVICE_UNREACHABLE        ((NTSTATUS)0xC0000464L)

//
// MessageId: STATUS_INVALID_TOKEN
//
// MessageText:
//
// {Invalid Proxy Data Token}
// The token representing the data is invalid.
//
#define STATUS_INVALID_TOKEN             ((NTSTATUS)0xC0000465L)

//
// MessageId: STATUS_SERVER_UNAVAILABLE
//
// MessageText:
//
// The file server is temporarily unavailable.
//
#define STATUS_SERVER_UNAVAILABLE        ((NTSTATUS)0xC0000466L)

//
// MessageId: STATUS_FILE_NOT_AVAILABLE
//
// MessageText:
//
// The file is temporarily unavailable.
//
#define STATUS_FILE_NOT_AVAILABLE        ((NTSTATUS)0xC0000467L)

//
// MessageId: STATUS_DEVICE_INSUFFICIENT_RESOURCES
//
// MessageText:
//
// {Device Insufficient Resources}
// The target device has insufficient resources to complete the operation.
//
#define STATUS_DEVICE_INSUFFICIENT_RESOURCES ((NTSTATUS)0xC0000468L)

//
// MessageId: STATUS_PACKAGE_UPDATING
//
// MessageText:
//
// The application cannot be started because it is currently updating.
//
#define STATUS_PACKAGE_UPDATING          ((NTSTATUS)0xC0000469L)

//
// MessageId: STATUS_NOT_READ_FROM_COPY
//
// MessageText:
//
// The specified copy of the requested data could not be read.
//
#define STATUS_NOT_READ_FROM_COPY        ((NTSTATUS)0xC000046AL)

//
// MessageId: STATUS_FT_WRITE_FAILURE
//
// MessageText:
//
// The specified data could not be written to any of the copies.
//
#define STATUS_FT_WRITE_FAILURE          ((NTSTATUS)0xC000046BL)

//
// MessageId: STATUS_FT_DI_SCAN_REQUIRED
//
// MessageText:
//
// One or more copies of data on this device may be out of sync. No writes may be performed until a data integrity scan is completed.
//
#define STATUS_FT_DI_SCAN_REQUIRED       ((NTSTATUS)0xC000046CL)

//
// MessageId: STATUS_OBJECT_NOT_EXTERNALLY_BACKED
//
// MessageText:
//
// This object is not externally backed by any provider.
//
#define STATUS_OBJECT_NOT_EXTERNALLY_BACKED ((NTSTATUS)0xC000046DL)

//
// MessageId: STATUS_EXTERNAL_BACKING_PROVIDER_UNKNOWN
//
// MessageText:
//
// The external backing provider is not recognized.
//
#define STATUS_EXTERNAL_BACKING_PROVIDER_UNKNOWN ((NTSTATUS)0xC000046EL)

//
// MessageId: STATUS_COMPRESSION_NOT_BENEFICIAL
//
// MessageText:
//
// Compressing this object would not save space.
//
#define STATUS_COMPRESSION_NOT_BENEFICIAL ((NTSTATUS)0xC000046FL)

//
// MessageId: STATUS_DATA_CHECKSUM_ERROR
//
// MessageText:
//
// A data integrity checksum error occurred. Data in the file stream is corrupt.
//
#define STATUS_DATA_CHECKSUM_ERROR       ((NTSTATUS)0xC0000470L)

//
// MessageId: STATUS_INTERMIXED_KERNEL_EA_OPERATION
//
// MessageText:
//
// An attempt was made to modify both a KERNEL and normal Extended Attribute (EA) in the same operation.
//
#define STATUS_INTERMIXED_KERNEL_EA_OPERATION ((NTSTATUS)0xC0000471L)

//
// MessageId: STATUS_TRIM_READ_ZERO_NOT_SUPPORTED
//
// MessageText:
//
// {LogicalBlockProvisioningReadZero Not Supported}
// The target device does not support read returning zeros from trimmed/unmapped blocks.
//
#define STATUS_TRIM_READ_ZERO_NOT_SUPPORTED ((NTSTATUS)0xC0000472L)

//
// MessageId: STATUS_TOO_MANY_SEGMENT_DESCRIPTORS
//
// MessageText:
//
// {Maximum Segment Descriptors Exceeded}
// The command specified a number of descriptors that exceeded the maximum supported by the device.
//
#define STATUS_TOO_MANY_SEGMENT_DESCRIPTORS ((NTSTATUS)0xC0000473L)

//
// MessageId: STATUS_INVALID_OFFSET_ALIGNMENT
//
// MessageText:
//
// {Alignment Violation}
// The command specified a data offset that does not align to the device's granularity/alignment.
//
#define STATUS_INVALID_OFFSET_ALIGNMENT  ((NTSTATUS)0xC0000474L)

//
// MessageId: STATUS_INVALID_FIELD_IN_PARAMETER_LIST
//
// MessageText:
//
// {Invalid Field In Parameter List}
// The command specified an invalid field in its parameter list.
//
#define STATUS_INVALID_FIELD_IN_PARAMETER_LIST ((NTSTATUS)0xC0000475L)

//
// MessageId: STATUS_OPERATION_IN_PROGRESS
//
// MessageText:
//
// {Operation In Progress}
// An operation is currently in progress with the device.
//
#define STATUS_OPERATION_IN_PROGRESS     ((NTSTATUS)0xC0000476L)

//
// MessageId: STATUS_INVALID_INITIATOR_TARGET_PATH
//
// MessageText:
//
// {Invalid I_T Nexus}
// An attempt was made to send down the command via an invalid path to the target device.
//
#define STATUS_INVALID_INITIATOR_TARGET_PATH ((NTSTATUS)0xC0000477L)

//
// MessageId: STATUS_SCRUB_DATA_DISABLED
//
// MessageText:
//
// Scrub is disabled on the specified file.
//
#define STATUS_SCRUB_DATA_DISABLED       ((NTSTATUS)0xC0000478L)

//
// MessageId: STATUS_NOT_REDUNDANT_STORAGE
//
// MessageText:
//
// The storage device does not provide redundancy.
//
#define STATUS_NOT_REDUNDANT_STORAGE     ((NTSTATUS)0xC0000479L)

//
// MessageId: STATUS_RESIDENT_FILE_NOT_SUPPORTED
//
// MessageText:
//
// The specified operation is not supported on a resident file.
//
#define STATUS_RESIDENT_FILE_NOT_SUPPORTED ((NTSTATUS)0xC000047AL)

//
// MessageId: STATUS_COMPRESSED_FILE_NOT_SUPPORTED
//
// MessageText:
//
// The specified operation is not supported on a compressed file.
//
#define STATUS_COMPRESSED_FILE_NOT_SUPPORTED ((NTSTATUS)0xC000047BL)

//
// MessageId: STATUS_DIRECTORY_NOT_SUPPORTED
//
// MessageText:
//
// The specified operation is not supported on a directory.
//
#define STATUS_DIRECTORY_NOT_SUPPORTED   ((NTSTATUS)0xC000047CL)

//
// MessageId: STATUS_IO_OPERATION_TIMEOUT
//
// MessageText:
//
// {IO Operation Timeout}
// The specified I/O operation failed to complete within the expected time period.
//
#define STATUS_IO_OPERATION_TIMEOUT      ((NTSTATUS)0xC000047DL)

//
// MessageId: STATUS_SYSTEM_NEEDS_REMEDIATION
//
// MessageText:
//
// An error in a system binary was detected. Try refreshing the PC to fix the problem.
//
#define STATUS_SYSTEM_NEEDS_REMEDIATION  ((NTSTATUS)0xC000047EL)

//
// MessageId: STATUS_APPX_INTEGRITY_FAILURE_CLR_NGEN
//
// MessageText:
//
// A corrupted CLR NGEN binary was detected on the system.
//
#define STATUS_APPX_INTEGRITY_FAILURE_CLR_NGEN ((NTSTATUS)0xC000047FL)

//
// MessageId: STATUS_SHARE_UNAVAILABLE
//
// MessageText:
//
// The share is temporarily unavailable.
//
#define STATUS_SHARE_UNAVAILABLE         ((NTSTATUS)0xC0000480L)

//
// MessageId: STATUS_APISET_NOT_HOSTED
//
// MessageText:
//
// The target dll was not found because the apiset %hs is not hosted.
//
#define STATUS_APISET_NOT_HOSTED         ((NTSTATUS)0xC0000481L)

//
// MessageId: STATUS_APISET_NOT_PRESENT
//
// MessageText:
//
// The API set extension contains a host for a non-existent API set.
//
#define STATUS_APISET_NOT_PRESENT        ((NTSTATUS)0xC0000482L)

//
// MessageId: STATUS_DEVICE_HARDWARE_ERROR
//
// MessageText:
//
// The request failed due to a fatal device hardware error.
//
#define STATUS_DEVICE_HARDWARE_ERROR     ((NTSTATUS)0xC0000483L)

//
// MessageId: STATUS_FIRMWARE_SLOT_INVALID
//
// MessageText:
//
// The specified firmware slot is invalid.
//
#define STATUS_FIRMWARE_SLOT_INVALID     ((NTSTATUS)0xC0000484L)

//
// MessageId: STATUS_FIRMWARE_IMAGE_INVALID
//
// MessageText:
//
// The specified firmware image is invalid.
//
#define STATUS_FIRMWARE_IMAGE_INVALID    ((NTSTATUS)0xC0000485L)

//
// MessageId: STATUS_STORAGE_TOPOLOGY_ID_MISMATCH
//
// MessageText:
//
// The request failed due to a storage topology ID mismatch.
//
#define STATUS_STORAGE_TOPOLOGY_ID_MISMATCH ((NTSTATUS)0xC0000486L)

//
// MessageId: STATUS_WIM_NOT_BOOTABLE
//
// MessageText:
//
// The specified Windows Image (WIM) is not marked as bootable.
//
#define STATUS_WIM_NOT_BOOTABLE          ((NTSTATUS)0xC0000487L)

//
// MessageId: STATUS_BLOCKED_BY_PARENTAL_CONTROLS
//
// MessageText:
//
// The operation was blocked by parental controls.
//
#define STATUS_BLOCKED_BY_PARENTAL_CONTROLS ((NTSTATUS)0xC0000488L)

//
// MessageId: STATUS_NEEDS_REGISTRATION
//
// MessageText:
//
// The deployment operation failed because the specified application needs to be registered first.
//
#define STATUS_NEEDS_REGISTRATION        ((NTSTATUS)0xC0000489L)

//
// MessageId: STATUS_QUOTA_ACTIVITY
//
// MessageText:
//
// The requested operation failed due to quota operation is still in progress.
//
#define STATUS_QUOTA_ACTIVITY            ((NTSTATUS)0xC000048AL)

//
// MessageId: STATUS_CALLBACK_INVOKE_INLINE
//
// MessageText:
//
// The callback function must be invoked inline.
//
#define STATUS_CALLBACK_INVOKE_INLINE    ((NTSTATUS)0xC000048BL)

//
// MessageId: STATUS_BLOCK_TOO_MANY_REFERENCES
//
// MessageText:
//
// A file system block being referenced has already reached the maximum reference count and can't be referenced any further.
//
#define STATUS_BLOCK_TOO_MANY_REFERENCES ((NTSTATUS)0xC000048CL)

//
// MessageId: STATUS_MARKED_TO_DISALLOW_WRITES
//
// MessageText:
//
// The requested operation failed because the file stream is marked to disallow writes.
//
#define STATUS_MARKED_TO_DISALLOW_WRITES ((NTSTATUS)0xC000048DL)

//
// MessageId: STATUS_NETWORK_ACCESS_DENIED_EDP
//
// MessageText:
//
// Windows Information Protection policy does not allow access to this network resource.
//
#define STATUS_NETWORK_ACCESS_DENIED_EDP ((NTSTATUS)0xC000048EL)

//
// MessageId: STATUS_ENCLAVE_FAILURE
//
// MessageText:
//
// The requested operation failed with an architecture-specific failure code.
//
#define STATUS_ENCLAVE_FAILURE           ((NTSTATUS)0xC000048FL)

//
// MessageId: STATUS_PNP_NO_COMPAT_DRIVERS
//
// MessageText:
//
// There are no compatible drivers available for this device.
//
#define STATUS_PNP_NO_COMPAT_DRIVERS     ((NTSTATUS)0xC0000490L)

//
// MessageId: STATUS_PNP_DRIVER_PACKAGE_NOT_FOUND
//
// MessageText:
//
// The specified driver package cannot be found on the system.
//
#define STATUS_PNP_DRIVER_PACKAGE_NOT_FOUND ((NTSTATUS)0xC0000491L)

//
// MessageId: STATUS_PNP_DRIVER_CONFIGURATION_NOT_FOUND
//
// MessageText:
//
// The driver package cannot find a required driver configuration.
//
#define STATUS_PNP_DRIVER_CONFIGURATION_NOT_FOUND ((NTSTATUS)0xC0000492L)

//
// MessageId: STATUS_PNP_DRIVER_CONFIGURATION_INCOMPLETE
//
// MessageText:
//
// The driver configuration is incomplete for use with this device.
//
#define STATUS_PNP_DRIVER_CONFIGURATION_INCOMPLETE ((NTSTATUS)0xC0000493L)

//
// MessageId: STATUS_PNP_FUNCTION_DRIVER_REQUIRED
//
// MessageText:
//
// The device requires a driver configuration with a function driver.
//
#define STATUS_PNP_FUNCTION_DRIVER_REQUIRED ((NTSTATUS)0xC0000494L)

//
// MessageId: STATUS_PNP_DEVICE_CONFIGURATION_PENDING
//
// MessageText:
//
// The device is pending further configuration.
//
#define STATUS_PNP_DEVICE_CONFIGURATION_PENDING ((NTSTATUS)0xC0000495L)

//
// MessageId: STATUS_DEVICE_HINT_NAME_BUFFER_TOO_SMALL
//
// MessageText:
//
// The device hint name buffer is too small to receive the remaining name.
//
#define STATUS_DEVICE_HINT_NAME_BUFFER_TOO_SMALL ((NTSTATUS)0xC0000496L)

//
// MessageId: STATUS_PACKAGE_NOT_AVAILABLE
//
// MessageText:
//
// The package is currently not available.
//
#define STATUS_PACKAGE_NOT_AVAILABLE     ((NTSTATUS)0xC0000497L)

//
// MessageId: STATUS_DEVICE_IN_MAINTENANCE
//
// MessageText:
//
// The device is in maintenance mode.
//
#define STATUS_DEVICE_IN_MAINTENANCE     ((NTSTATUS)0xC0000499L)

//
// MessageId: STATUS_NOT_SUPPORTED_ON_DAX
//
// MessageText:
//
// The specified operation is not supported on a DAX volume.
//
#define STATUS_NOT_SUPPORTED_ON_DAX      ((NTSTATUS)0xC000049AL)

//
// MessageId: STATUS_FREE_SPACE_TOO_FRAGMENTED
//
// MessageText:
//
// The free space on the volume is too fragmented to complete this operation.
//
#define STATUS_FREE_SPACE_TOO_FRAGMENTED ((NTSTATUS)0xC000049BL)

//
// MessageId: STATUS_DAX_MAPPING_EXISTS
//
// MessageText:
//
// The volume has active DAX mappings.
//
#define STATUS_DAX_MAPPING_EXISTS        ((NTSTATUS)0xC000049CL)

//
// MessageId: STATUS_CHILD_PROCESS_BLOCKED
//
// MessageText:
//
// The process creation has been blocked.
//
#define STATUS_CHILD_PROCESS_BLOCKED     ((NTSTATUS)0xC000049DL)

//
// MessageId: STATUS_STORAGE_LOST_DATA_PERSISTENCE
//
// MessageText:
//
// The storage device has lost data or persistence.
//
#define STATUS_STORAGE_LOST_DATA_PERSISTENCE ((NTSTATUS)0xC000049EL)

//
// MessageId: STATUS_PARTITION_TERMINATING
//
// MessageText:
//
// An attempt was made to access a partition that has begun termination.
//
#define STATUS_PARTITION_TERMINATING     ((NTSTATUS)0xC00004A0L)

//
// MessageId: STATUS_EXTERNAL_SYSKEY_NOT_SUPPORTED
//
// MessageText:
//
// An externally encrypted syskey has been configured, but the system no longer supports this feature.  Please see https://go.microsoft.com/fwlink/?linkid=851152 for more information.
//
#define STATUS_EXTERNAL_SYSKEY_NOT_SUPPORTED ((NTSTATUS)0xC00004A1L)

//
// MessageId: STATUS_ENCLAVE_VIOLATION
//
// MessageText:
//
// An attempt was made to access protected memory in violation of its secure access policy.
//
#define STATUS_ENCLAVE_VIOLATION         ((NTSTATUS)0xC00004A2L)    // winnt

//
// MessageId: STATUS_FILE_PROTECTED_UNDER_DPL
//
// MessageText:
//
// The read or write operation to an encrypted file could not be completed because the file can only be accessed when the device is unlocked.
//
#define STATUS_FILE_PROTECTED_UNDER_DPL  ((NTSTATUS)0xC00004A3L)

//
// MessageId: STATUS_VOLUME_NOT_CLUSTER_ALIGNED
//
// MessageText:
//
// The volume is not cluster aligned on the disk.
//
#define STATUS_VOLUME_NOT_CLUSTER_ALIGNED ((NTSTATUS)0xC00004A4L)

//
// MessageId: STATUS_NO_PHYSICALLY_ALIGNED_FREE_SPACE_FOUND
//
// MessageText:
//
// No physically aligned free space was found on the volume.
//
#define STATUS_NO_PHYSICALLY_ALIGNED_FREE_SPACE_FOUND ((NTSTATUS)0xC00004A5L)

//
// MessageId: STATUS_APPX_FILE_NOT_ENCRYPTED
//
// MessageText:
//
// The APPX file can not be accessed because it is not encrypted as expected.
//
#define STATUS_APPX_FILE_NOT_ENCRYPTED   ((NTSTATUS)0xC00004A6L)

//
// MessageId: STATUS_RWRAW_ENCRYPTED_FILE_NOT_ENCRYPTED
//
// MessageText:
//
// A read or write of raw encrypted data cannot be performed because the file is not encrypted.
//
#define STATUS_RWRAW_ENCRYPTED_FILE_NOT_ENCRYPTED ((NTSTATUS)0xC00004A7L)

//
// MessageId: STATUS_RWRAW_ENCRYPTED_INVALID_EDATAINFO_FILEOFFSET
//
// MessageText:
//
// An invalid file offset in the encrypted data info block was passed for read or write operation of file's raw encrypted data.
//
#define STATUS_RWRAW_ENCRYPTED_INVALID_EDATAINFO_FILEOFFSET ((NTSTATUS)0xC00004A8L)

//
// MessageId: STATUS_RWRAW_ENCRYPTED_INVALID_EDATAINFO_FILERANGE
//
// MessageText:
//
// An invalid offset and length combination in the encrypted data info was passed for read or write operation of file's raw encrypted data.
//
#define STATUS_RWRAW_ENCRYPTED_INVALID_EDATAINFO_FILERANGE ((NTSTATUS)0xC00004A9L)

//
// MessageId: STATUS_RWRAW_ENCRYPTED_INVALID_EDATAINFO_PARAMETER
//
// MessageText:
//
// An invalid parameter in the encrypted data info was passed for read or write operation of file's raw encrypted data.
//
#define STATUS_RWRAW_ENCRYPTED_INVALID_EDATAINFO_PARAMETER ((NTSTATUS)0xC00004AAL)

//
// MessageId: STATUS_FT_READ_FAILURE
//
// MessageText:
//
// The specified data could not be read from any of the copies.
//
#define STATUS_FT_READ_FAILURE           ((NTSTATUS)0xC00004ABL)

//
// MessageId: STATUS_PATCH_CONFLICT
//
// MessageText:
//
// A system patch could not be applied due to conflicting accesses to the system image.
//
#define STATUS_PATCH_CONFLICT            ((NTSTATUS)0xC00004ACL)

//
// MessageId: STATUS_STORAGE_RESERVE_ID_INVALID
//
// MessageText:
//
// The specified storage reserve ID is invalid.
//
#define STATUS_STORAGE_RESERVE_ID_INVALID ((NTSTATUS)0xC00004ADL)

//
// MessageId: STATUS_STORAGE_RESERVE_DOES_NOT_EXIST
//
// MessageText:
//
// The specified storage reserve does not exist.
//
#define STATUS_STORAGE_RESERVE_DOES_NOT_EXIST ((NTSTATUS)0xC00004AEL)

//
// MessageId: STATUS_STORAGE_RESERVE_ALREADY_EXISTS
//
// MessageText:
//
// The specified storage reserve already exists.
//
#define STATUS_STORAGE_RESERVE_ALREADY_EXISTS ((NTSTATUS)0xC00004AFL)

//
// MessageId: STATUS_STORAGE_RESERVE_NOT_EMPTY
//
// MessageText:
//
// The specified storage reserve is not empty.
//
#define STATUS_STORAGE_RESERVE_NOT_EMPTY ((NTSTATUS)0xC00004B0L)

//
// MessageId: STATUS_NOT_A_DAX_VOLUME
//
// MessageText:
//
// This operation requires a DAX volume.
//
#define STATUS_NOT_A_DAX_VOLUME          ((NTSTATUS)0xC00004B1L)

//
// MessageId: STATUS_NOT_DAX_MAPPABLE
//
// MessageText:
//
// This stream is not DAX mappable.
//
#define STATUS_NOT_DAX_MAPPABLE          ((NTSTATUS)0xC00004B2L)

//
// MessageId: STATUS_CASE_DIFFERING_NAMES_IN_DIR
//
// MessageText:
//
// This directory contains entries whose names differ only in case.
//
#define STATUS_CASE_DIFFERING_NAMES_IN_DIR ((NTSTATUS)0xC00004B3L)

//
// MessageId: STATUS_FILE_NOT_SUPPORTED
//
// MessageText:
//
// The file cannot be safely opened because it is not supported by this version of Windows.
//
#define STATUS_FILE_NOT_SUPPORTED        ((NTSTATUS)0xC00004B4L)

//
// MessageId: STATUS_NOT_SUPPORTED_WITH_BTT
//
// MessageText:
//
// This operation is not supported with BTT enabled.
//
#define STATUS_NOT_SUPPORTED_WITH_BTT    ((NTSTATUS)0xC00004B5L)

//
// MessageId: STATUS_ENCRYPTION_DISABLED
//
// MessageText:
//
// This operation cannot be performed because encryption is currently disabled.
//
#define STATUS_ENCRYPTION_DISABLED       ((NTSTATUS)0xC00004B6L)

//
// MessageId: STATUS_ENCRYPTING_METADATA_DISALLOWED
//
// MessageText:
//
// This encryption operation cannot be performed on filesystem metadata.
//
#define STATUS_ENCRYPTING_METADATA_DISALLOWED ((NTSTATUS)0xC00004B7L)

//
// MessageId: STATUS_CANT_CLEAR_ENCRYPTION_FLAG
//
// MessageText:
//
// Encryption cannot be cleared on this file/directory because it still has an encrypted attribute.
//
#define STATUS_CANT_CLEAR_ENCRYPTION_FLAG ((NTSTATUS)0xC00004B8L)

//
// MessageId: STATUS_UNSATISFIED_DEPENDENCIES
//
// MessageText:
//
// The operation could not be completed due to one or more unsatisfied dependencies.
//
#define STATUS_UNSATISFIED_DEPENDENCIES  ((NTSTATUS)0xC00004B9L)

//
// MessageId: STATUS_CASE_SENSITIVE_PATH
//
// MessageText:
//
// The file cannot be opened because the path has a case-sensitive directory.
//
#define STATUS_CASE_SENSITIVE_PATH       ((NTSTATUS)0xC00004BAL)

//
// MessageId: STATUS_UNSUPPORTED_PAGING_MODE
//
// MessageText:
//
// The currently selected address translation mode is not supported.
//
#define STATUS_UNSUPPORTED_PAGING_MODE   ((NTSTATUS)0xC00004BBL)

//
// MessageId: STATUS_UNTRUSTED_MOUNT_POINT
//
// MessageText:
//
// The path cannot be traversed because it contains an untrusted mount point.
//
#define STATUS_UNTRUSTED_MOUNT_POINT     ((NTSTATUS)0xC00004BCL)

//
// MessageId: STATUS_HAS_SYSTEM_CRITICAL_FILES
//
// MessageText:
//
// The volume contains paging, crash dump or other system critical files.
//
#define STATUS_HAS_SYSTEM_CRITICAL_FILES ((NTSTATUS)0xC00004BDL)

//
// MessageId: STATUS_OBJECT_IS_IMMUTABLE
//
// MessageText:
//
// The request cannot be completed as it requires modifying an immutable object.
//
#define STATUS_OBJECT_IS_IMMUTABLE       ((NTSTATUS)0xC00004BEL)

//
// MessageId: STATUS_FT_READ_FROM_COPY_FAILURE
//
// MessageText:
//
// The specified copy of the requested data could not be read.
//
#define STATUS_FT_READ_FROM_COPY_FAILURE ((NTSTATUS)0xC00004BFL)

//
// MessageId: STATUS_IMAGE_LOADED_AS_PATCH_IMAGE
//
// MessageText:
//
// This image cannot be loaded because it has already been loaded as a hot patch image.
//
#define STATUS_IMAGE_LOADED_AS_PATCH_IMAGE ((NTSTATUS)0xC00004C0L)

//
// MessageId: STATUS_STORAGE_STACK_ACCESS_DENIED
//
// MessageText:
//
// The storage stack returned STATUS_ACCESS_DENEID for the current operation.
//
#define STATUS_STORAGE_STACK_ACCESS_DENIED ((NTSTATUS)0xC00004C1L)

//
// MessageId: STATUS_INSUFFICIENT_VIRTUAL_ADDR_RESOURCES
//
// MessageText:
//
// Insufficient Virtual Address resources to complete the operation.
//
#define STATUS_INSUFFICIENT_VIRTUAL_ADDR_RESOURCES ((NTSTATUS)0xC00004C2L)

//
// MessageId: STATUS_ENCRYPTED_FILE_NOT_SUPPORTED
//
// MessageText:
//
// The specified operation is not supported on an encrypted file.
//
#define STATUS_ENCRYPTED_FILE_NOT_SUPPORTED ((NTSTATUS)0xC00004C3L)

//
// MessageId: STATUS_SPARSE_FILE_NOT_SUPPORTED
//
// MessageText:
//
// The specified operation is not supported on a sparse file.
//
#define STATUS_SPARSE_FILE_NOT_SUPPORTED ((NTSTATUS)0xC00004C4L)

//
// MessageId: STATUS_PAGEFILE_NOT_SUPPORTED
//
// MessageText:
//
// The specified operation is not supported on a pagefile.
//
#define STATUS_PAGEFILE_NOT_SUPPORTED    ((NTSTATUS)0xC00004C5L)

//
// MessageId: STATUS_VOLUME_NOT_SUPPORTED
//
// MessageText:
//
// The specified operation is not supported on a volume.
//
#define STATUS_VOLUME_NOT_SUPPORTED      ((NTSTATUS)0xC00004C6L)

//
// MessageId: STATUS_NOT_SUPPORTED_WITH_BYPASSIO
//
// MessageText:
//
// The specified operation is not supported on a BypassIO enabled file.
//
#define STATUS_NOT_SUPPORTED_WITH_BYPASSIO ((NTSTATUS)0xC00004C7L)

//
// MessageId: STATUS_NO_BYPASSIO_DRIVER_SUPPORT
//
// MessageText:
//
// The specified driver does not support BypassIO operations.
//
#define STATUS_NO_BYPASSIO_DRIVER_SUPPORT ((NTSTATUS)0xC00004C8L)

//
// MessageId: STATUS_NOT_SUPPORTED_WITH_ENCRYPTION
//
// MessageText:
//
// The specified operation is not supported while encryption is enabled on the target object.
//
#define STATUS_NOT_SUPPORTED_WITH_ENCRYPTION ((NTSTATUS)0xC00004C9L)

//
// MessageId: STATUS_NOT_SUPPORTED_WITH_COMPRESSION
//
// MessageText:
//
// The specified operation is not supported while compression is enabled on the target object.
//
#define STATUS_NOT_SUPPORTED_WITH_COMPRESSION ((NTSTATUS)0xC00004CAL)

//
// MessageId: STATUS_NOT_SUPPORTED_WITH_REPLICATION
//
// MessageText:
//
// The specified operation is not supported while replication is enabled on the target object.
//
#define STATUS_NOT_SUPPORTED_WITH_REPLICATION ((NTSTATUS)0xC00004CBL)

//
// MessageId: STATUS_NOT_SUPPORTED_WITH_DEDUPLICATION
//
// MessageText:
//
// The specified operation is not supported while deduplication is enabled on the target object.
//
#define STATUS_NOT_SUPPORTED_WITH_DEDUPLICATION ((NTSTATUS)0xC00004CCL)

//
// MessageId: STATUS_NOT_SUPPORTED_WITH_AUDITING
//
// MessageText:
//
// The specified operation is not supported while auditing is enabled on the target object.
//
#define STATUS_NOT_SUPPORTED_WITH_AUDITING ((NTSTATUS)0xC00004CDL)

//
// MessageId: STATUS_NOT_SUPPORTED_WITH_MONITORING
//
// MessageText:
//
// The specified operation is not supported while monitoring is enabled on the target object.
//
#define STATUS_NOT_SUPPORTED_WITH_MONITORING ((NTSTATUS)0xC00004CEL)

//
// MessageId: STATUS_NOT_SUPPORTED_WITH_SNAPSHOT
//
// MessageText:
//
// The specified operation is not supported while snapshot is enabled on the target object.
//
#define STATUS_NOT_SUPPORTED_WITH_SNAPSHOT ((NTSTATUS)0xC00004CFL)

//
// MessageId: STATUS_NOT_SUPPORTED_WITH_VIRTUALIZATION
//
// MessageText:
//
// The specified operation is not supported while virtualization is enabled on the target object.
//
#define STATUS_NOT_SUPPORTED_WITH_VIRTUALIZATION ((NTSTATUS)0xC00004D0L)

//
// MessageId: STATUS_INDEX_OUT_OF_BOUNDS
//
// MessageText:
//
// The specified index is beyond the bounds of valid range.
//
#define STATUS_INDEX_OUT_OF_BOUNDS       ((NTSTATUS)0xC00004D1L)

//
// MessageId: STATUS_BYPASSIO_FLT_NOT_SUPPORTED
//
// MessageText:
//
// At least one minifilter does not support bypass IO.
//
#define STATUS_BYPASSIO_FLT_NOT_SUPPORTED ((NTSTATUS)0xC00004D2L)

//
// MessageId: STATUS_VOLUME_WRITE_ACCESS_DENIED
//
// MessageText:
//
// The volume is opened for exclusive write access, preventing files from being opened for write access.
//
#define STATUS_VOLUME_WRITE_ACCESS_DENIED ((NTSTATUS)0xC00004D3L)

//
// MessageId: STATUS_NOT_SUPPORTED_WITH_CACHED_HANDLE
//
// MessageText:
//
// The specified operation is not supported on a file opened for cached IO.
//
#define STATUS_NOT_SUPPORTED_WITH_CACHED_HANDLE ((NTSTATUS)0xC00004D5L)


//     **** New SYSTEM error codes can be inserted here ****

//
// MessageId: STATUS_INVALID_TASK_NAME
//
// MessageText:
//
// The specified task name is invalid.
//
#define STATUS_INVALID_TASK_NAME         ((NTSTATUS)0xC0000500L)

//
// MessageId: STATUS_INVALID_TASK_INDEX
//
// MessageText:
//
// The specified task index is invalid.
//
#define STATUS_INVALID_TASK_INDEX        ((NTSTATUS)0xC0000501L)

//
// MessageId: STATUS_THREAD_ALREADY_IN_TASK
//
// MessageText:
//
// The specified thread is already joining a task.
//
#define STATUS_THREAD_ALREADY_IN_TASK    ((NTSTATUS)0xC0000502L)

//
// MessageId: STATUS_CALLBACK_BYPASS
//
// MessageText:
//
// A callback has requested to bypass native code.
//
#define STATUS_CALLBACK_BYPASS           ((NTSTATUS)0xC0000503L)

//
// MessageId: STATUS_UNDEFINED_SCOPE
//
// MessageText:
//
// The Central Access Policy specified is not defined on the target machine.
//
#define STATUS_UNDEFINED_SCOPE           ((NTSTATUS)0xC0000504L)

//
// MessageId: STATUS_INVALID_CAP
//
// MessageText:
//
// The Central Access Policy obtained from Active Directory is invalid.
//
#define STATUS_INVALID_CAP               ((NTSTATUS)0xC0000505L)

//
// MessageId: STATUS_NOT_GUI_PROCESS
//
// MessageText:
//
// Unable to finish the requested operation because the specified process is not a GUI process.
//
#define STATUS_NOT_GUI_PROCESS           ((NTSTATUS)0xC0000506L)

//
// MessageId: STATUS_DEVICE_HUNG
//
// MessageText:
//
// The device is not responding and cannot be safely removed.
//
#define STATUS_DEVICE_HUNG               ((NTSTATUS)0xC0000507L)

//
// MessageId: STATUS_CONTAINER_ASSIGNED
//
// MessageText:
//
// The specified Job already has a container assigned to it.
//
#define STATUS_CONTAINER_ASSIGNED        ((NTSTATUS)0xC0000508L)

//
// MessageId: STATUS_JOB_NO_CONTAINER
//
// MessageText:
//
// The specified Job does not have a container assigned to it.
//
#define STATUS_JOB_NO_CONTAINER          ((NTSTATUS)0xC0000509L)

//
// MessageId: STATUS_DEVICE_UNRESPONSIVE
//
// MessageText:
//
// The device is unresponsive.
//
#define STATUS_DEVICE_UNRESPONSIVE       ((NTSTATUS)0xC000050AL)

//
// MessageId: STATUS_REPARSE_POINT_ENCOUNTERED
//
// MessageText:
//
// The object manager encountered a reparse point while retrieving an object.
//
#define STATUS_REPARSE_POINT_ENCOUNTERED ((NTSTATUS)0xC000050BL)

//
// MessageId: STATUS_ATTRIBUTE_NOT_PRESENT
//
// MessageText:
//
// The requested attribute is not present on the specified file or directory.
//
#define STATUS_ATTRIBUTE_NOT_PRESENT     ((NTSTATUS)0xC000050CL)

//
// MessageId: STATUS_NOT_A_TIERED_VOLUME
//
// MessageText:
//
// This volume is not a tiered volume.
//
#define STATUS_NOT_A_TIERED_VOLUME       ((NTSTATUS)0xC000050DL)

//
// MessageId: STATUS_ALREADY_HAS_STREAM_ID
//
// MessageText:
//
// This file is currently associated with a different stream id.
//
#define STATUS_ALREADY_HAS_STREAM_ID     ((NTSTATUS)0xC000050EL)

//
// MessageId: STATUS_JOB_NOT_EMPTY
//
// MessageText:
//
// The requested operation could not be completed because the specified job has children.
//
#define STATUS_JOB_NOT_EMPTY             ((NTSTATUS)0xC000050FL)

//
// MessageId: STATUS_ALREADY_INITIALIZED
//
// MessageText:
//
// The specified object has already been initialized.
//
#define STATUS_ALREADY_INITIALIZED       ((NTSTATUS)0xC0000510L)

//
// MessageId: STATUS_ENCLAVE_NOT_TERMINATED
//
// MessageText:
//
// The specified enclave has not yet been terminated.
//
#define STATUS_ENCLAVE_NOT_TERMINATED    ((NTSTATUS)0xC0000511L)

//
// MessageId: STATUS_ENCLAVE_IS_TERMINATING
//
// MessageText:
//
// An attempt was made to access an enclave that has begun termination.
//
#define STATUS_ENCLAVE_IS_TERMINATING    ((NTSTATUS)0xC0000512L)

//
// MessageId: STATUS_SMB1_NOT_AVAILABLE
//
// MessageText:
//
// You can't connect to the file share because it's not secure. This share requires the obsolete SMB1 protocol, which is unsafe and could expose your system to attack.
// Your system requires SMB2 or higher. For more info on resolving this issue, see: https://go.microsoft.com/fwlink/?linkid=852747
//
#define STATUS_SMB1_NOT_AVAILABLE        ((NTSTATUS)0xC0000513L)

//
// MessageId: STATUS_SMR_GARBAGE_COLLECTION_REQUIRED
//
// MessageText:
//
// The volume must undergo garbage collection.
//
#define STATUS_SMR_GARBAGE_COLLECTION_REQUIRED ((NTSTATUS)0xC0000514L)

//
// MessageId: STATUS_INTERRUPTED
//
// MessageText:
//
// Execution of the thread was interrupted.
//
#define STATUS_INTERRUPTED               ((NTSTATUS)0xC0000515L)    // winnt

//
// MessageId: STATUS_THREAD_NOT_RUNNING
//
// MessageText:
//
// The target thread is not currently running.
//
#define STATUS_THREAD_NOT_RUNNING        ((NTSTATUS)0xC0000516L)    // winnt

//
// MessageId: STATUS_SESSION_KEY_TOO_SHORT
//
// MessageText:
//
// The negotiated session key does not meet the minimum length requirement.
//
#define STATUS_SESSION_KEY_TOO_SHORT     ((NTSTATUS)0xC0000517L)

//
// MessageId: STATUS_FS_METADATA_INCONSISTENT
//
// MessageText:
//
// The file system encountered a metadata file with inconsistent data.
//
#define STATUS_FS_METADATA_INCONSISTENT  ((NTSTATUS)0xC0000518L)


//     **** New SYSTEM error codes can be inserted here ****

//
// MessageId: STATUS_FAIL_FAST_EXCEPTION
//
// MessageText:
//
// {Fail Fast Exception}
// A fail fast exception occurred. Exception handlers will not be invoked and the process will be terminated immediately.
//
#define STATUS_FAIL_FAST_EXCEPTION       ((NTSTATUS)0xC0000602L)

//
// MessageId: STATUS_IMAGE_CERT_REVOKED
//
// MessageText:
//
// Windows cannot verify the digital signature for this file. The signing certificate for this file has been revoked.
//
#define STATUS_IMAGE_CERT_REVOKED        ((NTSTATUS)0xC0000603L)

//
// MessageId: STATUS_DYNAMIC_CODE_BLOCKED
//
// MessageText:
//
// The operation was blocked as the process prohibits dynamic code generation.
//
#define STATUS_DYNAMIC_CODE_BLOCKED      ((NTSTATUS)0xC0000604L)

//
// MessageId: STATUS_IMAGE_CERT_EXPIRED
//
// MessageText:
//
// Windows cannot verify the digital signature for this file. The signing certificate for this file has expired.
//
#define STATUS_IMAGE_CERT_EXPIRED        ((NTSTATUS)0xC0000605L)

//
// MessageId: STATUS_STRICT_CFG_VIOLATION
//
// MessageText:
//
// The specified image file was blocked from loading because it does not enable a feature required by the process: Control Flow Guard.
//
#define STATUS_STRICT_CFG_VIOLATION      ((NTSTATUS)0xC0000606L)

//
// MessageId: STATUS_SET_CONTEXT_DENIED
//
// MessageText:
//
// The thread context could not be updated because this has been restricted for the process.
//
#define STATUS_SET_CONTEXT_DENIED        ((NTSTATUS)0xC000060AL)

//
// MessageId: STATUS_CROSS_PARTITION_VIOLATION
//
// MessageText:
//
// An attempt to access another partition's private file/section was rejected.
//
#define STATUS_CROSS_PARTITION_VIOLATION ((NTSTATUS)0xC000060BL)

//
// MessageId: STATUS_PORT_CLOSED
//
// MessageText:
//
// The ALPC port is closed.
//
#define STATUS_PORT_CLOSED               ((NTSTATUS)0xC0000700L)

//
// MessageId: STATUS_MESSAGE_LOST
//
// MessageText:
//
// The ALPC message requested is no longer available.
//
#define STATUS_MESSAGE_LOST              ((NTSTATUS)0xC0000701L)

//
// MessageId: STATUS_INVALID_MESSAGE
//
// MessageText:
//
// The ALPC message supplied is invalid.
//
#define STATUS_INVALID_MESSAGE           ((NTSTATUS)0xC0000702L)

//
// MessageId: STATUS_REQUEST_CANCELED
//
// MessageText:
//
// The ALPC message has been canceled.
//
#define STATUS_REQUEST_CANCELED          ((NTSTATUS)0xC0000703L)

//
// MessageId: STATUS_RECURSIVE_DISPATCH
//
// MessageText:
//
// Invalid recursive dispatch attempt.
//
#define STATUS_RECURSIVE_DISPATCH        ((NTSTATUS)0xC0000704L)

//
// MessageId: STATUS_LPC_RECEIVE_BUFFER_EXPECTED
//
// MessageText:
//
// No receive buffer has been supplied in a synchronous request.
//
#define STATUS_LPC_RECEIVE_BUFFER_EXPECTED ((NTSTATUS)0xC0000705L)

//
// MessageId: STATUS_LPC_INVALID_CONNECTION_USAGE
//
// MessageText:
//
// The connection port is used in an invalid context.
//
#define STATUS_LPC_INVALID_CONNECTION_USAGE ((NTSTATUS)0xC0000706L)

//
// MessageId: STATUS_LPC_REQUESTS_NOT_ALLOWED
//
// MessageText:
//
// The ALPC port does not accept new request messages.
//
#define STATUS_LPC_REQUESTS_NOT_ALLOWED  ((NTSTATUS)0xC0000707L)

//
// MessageId: STATUS_RESOURCE_IN_USE
//
// MessageText:
//
// The resource requested is already in use.
//
#define STATUS_RESOURCE_IN_USE           ((NTSTATUS)0xC0000708L)

//
// MessageId: STATUS_HARDWARE_MEMORY_ERROR
//
// MessageText:
//
// The hardware has reported an uncorrectable memory error.
//
#define STATUS_HARDWARE_MEMORY_ERROR     ((NTSTATUS)0xC0000709L)

//
// MessageId: STATUS_THREADPOOL_HANDLE_EXCEPTION
//
// MessageText:
//
// Status 0x%08x was returned, waiting on handle 0x%x for wait 0x%p, in waiter 0x%p.
//
#define STATUS_THREADPOOL_HANDLE_EXCEPTION ((NTSTATUS)0xC000070AL)

//
// MessageId: STATUS_THREADPOOL_SET_EVENT_ON_COMPLETION_FAILED
//
// MessageText:
//
// After a callback to 0x%p(0x%p), a completion call to SetEvent(0x%p) failed with status 0x%08x.
//
#define STATUS_THREADPOOL_SET_EVENT_ON_COMPLETION_FAILED ((NTSTATUS)0xC000070BL)

//
// MessageId: STATUS_THREADPOOL_RELEASE_SEMAPHORE_ON_COMPLETION_FAILED
//
// MessageText:
//
// After a callback to 0x%p(0x%p), a completion call to ReleaseSemaphore(0x%p, %d) failed with status 0x%08x.
//
#define STATUS_THREADPOOL_RELEASE_SEMAPHORE_ON_COMPLETION_FAILED ((NTSTATUS)0xC000070CL)

//
// MessageId: STATUS_THREADPOOL_RELEASE_MUTEX_ON_COMPLETION_FAILED
//
// MessageText:
//
// After a callback to 0x%p(0x%p), a completion call to ReleaseMutex(%p) failed with status 0x%08x.
//
#define STATUS_THREADPOOL_RELEASE_MUTEX_ON_COMPLETION_FAILED ((NTSTATUS)0xC000070DL)

//
// MessageId: STATUS_THREADPOOL_FREE_LIBRARY_ON_COMPLETION_FAILED
//
// MessageText:
//
// After a callback to 0x%p(0x%p), an completion call to FreeLibrary(%p) failed with status 0x%08x.
//
#define STATUS_THREADPOOL_FREE_LIBRARY_ON_COMPLETION_FAILED ((NTSTATUS)0xC000070EL)

//
// MessageId: STATUS_THREADPOOL_RELEASED_DURING_OPERATION
//
// MessageText:
//
// The threadpool 0x%p was released while a thread was posting a callback to 0x%p(0x%p) to it.
//
#define STATUS_THREADPOOL_RELEASED_DURING_OPERATION ((NTSTATUS)0xC000070FL)

//
// MessageId: STATUS_CALLBACK_RETURNED_WHILE_IMPERSONATING
//
// MessageText:
//
// A threadpool worker thread is impersonating a client, after a callback to 0x%p(0x%p).
// This is unexpected, indicating that the callback is missing a call to revert the impersonation.
//
#define STATUS_CALLBACK_RETURNED_WHILE_IMPERSONATING ((NTSTATUS)0xC0000710L)

//
// MessageId: STATUS_APC_RETURNED_WHILE_IMPERSONATING
//
// MessageText:
//
// A threadpool worker thread is impersonating a client, after executing an APC.
// This is unexpected, indicating that the APC is missing a call to revert the impersonation.
//
#define STATUS_APC_RETURNED_WHILE_IMPERSONATING ((NTSTATUS)0xC0000711L)

//
// MessageId: STATUS_PROCESS_IS_PROTECTED
//
// MessageText:
//
// Either the target process, or the target thread's containing process, is a protected process.
//
#define STATUS_PROCESS_IS_PROTECTED      ((NTSTATUS)0xC0000712L)

//
// MessageId: STATUS_MCA_EXCEPTION
//
// MessageText:
//
// A Thread is getting dispatched with MCA EXCEPTION because of MCA.
//
#define STATUS_MCA_EXCEPTION             ((NTSTATUS)0xC0000713L)

//
// MessageId: STATUS_CERTIFICATE_MAPPING_NOT_UNIQUE
//
// MessageText:
//
// The client certificate account mapping is not unique.
//
#define STATUS_CERTIFICATE_MAPPING_NOT_UNIQUE ((NTSTATUS)0xC0000714L)

//
// MessageId: STATUS_SYMLINK_CLASS_DISABLED
//
// MessageText:
//
// The symbolic link cannot be followed because its type is disabled.
//
#define STATUS_SYMLINK_CLASS_DISABLED    ((NTSTATUS)0xC0000715L)

//
// MessageId: STATUS_INVALID_IDN_NORMALIZATION
//
// MessageText:
//
// Indicates that the specified string is not valid for IDN normalization.
//
#define STATUS_INVALID_IDN_NORMALIZATION ((NTSTATUS)0xC0000716L)

//
// MessageId: STATUS_NO_UNICODE_TRANSLATION
//
// MessageText:
//
// No mapping for the Unicode character exists in the target multi-byte code page.
//
#define STATUS_NO_UNICODE_TRANSLATION    ((NTSTATUS)0xC0000717L)

//
// MessageId: STATUS_ALREADY_REGISTERED
//
// MessageText:
//
// The provided callback is already registered.
//
#define STATUS_ALREADY_REGISTERED        ((NTSTATUS)0xC0000718L)    //winnt

//
// MessageId: STATUS_CONTEXT_MISMATCH
//
// MessageText:
//
// The provided context did not match the target.
//
#define STATUS_CONTEXT_MISMATCH          ((NTSTATUS)0xC0000719L)

//
// MessageId: STATUS_PORT_ALREADY_HAS_COMPLETION_LIST
//
// MessageText:
//
// The specified port already has a completion list.
//
#define STATUS_PORT_ALREADY_HAS_COMPLETION_LIST ((NTSTATUS)0xC000071AL)

//
// MessageId: STATUS_CALLBACK_RETURNED_THREAD_PRIORITY
//
// MessageText:
//
// A threadpool worker thread enter a callback at thread base priority 0x%x and exited at priority 0x%x.
// This is unexpected, indicating that the callback missed restoring the priority.
//
#define STATUS_CALLBACK_RETURNED_THREAD_PRIORITY ((NTSTATUS)0xC000071BL)

//
// MessageId: STATUS_INVALID_THREAD
//
// MessageText:
//
// An invalid thread, handle %p, is specified for this operation. Possibly, a threadpool worker thread was specified.
//
#define STATUS_INVALID_THREAD            ((NTSTATUS)0xC000071CL)

//
// MessageId: STATUS_CALLBACK_RETURNED_TRANSACTION
//
// MessageText:
//
// A threadpool worker thread enter a callback, which left transaction state.
// This is unexpected, indicating that the callback missed clearing the transaction.
//
#define STATUS_CALLBACK_RETURNED_TRANSACTION ((NTSTATUS)0xC000071DL)

//
// MessageId: STATUS_CALLBACK_RETURNED_LDR_LOCK
//
// MessageText:
//
// A threadpool worker thread enter a callback, which left the loader lock held.
// This is unexpected, indicating that the callback missed releasing the lock.
//
#define STATUS_CALLBACK_RETURNED_LDR_LOCK ((NTSTATUS)0xC000071EL)

//
// MessageId: STATUS_CALLBACK_RETURNED_LANG
//
// MessageText:
//
// A threadpool worker thread enter a callback, which left with preferred languages set.
// This is unexpected, indicating that the callback missed clearing them.
//
#define STATUS_CALLBACK_RETURNED_LANG    ((NTSTATUS)0xC000071FL)

//
// MessageId: STATUS_CALLBACK_RETURNED_PRI_BACK
//
// MessageText:
//
// A threadpool worker thread enter a callback, which left with background priorities set.
// This is unexpected, indicating that the callback missed restoring the original priorities.
//
#define STATUS_CALLBACK_RETURNED_PRI_BACK ((NTSTATUS)0xC0000720L)

//
// MessageId: STATUS_CALLBACK_RETURNED_THREAD_AFFINITY
//
// MessageText:
//
// A threadpool worker thread enter a callback at thread affinity %p and exited at affinity %p.
// This is unexpected, indicating that the callback missed restoring the priority.
//
#define STATUS_CALLBACK_RETURNED_THREAD_AFFINITY ((NTSTATUS)0xC0000721L)

//
// MessageId: STATUS_LPC_HANDLE_COUNT_EXCEEDED
//
// MessageText:
//
// The caller has exceeded the maximum number of handles that may be transmitted in
// a single local procedure call.
//
#define STATUS_LPC_HANDLE_COUNT_EXCEEDED ((NTSTATUS)0xC0000722L)

//
// MessageId: STATUS_EXECUTABLE_MEMORY_WRITE
//
// MessageText:
//
// A write to executable memory occurred for a process that is managing such operations.
//
#define STATUS_EXECUTABLE_MEMORY_WRITE   ((NTSTATUS)0xC0000723L)

//
// MessageId: STATUS_KERNEL_EXECUTABLE_MEMORY_WRITE
//
// MessageText:
//
// A write to executable memory occurred from kernel mode for a process that is managing such operations.
//
#define STATUS_KERNEL_EXECUTABLE_MEMORY_WRITE ((NTSTATUS)0xC0000724L)

//
// MessageId: STATUS_ATTACHED_EXECUTABLE_MEMORY_WRITE
//
// MessageText:
//
// A write to executable memory occurred from kernel mode while attached to a process that is managing such operations.
//
#define STATUS_ATTACHED_EXECUTABLE_MEMORY_WRITE ((NTSTATUS)0xC0000725L)

//
// MessageId: STATUS_TRIGGERED_EXECUTABLE_MEMORY_WRITE
//
// MessageText:
//
// A write to executable memory was triggered cross-process to a process that is managing such operations.
//
#define STATUS_TRIGGERED_EXECUTABLE_MEMORY_WRITE ((NTSTATUS)0xC0000726L)

//
// MessageId: STATUS_DISK_REPAIR_DISABLED
//
// MessageText:
//
// The attempted operation required self healing to be enabled.
//
#define STATUS_DISK_REPAIR_DISABLED      ((NTSTATUS)0xC0000800L)

//
// MessageId: STATUS_DS_DOMAIN_RENAME_IN_PROGRESS
//
// MessageText:
//
// The Directory Service cannot perform the requested operation because a domain rename operation is in progress.
//
#define STATUS_DS_DOMAIN_RENAME_IN_PROGRESS ((NTSTATUS)0xC0000801L)

//
// MessageId: STATUS_DISK_QUOTA_EXCEEDED
//
// MessageText:
//
// The requested file operation failed because the storage quota was exceeded.
// To free up disk space, move files to a different location or delete unnecessary files. For more information, contact your system administrator.
//
#define STATUS_DISK_QUOTA_EXCEEDED       ((NTSTATUS)0xC0000802L)

//
// MessageId: STATUS_DATA_LOST_REPAIR
//
// MessageText:
//
// Windows discovered a corruption in the file "%hs".
// This file has now been repaired.
// Please check if any data in the file was lost because of the corruption.
//
#define STATUS_DATA_LOST_REPAIR          ((NTSTATUS)0x80000803L)

//
// MessageId: STATUS_CONTENT_BLOCKED
//
// MessageText:
//
// The requested file operation failed because the storage policy blocks that type of file. For more information, contact your system administrator.
//
#define STATUS_CONTENT_BLOCKED           ((NTSTATUS)0xC0000804L)

//
// MessageId: STATUS_BAD_CLUSTERS
//
// MessageText:
//
// The operation could not be completed due to bad clusters on disk.
//
#define STATUS_BAD_CLUSTERS              ((NTSTATUS)0xC0000805L)

//
// MessageId: STATUS_VOLUME_DIRTY
//
// MessageText:
//
// The operation could not be completed because the volume is dirty. Please run chkdsk and try again.
//
#define STATUS_VOLUME_DIRTY              ((NTSTATUS)0xC0000806L)

//
// MessageId: STATUS_DISK_REPAIR_REDIRECTED
//
// MessageText:
//
// The volume repair could not be performed while it is online.
// Please schedule to take the volume offline so that it can be repaired.
//
#define STATUS_DISK_REPAIR_REDIRECTED    ((NTSTATUS)0x40000807L)

//
// MessageId: STATUS_DISK_REPAIR_UNSUCCESSFUL
//
// MessageText:
//
// The volume repair was not successful.
//
#define STATUS_DISK_REPAIR_UNSUCCESSFUL  ((NTSTATUS)0xC0000808L)

//
// MessageId: STATUS_CORRUPT_LOG_OVERFULL
//
// MessageText:
//
// One of the volume corruption logs is full. Further corruptions that may be detected won't be logged.
//
#define STATUS_CORRUPT_LOG_OVERFULL      ((NTSTATUS)0xC0000809L)

//
// MessageId: STATUS_CORRUPT_LOG_CORRUPTED
//
// MessageText:
//
// One of the volume corruption logs is internally corrupted and needs to be recreated. The volume may contain undetected corruptions and must be scanned.
//
#define STATUS_CORRUPT_LOG_CORRUPTED     ((NTSTATUS)0xC000080AL)

//
// MessageId: STATUS_CORRUPT_LOG_UNAVAILABLE
//
// MessageText:
//
// One of the volume corruption logs is unavailable for being operated on.
//
#define STATUS_CORRUPT_LOG_UNAVAILABLE   ((NTSTATUS)0xC000080BL)

//
// MessageId: STATUS_CORRUPT_LOG_DELETED_FULL
//
// MessageText:
//
// One of the volume corruption logs was deleted while still having corruption records in them. The volume contains detected corruptions and must be scanned.
//
#define STATUS_CORRUPT_LOG_DELETED_FULL  ((NTSTATUS)0xC000080CL)

//
// MessageId: STATUS_CORRUPT_LOG_CLEARED
//
// MessageText:
//
// One of the volume corruption logs was cleared by chkdsk and no longer contains real corruptions.
//
#define STATUS_CORRUPT_LOG_CLEARED       ((NTSTATUS)0xC000080DL)

//
// MessageId: STATUS_ORPHAN_NAME_EXHAUSTED
//
// MessageText:
//
// Orphaned files exist on the volume but could not be recovered because no more new names could be created in the recovery directory. Files must be moved from the recovery directory.
//
#define STATUS_ORPHAN_NAME_EXHAUSTED     ((NTSTATUS)0xC000080EL)

//
// MessageId: STATUS_PROACTIVE_SCAN_IN_PROGRESS
//
// MessageText:
//
// The operation could not be completed because an instance of Proactive Scanner is currently running.
//
#define STATUS_PROACTIVE_SCAN_IN_PROGRESS ((NTSTATUS)0xC000080FL)

//
// MessageId: STATUS_ENCRYPTED_IO_NOT_POSSIBLE
//
// MessageText:
//
// The read or write operation to an encrypted file could not be completed because the file has not been opened for data access.
//
#define STATUS_ENCRYPTED_IO_NOT_POSSIBLE ((NTSTATUS)0xC0000810L)

//
// MessageId: STATUS_CORRUPT_LOG_UPLEVEL_RECORDS
//
// MessageText:
//
// One of the volume corruption logs comes from a newer version of Windows and contains corruption records. The log will be emptied and reset to the current version, and the volume health state will be updated accordingly.
//
#define STATUS_CORRUPT_LOG_UPLEVEL_RECORDS ((NTSTATUS)0xC0000811L)

//
// MessageId: STATUS_FILE_CHECKED_OUT
//
// MessageText:
//
// This file is checked out or locked for editing by another user.
//
#define STATUS_FILE_CHECKED_OUT          ((NTSTATUS)0xC0000901L)

//
// MessageId: STATUS_CHECKOUT_REQUIRED
//
// MessageText:
//
// The file must be checked out before saving changes.
//
#define STATUS_CHECKOUT_REQUIRED         ((NTSTATUS)0xC0000902L)

//
// MessageId: STATUS_BAD_FILE_TYPE
//
// MessageText:
//
// The file type being saved or retrieved has been blocked.
//
#define STATUS_BAD_FILE_TYPE             ((NTSTATUS)0xC0000903L)

//
// MessageId: STATUS_FILE_TOO_LARGE
//
// MessageText:
//
// The file size exceeds the limit allowed and cannot be saved.
//
#define STATUS_FILE_TOO_LARGE            ((NTSTATUS)0xC0000904L)

//
// MessageId: STATUS_FORMS_AUTH_REQUIRED
//
// MessageText:
//
// Access Denied. Before opening files in this location, you must first browse to the web site and select the option to login automatically.
//
#define STATUS_FORMS_AUTH_REQUIRED       ((NTSTATUS)0xC0000905L)

//
// MessageId: STATUS_VIRUS_INFECTED
//
// MessageText:
//
// Operation did not complete successfully because the file contains a virus or potentially unwanted software.
//
#define STATUS_VIRUS_INFECTED            ((NTSTATUS)0xC0000906L)

//
// MessageId: STATUS_VIRUS_DELETED
//
// MessageText:
//
// This file contains a virus or potentially unwanted software and cannot be opened. Due to the nature of this virus or potentially unwanted software, the file has been removed from this location.
//
#define STATUS_VIRUS_DELETED             ((NTSTATUS)0xC0000907L)

//
// MessageId: STATUS_BAD_MCFG_TABLE
//
// MessageText:
//
// The resources required for this device conflict with the MCFG table.
//
#define STATUS_BAD_MCFG_TABLE            ((NTSTATUS)0xC0000908L)

//
// MessageId: STATUS_CANNOT_BREAK_OPLOCK
//
// MessageText:
//
// The operation did not complete successfully because it would cause an oplock to be broken. The caller has requested that existing oplocks not be broken.
//
#define STATUS_CANNOT_BREAK_OPLOCK       ((NTSTATUS)0xC0000909L)

//
// MessageId: STATUS_BAD_KEY
//
// MessageText:
//
// Bad key.
//
#define STATUS_BAD_KEY                   ((NTSTATUS)0xC000090AL)

//
// MessageId: STATUS_BAD_DATA
//
// MessageText:
//
// Bad data.
//
#define STATUS_BAD_DATA                  ((NTSTATUS)0xC000090BL)

//
// MessageId: STATUS_NO_KEY
//
// MessageText:
//
// Key does not exist.
//
#define STATUS_NO_KEY                    ((NTSTATUS)0xC000090CL)

//
// MessageId: STATUS_FILE_HANDLE_REVOKED
//
// MessageText:
//
// Access to the specified file handle has been revoked.
//
#define STATUS_FILE_HANDLE_REVOKED       ((NTSTATUS)0xC0000910L)

//
// MessageId: STATUS_SECTION_DIRECT_MAP_ONLY
//
// MessageText:
//
// The specified section is supported by direct map technology but the caller specifically does not want that.
//
#define STATUS_SECTION_DIRECT_MAP_ONLY   ((NTSTATUS)0xC0000911L)

/*++

 MessageId's 0xc08 - 0xc7f (inclusive) are reserved for Verifier errors.

--*/
//
// MessageId: STATUS_VRF_VOLATILE_CFG_AND_IO_ENABLED
//
// MessageText:
//
// Enabling driver verification from volatile command is currently not supported when both CFG and IO are enabled.
//
#define STATUS_VRF_VOLATILE_CFG_AND_IO_ENABLED ((NTSTATUS)0xC0000C08L)

//
// MessageId: STATUS_VRF_VOLATILE_NOT_STOPPABLE
//
// MessageText:
//
// Removal of current driver verification is not supported from volatile command.
//
#define STATUS_VRF_VOLATILE_NOT_STOPPABLE ((NTSTATUS)0xC0000C09L)

//
// MessageId: STATUS_VRF_VOLATILE_SAFE_MODE
//
// MessageText:
//
// Enabling driver verification is not supported in safe mode.
//
#define STATUS_VRF_VOLATILE_SAFE_MODE    ((NTSTATUS)0xC0000C0AL)

//
// MessageId: STATUS_VRF_VOLATILE_NOT_RUNNABLE_SYSTEM
//
// MessageText:
//
// Enabling driver verification is not supported from volatile mode in current system.
//
#define STATUS_VRF_VOLATILE_NOT_RUNNABLE_SYSTEM ((NTSTATUS)0xC0000C0BL)

//
// MessageId: STATUS_VRF_VOLATILE_NOT_SUPPORTED_RULECLASS
//
// MessageText:
//
// The specified rule class (a.k.a. flag) is not supported from volatile mode.
//
#define STATUS_VRF_VOLATILE_NOT_SUPPORTED_RULECLASS ((NTSTATUS)0xC0000C0CL)

//
// MessageId: STATUS_VRF_VOLATILE_PROTECTED_DRIVER
//
// MessageText:
//
// The specified driver is protected and volatile verification is currently not supported.
//
#define STATUS_VRF_VOLATILE_PROTECTED_DRIVER ((NTSTATUS)0xC0000C0DL)

//
// MessageId: STATUS_VRF_VOLATILE_NMI_REGISTERED
//
// MessageText:
//
// Enabling driver verification is not supported for a driver with  NMI callback(s) registered.
//
#define STATUS_VRF_VOLATILE_NMI_REGISTERED ((NTSTATUS)0xC0000C0EL)

//
// MessageId: STATUS_VRF_VOLATILE_SETTINGS_CONFLICT
//
// MessageText:
//
// Volatile verification settings cannot be changed when verification is enabled from boot or DIF volatile verification is enabled.
//
#define STATUS_VRF_VOLATILE_SETTINGS_CONFLICT ((NTSTATUS)0xC0000C0FL)

//
// MessageId: STATUS_DIF_IOCALLBACK_NOT_REPLACED
//
// MessageText:
//
// The specified driver is not associated with driver object or driver extension.
//
#define STATUS_DIF_IOCALLBACK_NOT_REPLACED ((NTSTATUS)0xC0000C76L)

//
// MessageId: STATUS_DIF_LIVEDUMP_LIMIT_EXCEEDED
//
// MessageText:
//
// Verifier's internal data size exceeds the limit of live dump secondary data.
//
#define STATUS_DIF_LIVEDUMP_LIMIT_EXCEEDED ((NTSTATUS)0xC0000C77L)

//
// MessageId: STATUS_DIF_VOLATILE_SECTION_NOT_LOCKED
//
// MessageText:
//
// Verification cannot start because an attempt to lock code or data section failed.
//
#define STATUS_DIF_VOLATILE_SECTION_NOT_LOCKED ((NTSTATUS)0xC0000C78L)

//
// MessageId: STATUS_DIF_VOLATILE_DRIVER_HOTPATCHED
//
// MessageText:
//
// DIF volatile verification is not supported for hotpatched driver.
//
#define STATUS_DIF_VOLATILE_DRIVER_HOTPATCHED ((NTSTATUS)0xC0000C79L)

//
// MessageId: STATUS_DIF_VOLATILE_INVALID_INFO
//
// MessageText:
//
// The passed system DIF information is invalid.
//
#define STATUS_DIF_VOLATILE_INVALID_INFO ((NTSTATUS)0xC0000C7AL)

//
// MessageId: STATUS_DIF_VOLATILE_DRIVER_IS_NOT_RUNNING
//
// MessageText:
//
// DIF volatile only supports on loaded drivers.
//
#define STATUS_DIF_VOLATILE_DRIVER_IS_NOT_RUNNING ((NTSTATUS)0xC0000C7BL)

//
// MessageId: STATUS_DIF_VOLATILE_PLUGIN_IS_NOT_RUNNING
//
// MessageText:
//
// Currently no plugin is running.
//
#define STATUS_DIF_VOLATILE_PLUGIN_IS_NOT_RUNNING ((NTSTATUS)0xC0000C7CL)

//
// MessageId: STATUS_DIF_VOLATILE_PLUGIN_CHANGE_NOT_ALLOWED
//
// MessageText:
//
// Currently running plugin must be removed before applying a new plugin.
//
#define STATUS_DIF_VOLATILE_PLUGIN_CHANGE_NOT_ALLOWED ((NTSTATUS)0xC0000C7DL)

//
// MessageId: STATUS_DIF_VOLATILE_NOT_ALLOWED
//
// MessageText:
//
// The plugin is not allowed to run in volatile mode.
//
#define STATUS_DIF_VOLATILE_NOT_ALLOWED  ((NTSTATUS)0xC0000C7EL)

//
// MessageId: STATUS_DIF_BINDING_API_NOT_FOUND
//
// MessageText:
//
// One or more DDI is not yet supported by DIF.
//
#define STATUS_DIF_BINDING_API_NOT_FOUND ((NTSTATUS)0xC0000C7FL)

// End of Verifier Errors
//
// MessageId: STATUS_WOW_ASSERTION
//
// MessageText:
//
// WOW Assertion Error.
//
#define STATUS_WOW_ASSERTION             ((NTSTATUS)0xC0009898L)

//
// MessageId: STATUS_INVALID_SIGNATURE
//
// MessageText:
//
// The cryptographic signature is invalid.
//
#define STATUS_INVALID_SIGNATURE         ((NTSTATUS)0xC000A000L)

//
// MessageId: STATUS_HMAC_NOT_SUPPORTED
//
// MessageText:
//
// The cryptographic provider does not support HMAC.
//
#define STATUS_HMAC_NOT_SUPPORTED        ((NTSTATUS)0xC000A001L)

//
// MessageId: STATUS_AUTH_TAG_MISMATCH
//
// MessageText:
//
// The computed authentication tag did not match the input authentication tag.
//
#define STATUS_AUTH_TAG_MISMATCH         ((NTSTATUS)0xC000A002L)

//
// MessageId: STATUS_INVALID_STATE_TRANSITION
//
// MessageText:
//
// The requested state transition is invalid and cannot be performed.
//
#define STATUS_INVALID_STATE_TRANSITION  ((NTSTATUS)0xC000A003L)

//
// MessageId: STATUS_INVALID_KERNEL_INFO_VERSION
//
// MessageText:
//
// The supplied kernel information version is invalid.
//
#define STATUS_INVALID_KERNEL_INFO_VERSION ((NTSTATUS)0xC000A004L)

//
// MessageId: STATUS_INVALID_PEP_INFO_VERSION
//
// MessageText:
//
// The supplied PEP information version is invalid.
//
#define STATUS_INVALID_PEP_INFO_VERSION  ((NTSTATUS)0xC000A005L)

//
// MessageId: STATUS_HANDLE_REVOKED
//
// MessageText:
//
// Access to the specified handle has been revoked.
//
#define STATUS_HANDLE_REVOKED            ((NTSTATUS)0xC000A006L)

//
// MessageId: STATUS_EOF_ON_GHOSTED_RANGE
//
// MessageText:
//
// The file operation will result in the end of file being on a ghosted range.
//
#define STATUS_EOF_ON_GHOSTED_RANGE      ((NTSTATUS)0xC000A007L)

//
// MessageId: STATUS_CC_NEEDS_CALLBACK_SECTION_DRAIN
//
// MessageText:
//
// Filesystem needs to release all the file resources and callback into Cc to drain pending section deletions, before retrying the operation.
//
#define STATUS_CC_NEEDS_CALLBACK_SECTION_DRAIN ((NTSTATUS)0xC000A008L)

/*++

 MessageId's 0xa010 - 0xa07f (inclusive) are reserved for TCPIP errors.

--*/
//
// MessageId: STATUS_IPSEC_QUEUE_OVERFLOW
//
// MessageText:
//
// The IPSEC queue overflowed.
//
#define STATUS_IPSEC_QUEUE_OVERFLOW      ((NTSTATUS)0xC000A010L)

//
// MessageId: STATUS_ND_QUEUE_OVERFLOW
//
// MessageText:
//
// The neighbor discovery queue overflowed.
//
#define STATUS_ND_QUEUE_OVERFLOW         ((NTSTATUS)0xC000A011L)

//
// MessageId: STATUS_HOPLIMIT_EXCEEDED
//
// MessageText:
//
// An ICMP hop limit exceeded error was received.
//
#define STATUS_HOPLIMIT_EXCEEDED         ((NTSTATUS)0xC000A012L)

//
// MessageId: STATUS_PROTOCOL_NOT_SUPPORTED
//
// MessageText:
//
// The protocol is not installed on the local machine.
//
#define STATUS_PROTOCOL_NOT_SUPPORTED    ((NTSTATUS)0xC000A013L)

//
// MessageId: STATUS_FASTPATH_REJECTED
//
// MessageText:
//
// An operation or data has been rejected while on the network fast path.
//
#define STATUS_FASTPATH_REJECTED         ((NTSTATUS)0xC000A014L)

/*++

 MessageId's 0xa014 - 0xa07f (inclusive) are reserved for TCPIP errors.

--*/
//
// MessageId: STATUS_LOST_WRITEBEHIND_DATA_NETWORK_DISCONNECTED
//
// MessageText:
//
// {Delayed Write Failed}
// Windows was unable to save all the data for the file %hs; the data has been lost.
// This error may be caused by network connectivity issues. Please try to save this file elsewhere.
//
#define STATUS_LOST_WRITEBEHIND_DATA_NETWORK_DISCONNECTED ((NTSTATUS)0xC000A080L)

//
// MessageId: STATUS_LOST_WRITEBEHIND_DATA_NETWORK_SERVER_ERROR
//
// MessageText:
//
// {Delayed Write Failed}
// Windows was unable to save all the data for the file %hs; the data has been lost.
// This error was returned by the server on which the file exists. Please try to save this file elsewhere.
//
#define STATUS_LOST_WRITEBEHIND_DATA_NETWORK_SERVER_ERROR ((NTSTATUS)0xC000A081L)

//
// MessageId: STATUS_LOST_WRITEBEHIND_DATA_LOCAL_DISK_ERROR
//
// MessageText:
//
// {Delayed Write Failed}
// Windows was unable to save all the data for the file %hs; the data has been lost.
// This error may be caused if the device has been removed or the media is write-protected.
//
#define STATUS_LOST_WRITEBEHIND_DATA_LOCAL_DISK_ERROR ((NTSTATUS)0xC000A082L)

//
// MessageId: STATUS_XML_PARSE_ERROR
//
// MessageText:
//
// Windows was unable to parse the requested XML data.
//
#define STATUS_XML_PARSE_ERROR           ((NTSTATUS)0xC000A083L)

//
// MessageId: STATUS_XMLDSIG_ERROR
//
// MessageText:
//
// An error was encountered while processing an XML digital signature.
//
#define STATUS_XMLDSIG_ERROR             ((NTSTATUS)0xC000A084L)

//
// MessageId: STATUS_WRONG_COMPARTMENT
//
// MessageText:
//
// Indicates that the caller made the connection request in the wrong routing compartment.
//
#define STATUS_WRONG_COMPARTMENT         ((NTSTATUS)0xC000A085L)

//
// MessageId: STATUS_AUTHIP_FAILURE
//
// MessageText:
//
// Indicates that there was an AuthIP failure when attempting to connect to the remote host.
//
#define STATUS_AUTHIP_FAILURE            ((NTSTATUS)0xC000A086L)

//
// MessageId: STATUS_DS_OID_MAPPED_GROUP_CANT_HAVE_MEMBERS
//
// MessageText:
//
// OID mapped groups cannot have members.
//
#define STATUS_DS_OID_MAPPED_GROUP_CANT_HAVE_MEMBERS ((NTSTATUS)0xC000A087L)

//
// MessageId: STATUS_DS_OID_NOT_FOUND
//
// MessageText:
//
// The specified OID cannot be found.
//
#define STATUS_DS_OID_NOT_FOUND          ((NTSTATUS)0xC000A088L)

//
// MessageId: STATUS_INCORRECT_ACCOUNT_TYPE
//
// MessageText:
//
// The system is not authoritative for the specified account and therefore cannot complete the operation. Please retry the operation using the provider associated with this account. If this is an online provider please use the provider's online site.
//
#define STATUS_INCORRECT_ACCOUNT_TYPE    ((NTSTATUS)0xC000A089L)

//
// MessageId: STATUS_LOCAL_POLICY_MODIFICATION_NOT_SUPPORTED
//
// MessageText:
//
// The local account policy modification request was rejected because the policy is controlled by a regional authority.
//
#define STATUS_LOCAL_POLICY_MODIFICATION_NOT_SUPPORTED ((NTSTATUS)0xC000A08AL)

/*++

 MessageId's 0xa100 - 0xa120 (inclusive) are for the SMB Hash Generation Service.

--*/
//
// MessageId: STATUS_HASH_NOT_SUPPORTED
//
// MessageText:
//
// Hash generation for the specified version and hash type is not enabled on server.
//
#define STATUS_HASH_NOT_SUPPORTED        ((NTSTATUS)0xC000A100L)

//
// MessageId: STATUS_HASH_NOT_PRESENT
//
// MessageText:
//
// The hash requests is not present or not up to date with the current file contents.
//
#define STATUS_HASH_NOT_PRESENT          ((NTSTATUS)0xC000A101L)

/*++

 MessageId's 0xa121 - 0xa140 (inclusive) are for GPIO (General Purpose I/O) controller related errors.

--*/
//
// MessageId: STATUS_SECONDARY_IC_PROVIDER_NOT_REGISTERED
//
// MessageText:
//
// The secondary interrupt controller instance that manages the specified interrupt is not registered.
//
#define STATUS_SECONDARY_IC_PROVIDER_NOT_REGISTERED ((NTSTATUS)0xC000A121L)

//
// MessageId: STATUS_GPIO_CLIENT_INFORMATION_INVALID
//
// MessageText:
//
// The information supplied by the GPIO client driver is invalid.
//
#define STATUS_GPIO_CLIENT_INFORMATION_INVALID ((NTSTATUS)0xC000A122L)

//
// MessageId: STATUS_GPIO_VERSION_NOT_SUPPORTED
//
// MessageText:
//
// The version specified by the GPIO client driver is not supported.
//
#define STATUS_GPIO_VERSION_NOT_SUPPORTED ((NTSTATUS)0xC000A123L)

//
// MessageId: STATUS_GPIO_INVALID_REGISTRATION_PACKET
//
// MessageText:
//
// The registration packet supplied by the GPIO client driver is not valid.
//
#define STATUS_GPIO_INVALID_REGISTRATION_PACKET ((NTSTATUS)0xC000A124L)

//
// MessageId: STATUS_GPIO_OPERATION_DENIED
//
// MessageText:
//
// The requested operation is not supported for the specified handle.
//
#define STATUS_GPIO_OPERATION_DENIED     ((NTSTATUS)0xC000A125L)

//
// MessageId: STATUS_GPIO_INCOMPATIBLE_CONNECT_MODE
//
// MessageText:
//
// The requested connect mode conflicts with an existing mode on one or more of the specified pins.
//
#define STATUS_GPIO_INCOMPATIBLE_CONNECT_MODE ((NTSTATUS)0xC000A126L)

//
// MessageId: STATUS_GPIO_INTERRUPT_ALREADY_UNMASKED
//
// MessageText:
//
// The interrupt requested to be unmasked is not masked.
//
#define STATUS_GPIO_INTERRUPT_ALREADY_UNMASKED ((NTSTATUS)0x8000A127L)

/*++

 MessageId's 0xa141 - 0xa160 (inclusive) are for run levels support.

--*/
//
// MessageId: STATUS_CANNOT_SWITCH_RUNLEVEL
//
// MessageText:
//
// The requested run level switch cannot be completed successfully since
// one or more services refused to stop or restart.
//
#define STATUS_CANNOT_SWITCH_RUNLEVEL    ((NTSTATUS)0xC000A141L)

//
// MessageId: STATUS_INVALID_RUNLEVEL_SETTING
//
// MessageText:
//
// The service has an invalid run level setting. The run level for a service
// must not be higher than the run level of its dependent services.
//
#define STATUS_INVALID_RUNLEVEL_SETTING  ((NTSTATUS)0xC000A142L)

//
// MessageId: STATUS_RUNLEVEL_SWITCH_TIMEOUT
//
// MessageText:
//
// The requested run level switch cannot be completed successfully since
// one or more services will not stop or restart within the specified timeout.
//
#define STATUS_RUNLEVEL_SWITCH_TIMEOUT   ((NTSTATUS)0xC000A143L)

//
// MessageId: STATUS_SERVICES_FAILED_AUTOSTART
//
// MessageText:
//
// One or more services failed to start during the service startup phase of a run level switch.
//
#define STATUS_SERVICES_FAILED_AUTOSTART ((NTSTATUS)0x4000A144L)

//
// MessageId: STATUS_RUNLEVEL_SWITCH_AGENT_TIMEOUT
//
// MessageText:
//
// A run level switch agent did not respond within the specified timeout.
//
#define STATUS_RUNLEVEL_SWITCH_AGENT_TIMEOUT ((NTSTATUS)0xC000A145L)

//
// MessageId: STATUS_RUNLEVEL_SWITCH_IN_PROGRESS
//
// MessageText:
//
// A run level switch is currently in progress.
//
#define STATUS_RUNLEVEL_SWITCH_IN_PROGRESS ((NTSTATUS)0xC000A146L)

/*++

 MessageId's 0xa200 - 0xa280 (inclusive) are reserved for app container specific messages.

--*/
//
// MessageId: STATUS_NOT_APPCONTAINER
//
// MessageText:
//
// This operation is only valid in the context of an app container.
//
#define STATUS_NOT_APPCONTAINER          ((NTSTATUS)0xC000A200L)

//
// MessageId: STATUS_NOT_SUPPORTED_IN_APPCONTAINER
//
// MessageText:
//
// This functionality is not supported in the context of an app container.
//
#define STATUS_NOT_SUPPORTED_IN_APPCONTAINER ((NTSTATUS)0xC000A201L)

//
// MessageId: STATUS_INVALID_PACKAGE_SID_LENGTH
//
// MessageText:
//
// The length of the SID supplied is not a valid length for app container SIDs.
//
#define STATUS_INVALID_PACKAGE_SID_LENGTH ((NTSTATUS)0xC000A202L)

//
// MessageId: STATUS_LPAC_ACCESS_DENIED
//
// MessageText:
//
// Access to the specified resource has been denied for a less privileged app container.
//
#define STATUS_LPAC_ACCESS_DENIED        ((NTSTATUS)0xC000A203L)

//
// MessageId: STATUS_ADMINLESS_ACCESS_DENIED
//
// MessageText:
//
// Access to the specified resource has been denied for an adminless system.
//
#define STATUS_ADMINLESS_ACCESS_DENIED   ((NTSTATUS)0xC000A204L)

/*++

 MessageId's 0xa281 - 0xa2a0 (inclusive) are reserved for Fast Cache specific messages.

--*/
//
// MessageId: STATUS_APP_DATA_NOT_FOUND
//
// MessageText:
//
// Fast Cache data not found.
//
#define STATUS_APP_DATA_NOT_FOUND        ((NTSTATUS)0xC000A281L)

//
// MessageId: STATUS_APP_DATA_EXPIRED
//
// MessageText:
//
// Fast Cache data expired.
//
#define STATUS_APP_DATA_EXPIRED          ((NTSTATUS)0xC000A282L)

//
// MessageId: STATUS_APP_DATA_CORRUPT
//
// MessageText:
//
// Fast Cache data corrupt.
//
#define STATUS_APP_DATA_CORRUPT          ((NTSTATUS)0xC000A283L)

//
// MessageId: STATUS_APP_DATA_LIMIT_EXCEEDED
//
// MessageText:
//
// Fast Cache data has exceeded its max size and cannot be updated.
//
#define STATUS_APP_DATA_LIMIT_EXCEEDED   ((NTSTATUS)0xC000A284L)

//
// MessageId: STATUS_APP_DATA_REBOOT_REQUIRED
//
// MessageText:
//
// Fast Cache has been ReArmed and requires a reboot until it can be updated.
//
#define STATUS_APP_DATA_REBOOT_REQUIRED  ((NTSTATUS)0xC000A285L)

/*++

 MessageId's 0xa2a1 - 0xa2dc (inclusive) are for File System specific messages.

--*/
//
// MessageId: STATUS_OFFLOAD_READ_FLT_NOT_SUPPORTED
//
// MessageText:
//
// The copy offload read operation is not supported by a filter.
//
#define STATUS_OFFLOAD_READ_FLT_NOT_SUPPORTED ((NTSTATUS)0xC000A2A1L)

//
// MessageId: STATUS_OFFLOAD_WRITE_FLT_NOT_SUPPORTED
//
// MessageText:
//
// The copy offload write operation is not supported by a filter.
//
#define STATUS_OFFLOAD_WRITE_FLT_NOT_SUPPORTED ((NTSTATUS)0xC000A2A2L)

//
// MessageId: STATUS_OFFLOAD_READ_FILE_NOT_SUPPORTED
//
// MessageText:
//
// The copy offload read operation is not supported for the file.
//
#define STATUS_OFFLOAD_READ_FILE_NOT_SUPPORTED ((NTSTATUS)0xC000A2A3L)

//
// MessageId: STATUS_OFFLOAD_WRITE_FILE_NOT_SUPPORTED
//
// MessageText:
//
// The copy offload write operation is not supported for the file.
//
#define STATUS_OFFLOAD_WRITE_FILE_NOT_SUPPORTED ((NTSTATUS)0xC000A2A4L)

//
// MessageId: STATUS_WOF_WIM_HEADER_CORRUPT
//
// MessageText:
//
// The WOF driver encountered a corruption in WIM image's Header.
//
#define STATUS_WOF_WIM_HEADER_CORRUPT    ((NTSTATUS)0xC000A2A5L)

//
// MessageId: STATUS_WOF_WIM_RESOURCE_TABLE_CORRUPT
//
// MessageText:
//
// The WOF driver encountered a corruption in WIM image's Resource Table.
//
#define STATUS_WOF_WIM_RESOURCE_TABLE_CORRUPT ((NTSTATUS)0xC000A2A6L)

//
// MessageId: STATUS_WOF_FILE_RESOURCE_TABLE_CORRUPT
//
// MessageText:
//
// The WOF driver encountered a corruption in the compressed file's Resource Table.
//
#define STATUS_WOF_FILE_RESOURCE_TABLE_CORRUPT ((NTSTATUS)0xC000A2A7L)

/*++

 MessageId's 0xc000 - 0xc0ff (inclusive) are for CimFS specific messages.

--*/
//
// MessageId: STATUS_CIMFS_IMAGE_CORRUPT
//
// MessageText:
//
// The CimFS image is corrupted.
//
#define STATUS_CIMFS_IMAGE_CORRUPT       ((NTSTATUS)0xC000C001L)

//
// MessageId: STATUS_CIMFS_IMAGE_VERSION_NOT_SUPPORTED
//
// MessageText:
//
// The system does not support this version of the CimFS image.
//
#define STATUS_CIMFS_IMAGE_VERSION_NOT_SUPPORTED ((NTSTATUS)0xC000C002L)

/*++

 End of CimFS specific messages.

--*/
/*++

 MessageId's 0xce00 - 0xceff (inclusive) are for File System virtualization specific messages.

--*/
//
// MessageId: STATUS_FILE_SYSTEM_VIRTUALIZATION_UNAVAILABLE
//
// MessageText:
//
// The provider that supports file system virtualization is temporarily unavailable.
//
#define STATUS_FILE_SYSTEM_VIRTUALIZATION_UNAVAILABLE ((NTSTATUS)0xC000CE01L)

//
// MessageId: STATUS_FILE_SYSTEM_VIRTUALIZATION_METADATA_CORRUPT
//
// MessageText:
//
// The metadata for file system virtualization is corrupt and unreadable.
//
#define STATUS_FILE_SYSTEM_VIRTUALIZATION_METADATA_CORRUPT ((NTSTATUS)0xC000CE02L)

//
// MessageId: STATUS_FILE_SYSTEM_VIRTUALIZATION_BUSY
//
// MessageText:
//
// The provider that supports file system virtualization is too busy to complete this operation.
//
#define STATUS_FILE_SYSTEM_VIRTUALIZATION_BUSY ((NTSTATUS)0xC000CE03L)

//
// MessageId: STATUS_FILE_SYSTEM_VIRTUALIZATION_PROVIDER_UNKNOWN
//
// MessageText:
//
// The provider that supports file system virtualization is unknown.
//
#define STATUS_FILE_SYSTEM_VIRTUALIZATION_PROVIDER_UNKNOWN ((NTSTATUS)0xC000CE04L)

//
// MessageId: STATUS_FILE_SYSTEM_VIRTUALIZATION_INVALID_OPERATION
//
// MessageText:
//
// The virtualization operation is not allowed on the file in its current state.
//
#define STATUS_FILE_SYSTEM_VIRTUALIZATION_INVALID_OPERATION ((NTSTATUS)0xC000CE05L)

/*++

 MessageId's 0xcf00 - 0xcfff (inclusive) are for Cloud Files specific messages.

--*/
//
// MessageId: STATUS_CLOUD_FILE_SYNC_ROOT_METADATA_CORRUPT
//
// MessageText:
//
// The cloud sync root metadata is corrupted.
//
#define STATUS_CLOUD_FILE_SYNC_ROOT_METADATA_CORRUPT ((NTSTATUS)0xC000CF00L)

//
// MessageId: STATUS_CLOUD_FILE_PROVIDER_NOT_RUNNING
//
// MessageText:
//
// The cloud file provider is not running.
//
#define STATUS_CLOUD_FILE_PROVIDER_NOT_RUNNING ((NTSTATUS)0xC000CF01L)

//
// MessageId: STATUS_CLOUD_FILE_METADATA_CORRUPT
//
// MessageText:
//
// The cloud file metadata is corrupt and unreadable.
//
#define STATUS_CLOUD_FILE_METADATA_CORRUPT ((NTSTATUS)0xC000CF02L)

//
// MessageId: STATUS_CLOUD_FILE_METADATA_TOO_LARGE
//
// MessageText:
//
// The cloud file metadata is too large.
//
#define STATUS_CLOUD_FILE_METADATA_TOO_LARGE ((NTSTATUS)0xC000CF03L)

//
// MessageId: STATUS_CLOUD_FILE_PROPERTY_BLOB_TOO_LARGE
//
// MessageText:
//
// The cloud file property is too large.
//
#define STATUS_CLOUD_FILE_PROPERTY_BLOB_TOO_LARGE ((NTSTATUS)0x8000CF04L)

//
// MessageId: STATUS_CLOUD_FILE_TOO_MANY_PROPERTY_BLOBS
//
// MessageText:
//
// The maximum number of cloud file properties has been reached.
//
#define STATUS_CLOUD_FILE_TOO_MANY_PROPERTY_BLOBS ((NTSTATUS)0x8000CF05L)

//
// MessageId: STATUS_CLOUD_FILE_PROPERTY_VERSION_NOT_SUPPORTED
//
// MessageText:
//
// The version of the cloud file property store is not supported.
//
#define STATUS_CLOUD_FILE_PROPERTY_VERSION_NOT_SUPPORTED ((NTSTATUS)0xC000CF06L)

//
// MessageId: STATUS_NOT_A_CLOUD_FILE
//
// MessageText:
//
// The file is not a cloud file.
//
#define STATUS_NOT_A_CLOUD_FILE          ((NTSTATUS)0xC000CF07L)

//
// MessageId: STATUS_CLOUD_FILE_NOT_IN_SYNC
//
// MessageText:
//
// The file is not in sync with the cloud.
//
#define STATUS_CLOUD_FILE_NOT_IN_SYNC    ((NTSTATUS)0xC000CF08L)

//
// MessageId: STATUS_CLOUD_FILE_ALREADY_CONNECTED
//
// MessageText:
//
// The cloud sync root is already connected with another cloud sync provider.
//
#define STATUS_CLOUD_FILE_ALREADY_CONNECTED ((NTSTATUS)0xC000CF09L)

//
// MessageId: STATUS_CLOUD_FILE_NOT_SUPPORTED
//
// MessageText:
//
// The operation is not supported by the cloud sync provider.
//
#define STATUS_CLOUD_FILE_NOT_SUPPORTED  ((NTSTATUS)0xC000CF0AL)

//
// MessageId: STATUS_CLOUD_FILE_INVALID_REQUEST
//
// MessageText:
//
// The cloud operation is invalid.
//
#define STATUS_CLOUD_FILE_INVALID_REQUEST ((NTSTATUS)0xC000CF0BL)

//
// MessageId: STATUS_CLOUD_FILE_READ_ONLY_VOLUME
//
// MessageText:
//
// The cloud operation is not supported on a read-only volume.
//
#define STATUS_CLOUD_FILE_READ_ONLY_VOLUME ((NTSTATUS)0xC000CF0CL)

//
// MessageId: STATUS_CLOUD_FILE_CONNECTED_PROVIDER_ONLY
//
// MessageText:
//
// The operation is reserved for a connected cloud sync provider.
//
#define STATUS_CLOUD_FILE_CONNECTED_PROVIDER_ONLY ((NTSTATUS)0xC000CF0DL)

//
// MessageId: STATUS_CLOUD_FILE_VALIDATION_FAILED
//
// MessageText:
//
// The cloud sync provider failed to validate the downloaded data.
//
#define STATUS_CLOUD_FILE_VALIDATION_FAILED ((NTSTATUS)0xC000CF0EL)

//
// MessageId: STATUS_CLOUD_FILE_AUTHENTICATION_FAILED
//
// MessageText:
//
// The cloud sync provider failed user authentication.
//
#define STATUS_CLOUD_FILE_AUTHENTICATION_FAILED ((NTSTATUS)0xC000CF0FL)

//
// MessageId: STATUS_CLOUD_FILE_INSUFFICIENT_RESOURCES
//
// MessageText:
//
// The cloud sync provider failed to perform the operation due to low system resources.
//
#define STATUS_CLOUD_FILE_INSUFFICIENT_RESOURCES ((NTSTATUS)0xC000CF10L)

//
// MessageId: STATUS_CLOUD_FILE_NETWORK_UNAVAILABLE
//
// MessageText:
//
// The cloud sync provider failed to perform the operation due to network being unavailable.
//
#define STATUS_CLOUD_FILE_NETWORK_UNAVAILABLE ((NTSTATUS)0xC000CF11L)

//
// MessageId: STATUS_CLOUD_FILE_UNSUCCESSFUL
//
// MessageText:
//
// The cloud operation was unsuccessful.
//
#define STATUS_CLOUD_FILE_UNSUCCESSFUL   ((NTSTATUS)0xC000CF12L)

//
// MessageId: STATUS_CLOUD_FILE_NOT_UNDER_SYNC_ROOT
//
// MessageText:
//
// The operation is only supported on files under a cloud sync root.
//
#define STATUS_CLOUD_FILE_NOT_UNDER_SYNC_ROOT ((NTSTATUS)0xC000CF13L)

//
// MessageId: STATUS_CLOUD_FILE_IN_USE
//
// MessageText:
//
// The operation cannot be performed on cloud files in use.
//
#define STATUS_CLOUD_FILE_IN_USE         ((NTSTATUS)0xC000CF14L)

//
// MessageId: STATUS_CLOUD_FILE_PINNED
//
// MessageText:
//
// The operation cannot be performed on pinned cloud files.
//
#define STATUS_CLOUD_FILE_PINNED         ((NTSTATUS)0xC000CF15L)

//
// MessageId: STATUS_CLOUD_FILE_REQUEST_ABORTED
//
// MessageText:
//
// The cloud operation was aborted.
//
#define STATUS_CLOUD_FILE_REQUEST_ABORTED ((NTSTATUS)0xC000CF16L)

//
// MessageId: STATUS_CLOUD_FILE_PROPERTY_CORRUPT
//
// MessageText:
//
// The cloud file's property store is corrupt.
//
#define STATUS_CLOUD_FILE_PROPERTY_CORRUPT ((NTSTATUS)0xC000CF17L)

//
// MessageId: STATUS_CLOUD_FILE_ACCESS_DENIED
//
// MessageText:
//
// Access to the cloud file is denied.
//
#define STATUS_CLOUD_FILE_ACCESS_DENIED  ((NTSTATUS)0xC000CF18L)

//
// MessageId: STATUS_CLOUD_FILE_INCOMPATIBLE_HARDLINKS
//
// MessageText:
//
// The cloud operation cannot be performed on a file with incompatible hardlinks.
//
#define STATUS_CLOUD_FILE_INCOMPATIBLE_HARDLINKS ((NTSTATUS)0xC000CF19L)

//
// MessageId: STATUS_CLOUD_FILE_PROPERTY_LOCK_CONFLICT
//
// MessageText:
//
// The operation failed due to a conflicting cloud file property lock.
//
#define STATUS_CLOUD_FILE_PROPERTY_LOCK_CONFLICT ((NTSTATUS)0xC000CF1AL)

//
// MessageId: STATUS_CLOUD_FILE_REQUEST_CANCELED
//
// MessageText:
//
// The cloud operation was canceled by user.
//
#define STATUS_CLOUD_FILE_REQUEST_CANCELED ((NTSTATUS)0xC000CF1BL)

//
// MessageId: STATUS_CLOUD_FILE_PROVIDER_TERMINATED
//
// MessageText:
//
// The cloud file provider exited unexpectedly.
//
#define STATUS_CLOUD_FILE_PROVIDER_TERMINATED ((NTSTATUS)0xC000CF1DL)

//
// MessageId: STATUS_NOT_A_CLOUD_SYNC_ROOT
//
// MessageText:
//
// The file is not a cloud sync root.
//
#define STATUS_NOT_A_CLOUD_SYNC_ROOT     ((NTSTATUS)0xC000CF1EL)

//
// MessageId: STATUS_CLOUD_FILE_REQUEST_TIMEOUT
//
// MessageText:
//
// The cloud operation was not completed before the time-out period expired.
//
#define STATUS_CLOUD_FILE_REQUEST_TIMEOUT ((NTSTATUS)0xC000CF1FL)

//
// MessageId: STATUS_CLOUD_FILE_DEHYDRATION_DISALLOWED
//
// MessageText:
//
// Dehydration of the cloud file is disallowed by the cloud sync provider.
//
#define STATUS_CLOUD_FILE_DEHYDRATION_DISALLOWED ((NTSTATUS)0xC000CF20L)

//
// MessageId: STATUS_CLOUD_FILE_US_MESSAGE_TIMEOUT
//
// MessageText:
//
// The cloud provider failed to acknowledge a message before the time-out expired.
//
#define STATUS_CLOUD_FILE_US_MESSAGE_TIMEOUT ((NTSTATUS)0xC000CF21L)

/*++

 End of Cloud Files specific messages.

--*/
/*++

 MessageId's 0xf500 - 0xf5ff (inclusive) are for File Snap specific messages.

--*/
//
// MessageId: STATUS_FILE_SNAP_IN_PROGRESS
//
// MessageText:
//
// A file snapshot operation was attempted when one is already in progress.
//
#define STATUS_FILE_SNAP_IN_PROGRESS     ((NTSTATUS)0xC000F500L)

//
// MessageId: STATUS_FILE_SNAP_USER_SECTION_NOT_SUPPORTED
//
// MessageText:
//
// A snapshot of the file cannot be taken because a user-mapped section is present.
//
#define STATUS_FILE_SNAP_USER_SECTION_NOT_SUPPORTED ((NTSTATUS)0xC000F501L)

//
// MessageId: STATUS_FILE_SNAP_MODIFY_NOT_SUPPORTED
//
// MessageText:
//
// The file snapshot operation was terminated because one of the files was modified in a way incompatible with a snapshot operation.  Please try again.
//
#define STATUS_FILE_SNAP_MODIFY_NOT_SUPPORTED ((NTSTATUS)0xC000F502L)

//
// MessageId: STATUS_FILE_SNAP_IO_NOT_COORDINATED
//
// MessageText:
//
// An I/O request could not be coordinated with a file snapshot operation.
//
#define STATUS_FILE_SNAP_IO_NOT_COORDINATED ((NTSTATUS)0xC000F503L)

//
// MessageId: STATUS_FILE_SNAP_UNEXPECTED_ERROR
//
// MessageText:
//
// An unexpected error occurred while processing a file snapshot operation.
//
#define STATUS_FILE_SNAP_UNEXPECTED_ERROR ((NTSTATUS)0xC000F504L)

//
// MessageId: STATUS_FILE_SNAP_INVALID_PARAMETER
//
// MessageText:
//
// A file snapshot operation received an invalid parameter.
//
#define STATUS_FILE_SNAP_INVALID_PARAMETER ((NTSTATUS)0xC000F505L)

/*++

 End of File Snap specific messages.

--*/

//     **** New SYSTEM error codes can be inserted here ****


//
//  Debugger error values
//

//
// MessageId: DBG_NO_STATE_CHANGE
//
// MessageText:
//
// Debugger did not perform a state change.
//
#define DBG_NO_STATE_CHANGE              ((NTSTATUS)0xC0010001L)

//
// MessageId: DBG_APP_NOT_IDLE
//
// MessageText:
//
// Debugger has found the application is not idle.
//
#define DBG_APP_NOT_IDLE                 ((NTSTATUS)0xC0010002L)


//
//  RPC error values
//

//
// MessageId: RPC_NT_INVALID_STRING_BINDING
//
// MessageText:
//
// The string binding is invalid.
//
#define RPC_NT_INVALID_STRING_BINDING    ((NTSTATUS)0xC0020001L)

//
// MessageId: RPC_NT_WRONG_KIND_OF_BINDING
//
// MessageText:
//
// The binding handle is not the correct type.
//
#define RPC_NT_WRONG_KIND_OF_BINDING     ((NTSTATUS)0xC0020002L)

//
// MessageId: RPC_NT_INVALID_BINDING
//
// MessageText:
//
// The binding handle is invalid.
//
#define RPC_NT_INVALID_BINDING           ((NTSTATUS)0xC0020003L)

//
// MessageId: RPC_NT_PROTSEQ_NOT_SUPPORTED
//
// MessageText:
//
// The RPC protocol sequence is not supported.
//
#define RPC_NT_PROTSEQ_NOT_SUPPORTED     ((NTSTATUS)0xC0020004L)

//
// MessageId: RPC_NT_INVALID_RPC_PROTSEQ
//
// MessageText:
//
// The RPC protocol sequence is invalid.
//
#define RPC_NT_INVALID_RPC_PROTSEQ       ((NTSTATUS)0xC0020005L)

//
// MessageId: RPC_NT_INVALID_STRING_UUID
//
// MessageText:
//
// The string UUID is invalid.
//
#define RPC_NT_INVALID_STRING_UUID       ((NTSTATUS)0xC0020006L)

//
// MessageId: RPC_NT_INVALID_ENDPOINT_FORMAT
//
// MessageText:
//
// The endpoint format is invalid.
//
#define RPC_NT_INVALID_ENDPOINT_FORMAT   ((NTSTATUS)0xC0020007L)

//
// MessageId: RPC_NT_INVALID_NET_ADDR
//
// MessageText:
//
// The network address is invalid.
//
#define RPC_NT_INVALID_NET_ADDR          ((NTSTATUS)0xC0020008L)

//
// MessageId: RPC_NT_NO_ENDPOINT_FOUND
//
// MessageText:
//
// No endpoint was found.
//
#define RPC_NT_NO_ENDPOINT_FOUND         ((NTSTATUS)0xC0020009L)

//
// MessageId: RPC_NT_INVALID_TIMEOUT
//
// MessageText:
//
// The timeout value is invalid.
//
#define RPC_NT_INVALID_TIMEOUT           ((NTSTATUS)0xC002000AL)

//
// MessageId: RPC_NT_OBJECT_NOT_FOUND
//
// MessageText:
//
// The object UUID was not found.
//
#define RPC_NT_OBJECT_NOT_FOUND          ((NTSTATUS)0xC002000BL)

//
// MessageId: RPC_NT_ALREADY_REGISTERED
//
// MessageText:
//
// The object UUID has already been registered.
//
#define RPC_NT_ALREADY_REGISTERED        ((NTSTATUS)0xC002000CL)

//
// MessageId: RPC_NT_TYPE_ALREADY_REGISTERED
//
// MessageText:
//
// The type UUID has already been registered.
//
#define RPC_NT_TYPE_ALREADY_REGISTERED   ((NTSTATUS)0xC002000DL)

//
// MessageId: RPC_NT_ALREADY_LISTENING
//
// MessageText:
//
// The RPC server is already listening.
//
#define RPC_NT_ALREADY_LISTENING         ((NTSTATUS)0xC002000EL)

//
// MessageId: RPC_NT_NO_PROTSEQS_REGISTERED
//
// MessageText:
//
// No protocol sequences have been registered.
//
#define RPC_NT_NO_PROTSEQS_REGISTERED    ((NTSTATUS)0xC002000FL)

//
// MessageId: RPC_NT_NOT_LISTENING
//
// MessageText:
//
// The RPC server is not listening.
//
#define RPC_NT_NOT_LISTENING             ((NTSTATUS)0xC0020010L)

//
// MessageId: RPC_NT_UNKNOWN_MGR_TYPE
//
// MessageText:
//
// The manager type is unknown.
//
#define RPC_NT_UNKNOWN_MGR_TYPE          ((NTSTATUS)0xC0020011L)

//
// MessageId: RPC_NT_UNKNOWN_IF
//
// MessageText:
//
// The interface is unknown.
//
#define RPC_NT_UNKNOWN_IF                ((NTSTATUS)0xC0020012L)

//
// MessageId: RPC_NT_NO_BINDINGS
//
// MessageText:
//
// There are no bindings.
//
#define RPC_NT_NO_BINDINGS               ((NTSTATUS)0xC0020013L)

//
// MessageId: RPC_NT_NO_PROTSEQS
//
// MessageText:
//
// There are no protocol sequences.
//
#define RPC_NT_NO_PROTSEQS               ((NTSTATUS)0xC0020014L)

//
// MessageId: RPC_NT_CANT_CREATE_ENDPOINT
//
// MessageText:
//
// The endpoint cannot be created.
//
#define RPC_NT_CANT_CREATE_ENDPOINT      ((NTSTATUS)0xC0020015L)

//
// MessageId: RPC_NT_OUT_OF_RESOURCES
//
// MessageText:
//
// Not enough resources are available to complete this operation.
//
#define RPC_NT_OUT_OF_RESOURCES          ((NTSTATUS)0xC0020016L)

//
// MessageId: RPC_NT_SERVER_UNAVAILABLE
//
// MessageText:
//
// The RPC server is unavailable.
//
#define RPC_NT_SERVER_UNAVAILABLE        ((NTSTATUS)0xC0020017L)

//
// MessageId: RPC_NT_SERVER_TOO_BUSY
//
// MessageText:
//
// The RPC server is too busy to complete this operation.
//
#define RPC_NT_SERVER_TOO_BUSY           ((NTSTATUS)0xC0020018L)

//
// MessageId: RPC_NT_INVALID_NETWORK_OPTIONS
//
// MessageText:
//
// The network options are invalid.
//
#define RPC_NT_INVALID_NETWORK_OPTIONS   ((NTSTATUS)0xC0020019L)

//
// MessageId: RPC_NT_NO_CALL_ACTIVE
//
// MessageText:
//
// There are no remote procedure calls active on this thread.
//
#define RPC_NT_NO_CALL_ACTIVE            ((NTSTATUS)0xC002001AL)

//
// MessageId: RPC_NT_CALL_FAILED
//
// MessageText:
//
// The remote procedure call failed.
//
#define RPC_NT_CALL_FAILED               ((NTSTATUS)0xC002001BL)

//
// MessageId: RPC_NT_CALL_FAILED_DNE
//
// MessageText:
//
// The remote procedure call failed and did not execute.
//
#define RPC_NT_CALL_FAILED_DNE           ((NTSTATUS)0xC002001CL)

//
// MessageId: RPC_NT_PROTOCOL_ERROR
//
// MessageText:
//
// An RPC protocol error occurred.
//
#define RPC_NT_PROTOCOL_ERROR            ((NTSTATUS)0xC002001DL)

//
// MessageId: RPC_NT_UNSUPPORTED_TRANS_SYN
//
// MessageText:
//
// The transfer syntax is not supported by the RPC server.
//
#define RPC_NT_UNSUPPORTED_TRANS_SYN     ((NTSTATUS)0xC002001FL)

//
// MessageId: RPC_NT_UNSUPPORTED_TYPE
//
// MessageText:
//
// The type UUID is not supported.
//
#define RPC_NT_UNSUPPORTED_TYPE          ((NTSTATUS)0xC0020021L)

//
// MessageId: RPC_NT_INVALID_TAG
//
// MessageText:
//
// The tag is invalid.
//
#define RPC_NT_INVALID_TAG               ((NTSTATUS)0xC0020022L)

//
// MessageId: RPC_NT_INVALID_BOUND
//
// MessageText:
//
// The array bounds are invalid.
//
#define RPC_NT_INVALID_BOUND             ((NTSTATUS)0xC0020023L)

//
// MessageId: RPC_NT_NO_ENTRY_NAME
//
// MessageText:
//
// The binding does not contain an entry name.
//
#define RPC_NT_NO_ENTRY_NAME             ((NTSTATUS)0xC0020024L)

//
// MessageId: RPC_NT_INVALID_NAME_SYNTAX
//
// MessageText:
//
// The name syntax is invalid.
//
#define RPC_NT_INVALID_NAME_SYNTAX       ((NTSTATUS)0xC0020025L)

//
// MessageId: RPC_NT_UNSUPPORTED_NAME_SYNTAX
//
// MessageText:
//
// The name syntax is not supported.
//
#define RPC_NT_UNSUPPORTED_NAME_SYNTAX   ((NTSTATUS)0xC0020026L)

//
// MessageId: RPC_NT_UUID_NO_ADDRESS
//
// MessageText:
//
// No network address is available to use to construct a UUID.
//
#define RPC_NT_UUID_NO_ADDRESS           ((NTSTATUS)0xC0020028L)

//
// MessageId: RPC_NT_DUPLICATE_ENDPOINT
//
// MessageText:
//
// The endpoint is a duplicate.
//
#define RPC_NT_DUPLICATE_ENDPOINT        ((NTSTATUS)0xC0020029L)

//
// MessageId: RPC_NT_UNKNOWN_AUTHN_TYPE
//
// MessageText:
//
// The authentication type is unknown.
//
#define RPC_NT_UNKNOWN_AUTHN_TYPE        ((NTSTATUS)0xC002002AL)

//
// MessageId: RPC_NT_MAX_CALLS_TOO_SMALL
//
// MessageText:
//
// The maximum number of calls is too small.
//
#define RPC_NT_MAX_CALLS_TOO_SMALL       ((NTSTATUS)0xC002002BL)

//
// MessageId: RPC_NT_STRING_TOO_LONG
//
// MessageText:
//
// The string is too long.
//
#define RPC_NT_STRING_TOO_LONG           ((NTSTATUS)0xC002002CL)

//
// MessageId: RPC_NT_PROTSEQ_NOT_FOUND
//
// MessageText:
//
// The RPC protocol sequence was not found.
//
#define RPC_NT_PROTSEQ_NOT_FOUND         ((NTSTATUS)0xC002002DL)

//
// MessageId: RPC_NT_PROCNUM_OUT_OF_RANGE
//
// MessageText:
//
// The procedure number is out of range.
//
#define RPC_NT_PROCNUM_OUT_OF_RANGE      ((NTSTATUS)0xC002002EL)

//
// MessageId: RPC_NT_BINDING_HAS_NO_AUTH
//
// MessageText:
//
// The binding does not contain any authentication information.
//
#define RPC_NT_BINDING_HAS_NO_AUTH       ((NTSTATUS)0xC002002FL)

//
// MessageId: RPC_NT_UNKNOWN_AUTHN_SERVICE
//
// MessageText:
//
// The authentication service is unknown.
//
#define RPC_NT_UNKNOWN_AUTHN_SERVICE     ((NTSTATUS)0xC0020030L)

//
// MessageId: RPC_NT_UNKNOWN_AUTHN_LEVEL
//
// MessageText:
//
// The authentication level is unknown.
//
#define RPC_NT_UNKNOWN_AUTHN_LEVEL       ((NTSTATUS)0xC0020031L)

//
// MessageId: RPC_NT_INVALID_AUTH_IDENTITY
//
// MessageText:
//
// The security context is invalid.
//
#define RPC_NT_INVALID_AUTH_IDENTITY     ((NTSTATUS)0xC0020032L)

//
// MessageId: RPC_NT_UNKNOWN_AUTHZ_SERVICE
//
// MessageText:
//
// The authorization service is unknown.
//
#define RPC_NT_UNKNOWN_AUTHZ_SERVICE     ((NTSTATUS)0xC0020033L)

//
// MessageId: EPT_NT_INVALID_ENTRY
//
// MessageText:
//
// The entry is invalid.
//
#define EPT_NT_INVALID_ENTRY             ((NTSTATUS)0xC0020034L)

//
// MessageId: EPT_NT_CANT_PERFORM_OP
//
// MessageText:
//
// The operation cannot be performed.
//
#define EPT_NT_CANT_PERFORM_OP           ((NTSTATUS)0xC0020035L)

//
// MessageId: EPT_NT_NOT_REGISTERED
//
// MessageText:
//
// There are no more endpoints available from the endpoint mapper.
//
#define EPT_NT_NOT_REGISTERED            ((NTSTATUS)0xC0020036L)

//
// MessageId: RPC_NT_NOTHING_TO_EXPORT
//
// MessageText:
//
// No interfaces have been exported.
//
#define RPC_NT_NOTHING_TO_EXPORT         ((NTSTATUS)0xC0020037L)

//
// MessageId: RPC_NT_INCOMPLETE_NAME
//
// MessageText:
//
// The entry name is incomplete.
//
#define RPC_NT_INCOMPLETE_NAME           ((NTSTATUS)0xC0020038L)

//
// MessageId: RPC_NT_INVALID_VERS_OPTION
//
// MessageText:
//
// The version option is invalid.
//
#define RPC_NT_INVALID_VERS_OPTION       ((NTSTATUS)0xC0020039L)

//
// MessageId: RPC_NT_NO_MORE_MEMBERS
//
// MessageText:
//
// There are no more members.
//
#define RPC_NT_NO_MORE_MEMBERS           ((NTSTATUS)0xC002003AL)

//
// MessageId: RPC_NT_NOT_ALL_OBJS_UNEXPORTED
//
// MessageText:
//
// There is nothing to unexport.
//
#define RPC_NT_NOT_ALL_OBJS_UNEXPORTED   ((NTSTATUS)0xC002003BL)

//
// MessageId: RPC_NT_INTERFACE_NOT_FOUND
//
// MessageText:
//
// The interface was not found.
//
#define RPC_NT_INTERFACE_NOT_FOUND       ((NTSTATUS)0xC002003CL)

//
// MessageId: RPC_NT_ENTRY_ALREADY_EXISTS
//
// MessageText:
//
// The entry already exists.
//
#define RPC_NT_ENTRY_ALREADY_EXISTS      ((NTSTATUS)0xC002003DL)

//
// MessageId: RPC_NT_ENTRY_NOT_FOUND
//
// MessageText:
//
// The entry is not found.
//
#define RPC_NT_ENTRY_NOT_FOUND           ((NTSTATUS)0xC002003EL)

//
// MessageId: RPC_NT_NAME_SERVICE_UNAVAILABLE
//
// MessageText:
//
// The name service is unavailable.
//
#define RPC_NT_NAME_SERVICE_UNAVAILABLE  ((NTSTATUS)0xC002003FL)

//
// MessageId: RPC_NT_INVALID_NAF_ID
//
// MessageText:
//
// The network address family is invalid.
//
#define RPC_NT_INVALID_NAF_ID            ((NTSTATUS)0xC0020040L)

//
// MessageId: RPC_NT_CANNOT_SUPPORT
//
// MessageText:
//
// The requested operation is not supported.
//
#define RPC_NT_CANNOT_SUPPORT            ((NTSTATUS)0xC0020041L)

//
// MessageId: RPC_NT_NO_CONTEXT_AVAILABLE
//
// MessageText:
//
// No security context is available to allow impersonation.
//
#define RPC_NT_NO_CONTEXT_AVAILABLE      ((NTSTATUS)0xC0020042L)

//
// MessageId: RPC_NT_INTERNAL_ERROR
//
// MessageText:
//
// An internal error occurred in RPC.
//
#define RPC_NT_INTERNAL_ERROR            ((NTSTATUS)0xC0020043L)

//
// MessageId: RPC_NT_ZERO_DIVIDE
//
// MessageText:
//
// The RPC server attempted an integer divide by zero.
//
#define RPC_NT_ZERO_DIVIDE               ((NTSTATUS)0xC0020044L)

//
// MessageId: RPC_NT_ADDRESS_ERROR
//
// MessageText:
//
// An addressing error occurred in the RPC server.
//
#define RPC_NT_ADDRESS_ERROR             ((NTSTATUS)0xC0020045L)

//
// MessageId: RPC_NT_FP_DIV_ZERO
//
// MessageText:
//
// A floating point operation at the RPC server caused a divide by zero.
//
#define RPC_NT_FP_DIV_ZERO               ((NTSTATUS)0xC0020046L)

//
// MessageId: RPC_NT_FP_UNDERFLOW
//
// MessageText:
//
// A floating point underflow occurred at the RPC server.
//
#define RPC_NT_FP_UNDERFLOW              ((NTSTATUS)0xC0020047L)

//
// MessageId: RPC_NT_FP_OVERFLOW
//
// MessageText:
//
// A floating point overflow occurred at the RPC server.
//
#define RPC_NT_FP_OVERFLOW               ((NTSTATUS)0xC0020048L)

//
// MessageId: RPC_NT_NO_MORE_ENTRIES
//
// MessageText:
//
// The list of RPC servers available for auto-handle binding has been exhausted.
//
#define RPC_NT_NO_MORE_ENTRIES           ((NTSTATUS)0xC0030001L)

//
// MessageId: RPC_NT_SS_CHAR_TRANS_OPEN_FAIL
//
// MessageText:
//
// The file designated by DCERPCCHARTRANS cannot be opened.
//
#define RPC_NT_SS_CHAR_TRANS_OPEN_FAIL   ((NTSTATUS)0xC0030002L)

//
// MessageId: RPC_NT_SS_CHAR_TRANS_SHORT_FILE
//
// MessageText:
//
// The file containing the character translation table has fewer than 512 bytes.
//
#define RPC_NT_SS_CHAR_TRANS_SHORT_FILE  ((NTSTATUS)0xC0030003L)

//
// MessageId: RPC_NT_SS_IN_NULL_CONTEXT
//
// MessageText:
//
// A null context handle is passed as an [in] parameter.
//
#define RPC_NT_SS_IN_NULL_CONTEXT        ((NTSTATUS)0xC0030004L)

//
// MessageId: RPC_NT_SS_CONTEXT_MISMATCH
//
// MessageText:
//
// The context handle does not match any known context handles.
//
#define RPC_NT_SS_CONTEXT_MISMATCH       ((NTSTATUS)0xC0030005L)

//
// MessageId: RPC_NT_SS_CONTEXT_DAMAGED
//
// MessageText:
//
// The context handle changed during a call.
//
#define RPC_NT_SS_CONTEXT_DAMAGED        ((NTSTATUS)0xC0030006L)

//
// MessageId: RPC_NT_SS_HANDLES_MISMATCH
//
// MessageText:
//
// The binding handles passed to a remote procedure call do not match.
//
#define RPC_NT_SS_HANDLES_MISMATCH       ((NTSTATUS)0xC0030007L)

//
// MessageId: RPC_NT_SS_CANNOT_GET_CALL_HANDLE
//
// MessageText:
//
// The stub is unable to get the call handle.
//
#define RPC_NT_SS_CANNOT_GET_CALL_HANDLE ((NTSTATUS)0xC0030008L)

//
// MessageId: RPC_NT_NULL_REF_POINTER
//
// MessageText:
//
// A null reference pointer was passed to the stub.
//
#define RPC_NT_NULL_REF_POINTER          ((NTSTATUS)0xC0030009L)

//
// MessageId: RPC_NT_ENUM_VALUE_OUT_OF_RANGE
//
// MessageText:
//
// The enumeration value is out of range.
//
#define RPC_NT_ENUM_VALUE_OUT_OF_RANGE   ((NTSTATUS)0xC003000AL)

//
// MessageId: RPC_NT_BYTE_COUNT_TOO_SMALL
//
// MessageText:
//
// The byte count is too small.
//
#define RPC_NT_BYTE_COUNT_TOO_SMALL      ((NTSTATUS)0xC003000BL)

//
// MessageId: RPC_NT_BAD_STUB_DATA
//
// MessageText:
//
// The stub received bad data.
//
#define RPC_NT_BAD_STUB_DATA             ((NTSTATUS)0xC003000CL)

//
// MessageId: RPC_NT_CALL_IN_PROGRESS
//
// MessageText:
//
// A remote procedure call is already in progress for this thread.
//
#define RPC_NT_CALL_IN_PROGRESS          ((NTSTATUS)0xC0020049L)

//
// MessageId: RPC_NT_NO_MORE_BINDINGS
//
// MessageText:
//
// There are no more bindings.
//
#define RPC_NT_NO_MORE_BINDINGS          ((NTSTATUS)0xC002004AL)

//
// MessageId: RPC_NT_GROUP_MEMBER_NOT_FOUND
//
// MessageText:
//
// The group member was not found.
//
#define RPC_NT_GROUP_MEMBER_NOT_FOUND    ((NTSTATUS)0xC002004BL)

//
// MessageId: EPT_NT_CANT_CREATE
//
// MessageText:
//
// The endpoint mapper database entry could not be created.
//
#define EPT_NT_CANT_CREATE               ((NTSTATUS)0xC002004CL)

//
// MessageId: RPC_NT_INVALID_OBJECT
//
// MessageText:
//
// The object UUID is the nil UUID.
//
#define RPC_NT_INVALID_OBJECT            ((NTSTATUS)0xC002004DL)

//
// MessageId: RPC_NT_NO_INTERFACES
//
// MessageText:
//
// No interfaces have been registered.
//
#define RPC_NT_NO_INTERFACES             ((NTSTATUS)0xC002004FL)

//
// MessageId: RPC_NT_CALL_CANCELLED
//
// MessageText:
//
// The remote procedure call was cancelled.
//
#define RPC_NT_CALL_CANCELLED            ((NTSTATUS)0xC0020050L)

//
// MessageId: RPC_NT_BINDING_INCOMPLETE
//
// MessageText:
//
// The binding handle does not contain all required information.
//
#define RPC_NT_BINDING_INCOMPLETE        ((NTSTATUS)0xC0020051L)

//
// MessageId: RPC_NT_COMM_FAILURE
//
// MessageText:
//
// A communications failure occurred during a remote procedure call.
//
#define RPC_NT_COMM_FAILURE              ((NTSTATUS)0xC0020052L)

//
// MessageId: RPC_NT_UNSUPPORTED_AUTHN_LEVEL
//
// MessageText:
//
// The requested authentication level is not supported.
//
#define RPC_NT_UNSUPPORTED_AUTHN_LEVEL   ((NTSTATUS)0xC0020053L)

//
// MessageId: RPC_NT_NO_PRINC_NAME
//
// MessageText:
//
// No principal name registered.
//
#define RPC_NT_NO_PRINC_NAME             ((NTSTATUS)0xC0020054L)

//
// MessageId: RPC_NT_NOT_RPC_ERROR
//
// MessageText:
//
// The error specified is not a valid Windows RPC error code.
//
#define RPC_NT_NOT_RPC_ERROR             ((NTSTATUS)0xC0020055L)

//
// MessageId: RPC_NT_UUID_LOCAL_ONLY
//
// MessageText:
//
// A UUID that is valid only on this computer has been allocated.
//
#define RPC_NT_UUID_LOCAL_ONLY           ((NTSTATUS)0x40020056L)

//
// MessageId: RPC_NT_SEC_PKG_ERROR
//
// MessageText:
//
// A security package specific error occurred.
//
#define RPC_NT_SEC_PKG_ERROR             ((NTSTATUS)0xC0020057L)

//
// MessageId: RPC_NT_NOT_CANCELLED
//
// MessageText:
//
// Thread is not cancelled.
//
#define RPC_NT_NOT_CANCELLED             ((NTSTATUS)0xC0020058L)

//
// MessageId: RPC_NT_INVALID_ES_ACTION
//
// MessageText:
//
// Invalid operation on the encoding/decoding handle.
//
#define RPC_NT_INVALID_ES_ACTION         ((NTSTATUS)0xC0030059L)

//
// MessageId: RPC_NT_WRONG_ES_VERSION
//
// MessageText:
//
// Incompatible version of the serializing package.
//
#define RPC_NT_WRONG_ES_VERSION          ((NTSTATUS)0xC003005AL)

//
// MessageId: RPC_NT_WRONG_STUB_VERSION
//
// MessageText:
//
// Incompatible version of the RPC stub.
//
#define RPC_NT_WRONG_STUB_VERSION        ((NTSTATUS)0xC003005BL)

//
// MessageId: RPC_NT_INVALID_PIPE_OBJECT
//
// MessageText:
//
// The RPC pipe object is invalid or corrupted.
//
#define RPC_NT_INVALID_PIPE_OBJECT       ((NTSTATUS)0xC003005CL)

//
// MessageId: RPC_NT_INVALID_PIPE_OPERATION
//
// MessageText:
//
// An invalid operation was attempted on an RPC pipe object.
//
#define RPC_NT_INVALID_PIPE_OPERATION    ((NTSTATUS)0xC003005DL)

//
// MessageId: RPC_NT_WRONG_PIPE_VERSION
//
// MessageText:
//
// Unsupported RPC pipe version.
//
#define RPC_NT_WRONG_PIPE_VERSION        ((NTSTATUS)0xC003005EL)

//
// MessageId: RPC_NT_PIPE_CLOSED
//
// MessageText:
//
// The RPC pipe object has already been closed.
//
#define RPC_NT_PIPE_CLOSED               ((NTSTATUS)0xC003005FL)

//
// MessageId: RPC_NT_PIPE_DISCIPLINE_ERROR
//
// MessageText:
//
// The RPC call completed before all pipes were processed.
//
#define RPC_NT_PIPE_DISCIPLINE_ERROR     ((NTSTATUS)0xC0030060L)

//
// MessageId: RPC_NT_PIPE_EMPTY
//
// MessageText:
//
// No more data is available from the RPC pipe.
//
#define RPC_NT_PIPE_EMPTY                ((NTSTATUS)0xC0030061L)

//
// MessageId: RPC_NT_INVALID_ASYNC_HANDLE
//
// MessageText:
//
// Invalid asynchronous remote procedure call handle.
//
#define RPC_NT_INVALID_ASYNC_HANDLE      ((NTSTATUS)0xC0020062L)

//
// MessageId: RPC_NT_INVALID_ASYNC_CALL
//
// MessageText:
//
// Invalid asynchronous RPC call handle for this operation.
//
#define RPC_NT_INVALID_ASYNC_CALL        ((NTSTATUS)0xC0020063L)

//
// MessageId: RPC_NT_PROXY_ACCESS_DENIED
//
// MessageText:
//
// Access to the HTTP proxy is denied.
//
#define RPC_NT_PROXY_ACCESS_DENIED       ((NTSTATUS)0xC0020064L)

//
// MessageId: RPC_NT_COOKIE_AUTH_FAILED
//
// MessageText:
//
// HTTP proxy server rejected the connection because the cookie authentication failed.
//
#define RPC_NT_COOKIE_AUTH_FAILED        ((NTSTATUS)0xC0020065L)

//
// MessageId: RPC_NT_SEND_INCOMPLETE
//
// MessageText:
//
// Some data remains to be sent in the request buffer.
//
#define RPC_NT_SEND_INCOMPLETE           ((NTSTATUS)0x400200AFL)


//
//  ACPI error values
//

//
// MessageId: STATUS_ACPI_INVALID_OPCODE
//
// MessageText:
//
// An attempt was made to run an invalid AML opcode
//
#define STATUS_ACPI_INVALID_OPCODE       ((NTSTATUS)0xC0140001L)

//
// MessageId: STATUS_ACPI_STACK_OVERFLOW
//
// MessageText:
//
// The AML Interpreter Stack has overflowed
//
#define STATUS_ACPI_STACK_OVERFLOW       ((NTSTATUS)0xC0140002L)

//
// MessageId: STATUS_ACPI_ASSERT_FAILED
//
// MessageText:
//
// An inconsistent state has occurred
//
#define STATUS_ACPI_ASSERT_FAILED        ((NTSTATUS)0xC0140003L)

//
// MessageId: STATUS_ACPI_INVALID_INDEX
//
// MessageText:
//
// An attempt was made to access an array outside of its bounds
//
#define STATUS_ACPI_INVALID_INDEX        ((NTSTATUS)0xC0140004L)

//
// MessageId: STATUS_ACPI_INVALID_ARGUMENT
//
// MessageText:
//
// A required argument was not specified
//
#define STATUS_ACPI_INVALID_ARGUMENT     ((NTSTATUS)0xC0140005L)

//
// MessageId: STATUS_ACPI_FATAL
//
// MessageText:
//
// A fatal error has occurred
//
#define STATUS_ACPI_FATAL                ((NTSTATUS)0xC0140006L)

//
// MessageId: STATUS_ACPI_INVALID_SUPERNAME
//
// MessageText:
//
// An invalid SuperName was specified
//
#define STATUS_ACPI_INVALID_SUPERNAME    ((NTSTATUS)0xC0140007L)

//
// MessageId: STATUS_ACPI_INVALID_ARGTYPE
//
// MessageText:
//
// An argument with an incorrect type was specified
//
#define STATUS_ACPI_INVALID_ARGTYPE      ((NTSTATUS)0xC0140008L)

//
// MessageId: STATUS_ACPI_INVALID_OBJTYPE
//
// MessageText:
//
// An object with an incorrect type was specified
//
#define STATUS_ACPI_INVALID_OBJTYPE      ((NTSTATUS)0xC0140009L)

//
// MessageId: STATUS_ACPI_INVALID_TARGETTYPE
//
// MessageText:
//
// A target with an incorrect type was specified
//
#define STATUS_ACPI_INVALID_TARGETTYPE   ((NTSTATUS)0xC014000AL)

//
// MessageId: STATUS_ACPI_INCORRECT_ARGUMENT_COUNT
//
// MessageText:
//
// An incorrect number of arguments were specified
//
#define STATUS_ACPI_INCORRECT_ARGUMENT_COUNT ((NTSTATUS)0xC014000BL)

//
// MessageId: STATUS_ACPI_ADDRESS_NOT_MAPPED
//
// MessageText:
//
// An address failed to translate
//
#define STATUS_ACPI_ADDRESS_NOT_MAPPED   ((NTSTATUS)0xC014000CL)

//
// MessageId: STATUS_ACPI_INVALID_EVENTTYPE
//
// MessageText:
//
// An incorrect event type was specified
//
#define STATUS_ACPI_INVALID_EVENTTYPE    ((NTSTATUS)0xC014000DL)

//
// MessageId: STATUS_ACPI_HANDLER_COLLISION
//
// MessageText:
//
// A handler for the target already exists
//
#define STATUS_ACPI_HANDLER_COLLISION    ((NTSTATUS)0xC014000EL)

//
// MessageId: STATUS_ACPI_INVALID_DATA
//
// MessageText:
//
// Invalid data for the target was specified
//
#define STATUS_ACPI_INVALID_DATA         ((NTSTATUS)0xC014000FL)

//
// MessageId: STATUS_ACPI_INVALID_REGION
//
// MessageText:
//
// An invalid region for the target was specified
//
#define STATUS_ACPI_INVALID_REGION       ((NTSTATUS)0xC0140010L)

//
// MessageId: STATUS_ACPI_INVALID_ACCESS_SIZE
//
// MessageText:
//
// An attempt was made to access a field outside of the defined range
//
#define STATUS_ACPI_INVALID_ACCESS_SIZE  ((NTSTATUS)0xC0140011L)

//
// MessageId: STATUS_ACPI_ACQUIRE_GLOBAL_LOCK
//
// MessageText:
//
// The Global system lock could not be acquired
//
#define STATUS_ACPI_ACQUIRE_GLOBAL_LOCK  ((NTSTATUS)0xC0140012L)

//
// MessageId: STATUS_ACPI_ALREADY_INITIALIZED
//
// MessageText:
//
// An attempt was made to reinitialize the ACPI subsystem
//
#define STATUS_ACPI_ALREADY_INITIALIZED  ((NTSTATUS)0xC0140013L)

//
// MessageId: STATUS_ACPI_NOT_INITIALIZED
//
// MessageText:
//
// The ACPI subsystem has not been initialized
//
#define STATUS_ACPI_NOT_INITIALIZED      ((NTSTATUS)0xC0140014L)

//
// MessageId: STATUS_ACPI_INVALID_MUTEX_LEVEL
//
// MessageText:
//
// An incorrect mutex was specified
//
#define STATUS_ACPI_INVALID_MUTEX_LEVEL  ((NTSTATUS)0xC0140015L)

//
// MessageId: STATUS_ACPI_MUTEX_NOT_OWNED
//
// MessageText:
//
// The mutex is not currently owned
//
#define STATUS_ACPI_MUTEX_NOT_OWNED      ((NTSTATUS)0xC0140016L)

//
// MessageId: STATUS_ACPI_MUTEX_NOT_OWNER
//
// MessageText:
//
// An attempt was made to access the mutex by a process that was not the owner
//
#define STATUS_ACPI_MUTEX_NOT_OWNER      ((NTSTATUS)0xC0140017L)

//
// MessageId: STATUS_ACPI_RS_ACCESS
//
// MessageText:
//
// An error occurred during an access to Region Space
//
#define STATUS_ACPI_RS_ACCESS            ((NTSTATUS)0xC0140018L)

//
// MessageId: STATUS_ACPI_INVALID_TABLE
//
// MessageText:
//
// An attempt was made to use an incorrect table
//
#define STATUS_ACPI_INVALID_TABLE        ((NTSTATUS)0xC0140019L)

//
// MessageId: STATUS_ACPI_REG_HANDLER_FAILED
//
// MessageText:
//
// The registration of an ACPI event failed
//
#define STATUS_ACPI_REG_HANDLER_FAILED   ((NTSTATUS)0xC0140020L)

//
// MessageId: STATUS_ACPI_POWER_REQUEST_FAILED
//
// MessageText:
//
// An ACPI Power Object failed to transition state
//
#define STATUS_ACPI_POWER_REQUEST_FAILED ((NTSTATUS)0xC0140021L)

//
// Terminal Server specific Errors
//
//
// MessageId: STATUS_CTX_WINSTATION_NAME_INVALID
//
// MessageText:
//
// Session name %1 is invalid.
//
#define STATUS_CTX_WINSTATION_NAME_INVALID ((NTSTATUS)0xC00A0001L)

//
// MessageId: STATUS_CTX_INVALID_PD
//
// MessageText:
//
// The protocol driver %1 is invalid.
//
#define STATUS_CTX_INVALID_PD            ((NTSTATUS)0xC00A0002L)

//
// MessageId: STATUS_CTX_PD_NOT_FOUND
//
// MessageText:
//
// The protocol driver %1 was not found in the system path.
//
#define STATUS_CTX_PD_NOT_FOUND          ((NTSTATUS)0xC00A0003L)

//
// MessageId: STATUS_CTX_CDM_CONNECT
//
// MessageText:
//
// The Client Drive Mapping Service Has Connected on Terminal Connection.
//
#define STATUS_CTX_CDM_CONNECT           ((NTSTATUS)0x400A0004L)

//
// MessageId: STATUS_CTX_CDM_DISCONNECT
//
// MessageText:
//
// The Client Drive Mapping Service Has Disconnected on Terminal Connection.
//
#define STATUS_CTX_CDM_DISCONNECT        ((NTSTATUS)0x400A0005L)

//
// MessageId: STATUS_CTX_CLOSE_PENDING
//
// MessageText:
//
// A close operation is pending on the Terminal Connection.
//
#define STATUS_CTX_CLOSE_PENDING         ((NTSTATUS)0xC00A0006L)

//
// MessageId: STATUS_CTX_NO_OUTBUF
//
// MessageText:
//
// There are no free output buffers available.
//
#define STATUS_CTX_NO_OUTBUF             ((NTSTATUS)0xC00A0007L)

//
// MessageId: STATUS_CTX_MODEM_INF_NOT_FOUND
//
// MessageText:
//
// The MODEM.INF file was not found.
//
#define STATUS_CTX_MODEM_INF_NOT_FOUND   ((NTSTATUS)0xC00A0008L)

//
// MessageId: STATUS_CTX_INVALID_MODEMNAME
//
// MessageText:
//
// The modem (%1) was not found in MODEM.INF.
//
#define STATUS_CTX_INVALID_MODEMNAME     ((NTSTATUS)0xC00A0009L)

//
// MessageId: STATUS_CTX_RESPONSE_ERROR
//
// MessageText:
//
// The modem did not accept the command sent to it.
// Verify the configured modem name matches the attached modem.
//
#define STATUS_CTX_RESPONSE_ERROR        ((NTSTATUS)0xC00A000AL)

//
// MessageId: STATUS_CTX_MODEM_RESPONSE_TIMEOUT
//
// MessageText:
//
// The modem did not respond to the command sent to it.
// Verify the modem is properly cabled and powered on.
//
#define STATUS_CTX_MODEM_RESPONSE_TIMEOUT ((NTSTATUS)0xC00A000BL)

//
// MessageId: STATUS_CTX_MODEM_RESPONSE_NO_CARRIER
//
// MessageText:
//
// Carrier detect has failed or carrier has been dropped due to disconnect.
//
#define STATUS_CTX_MODEM_RESPONSE_NO_CARRIER ((NTSTATUS)0xC00A000CL)

//
// MessageId: STATUS_CTX_MODEM_RESPONSE_NO_DIALTONE
//
// MessageText:
//
// Dial tone not detected within required time.
// Verify phone cable is properly attached and functional.
//
#define STATUS_CTX_MODEM_RESPONSE_NO_DIALTONE ((NTSTATUS)0xC00A000DL)

//
// MessageId: STATUS_CTX_MODEM_RESPONSE_BUSY
//
// MessageText:
//
// Busy signal detected at remote site on callback.
//
#define STATUS_CTX_MODEM_RESPONSE_BUSY   ((NTSTATUS)0xC00A000EL)

//
// MessageId: STATUS_CTX_MODEM_RESPONSE_VOICE
//
// MessageText:
//
// Voice detected at remote site on callback.
//
#define STATUS_CTX_MODEM_RESPONSE_VOICE  ((NTSTATUS)0xC00A000FL)

//
// MessageId: STATUS_CTX_TD_ERROR
//
// MessageText:
//
// Transport driver error
//
#define STATUS_CTX_TD_ERROR              ((NTSTATUS)0xC00A0010L)

//
// MessageId: STATUS_CTX_LICENSE_CLIENT_INVALID
//
// MessageText:
//
// The client you are using is not licensed to use this system. Your logon request is denied.
//
#define STATUS_CTX_LICENSE_CLIENT_INVALID ((NTSTATUS)0xC00A0012L)

//
// MessageId: STATUS_CTX_LICENSE_NOT_AVAILABLE
//
// MessageText:
//
// The system has reached its licensed logon limit.
// Please try again later.
//
#define STATUS_CTX_LICENSE_NOT_AVAILABLE ((NTSTATUS)0xC00A0013L)

//
// MessageId: STATUS_CTX_LICENSE_EXPIRED
//
// MessageText:
//
// The system license has expired. Your logon request is denied.
//
#define STATUS_CTX_LICENSE_EXPIRED       ((NTSTATUS)0xC00A0014L)

//
// MessageId: STATUS_CTX_WINSTATION_NOT_FOUND
//
// MessageText:
//
// The specified session cannot be found.
//
#define STATUS_CTX_WINSTATION_NOT_FOUND  ((NTSTATUS)0xC00A0015L)

//
// MessageId: STATUS_CTX_WINSTATION_NAME_COLLISION
//
// MessageText:
//
// The specified session name is already in use.
//
#define STATUS_CTX_WINSTATION_NAME_COLLISION ((NTSTATUS)0xC00A0016L)

//
// MessageId: STATUS_CTX_WINSTATION_BUSY
//
// MessageText:
//
// The task you are trying to do can't be completed because Remote Desktop Services is currently busy. Please try again in a few minutes. Other users should still be able to log on.
//
#define STATUS_CTX_WINSTATION_BUSY       ((NTSTATUS)0xC00A0017L)

//
// MessageId: STATUS_CTX_BAD_VIDEO_MODE
//
// MessageText:
//
// An attempt has been made to connect to a session whose video mode is not supported by the current client.
//
#define STATUS_CTX_BAD_VIDEO_MODE        ((NTSTATUS)0xC00A0018L)

//
// MessageId: STATUS_CTX_GRAPHICS_INVALID
//
// MessageText:
//
// The application attempted to enable DOS graphics mode.
// DOS graphics mode is not supported.
//
#define STATUS_CTX_GRAPHICS_INVALID      ((NTSTATUS)0xC00A0022L)

//
// MessageId: STATUS_CTX_NOT_CONSOLE
//
// MessageText:
//
// The requested operation can be performed only on the system console.
// This is most often the result of a driver or system DLL requiring direct console access.
//
#define STATUS_CTX_NOT_CONSOLE           ((NTSTATUS)0xC00A0024L)

//
// MessageId: STATUS_CTX_CLIENT_QUERY_TIMEOUT
//
// MessageText:
//
// The client failed to respond to the server connect message.
//
#define STATUS_CTX_CLIENT_QUERY_TIMEOUT  ((NTSTATUS)0xC00A0026L)

//
// MessageId: STATUS_CTX_CONSOLE_DISCONNECT
//
// MessageText:
//
// Disconnecting the console session is not supported.
//
#define STATUS_CTX_CONSOLE_DISCONNECT    ((NTSTATUS)0xC00A0027L)

//
// MessageId: STATUS_CTX_CONSOLE_CONNECT
//
// MessageText:
//
// Reconnecting a disconnected session to the console is not supported.
//
#define STATUS_CTX_CONSOLE_CONNECT       ((NTSTATUS)0xC00A0028L)

//
// MessageId: STATUS_CTX_SHADOW_DENIED
//
// MessageText:
//
// The request to control another session remotely was denied.
//
#define STATUS_CTX_SHADOW_DENIED         ((NTSTATUS)0xC00A002AL)

//
// MessageId: STATUS_CTX_WINSTATION_ACCESS_DENIED
//
// MessageText:
//
// A process has requested access to a session, but has not been granted those access rights.
//
#define STATUS_CTX_WINSTATION_ACCESS_DENIED ((NTSTATUS)0xC00A002BL)

//
// MessageId: STATUS_CTX_INVALID_WD
//
// MessageText:
//
// The Terminal Connection driver %1 is invalid.
//
#define STATUS_CTX_INVALID_WD            ((NTSTATUS)0xC00A002EL)

//
// MessageId: STATUS_CTX_WD_NOT_FOUND
//
// MessageText:
//
// The Terminal Connection driver %1 was not found in the system path.
//
#define STATUS_CTX_WD_NOT_FOUND          ((NTSTATUS)0xC00A002FL)

//
// MessageId: STATUS_CTX_SHADOW_INVALID
//
// MessageText:
//
// The requested session cannot be controlled remotely.
// You cannot control your own session, a session that is trying to control your session,
// a session that has no user logged on, nor control other sessions from the console.
//
#define STATUS_CTX_SHADOW_INVALID        ((NTSTATUS)0xC00A0030L)

//
// MessageId: STATUS_CTX_SHADOW_DISABLED
//
// MessageText:
//
// The requested session is not configured to allow remote control.
//
#define STATUS_CTX_SHADOW_DISABLED       ((NTSTATUS)0xC00A0031L)

//
// MessageId: STATUS_RDP_PROTOCOL_ERROR
//
// MessageText:
//
// The RDP protocol component %2 detected an error in the protocol stream and has disconnected the client.
//
#define STATUS_RDP_PROTOCOL_ERROR        ((NTSTATUS)0xC00A0032L)

//
// MessageId: STATUS_CTX_CLIENT_LICENSE_NOT_SET
//
// MessageText:
//
// Your request to connect to this Terminal server has been rejected.
// Your Terminal Server Client license number has not been entered for this copy of the Terminal Client.
// Please call your system administrator for help in entering a valid, unique license number for this Terminal Server Client.
// Click OK to continue.
//
#define STATUS_CTX_CLIENT_LICENSE_NOT_SET ((NTSTATUS)0xC00A0033L)

//
// MessageId: STATUS_CTX_CLIENT_LICENSE_IN_USE
//
// MessageText:
//
// Your request to connect to this Terminal server has been rejected.
// Your Terminal Server Client license number is currently being used by another user.
// Please call your system administrator to obtain a new copy of the Terminal Server Client with a valid, unique license number.
// Click OK to continue.
//
#define STATUS_CTX_CLIENT_LICENSE_IN_USE ((NTSTATUS)0xC00A0034L)

//
// MessageId: STATUS_CTX_SHADOW_ENDED_BY_MODE_CHANGE
//
// MessageText:
//
// The remote control of the console was terminated because the display mode was changed. Changing the display mode in a remote control session is not supported.
//
#define STATUS_CTX_SHADOW_ENDED_BY_MODE_CHANGE ((NTSTATUS)0xC00A0035L)

//
// MessageId: STATUS_CTX_SHADOW_NOT_RUNNING
//
// MessageText:
//
// Remote control could not be terminated because the specified session is not currently being remotely controlled.
//
#define STATUS_CTX_SHADOW_NOT_RUNNING    ((NTSTATUS)0xC00A0036L)

//
// MessageId: STATUS_CTX_LOGON_DISABLED
//
// MessageText:
//
// Your interactive logon privilege has been disabled.
// Please contact your system administrator.
//
#define STATUS_CTX_LOGON_DISABLED        ((NTSTATUS)0xC00A0037L)

//
// MessageId: STATUS_CTX_SECURITY_LAYER_ERROR
//
// MessageText:
//
// The Terminal Server security layer detected an error in the protocol stream and has disconnected the client.
// Client IP: %2.
//
#define STATUS_CTX_SECURITY_LAYER_ERROR  ((NTSTATUS)0xC00A0038L)

//
// MessageId: STATUS_TS_INCOMPATIBLE_SESSIONS
//
// MessageText:
//
// The target session is incompatible with the current session.
//
#define STATUS_TS_INCOMPATIBLE_SESSIONS  ((NTSTATUS)0xC00A0039L)

//
// MessageId: STATUS_TS_VIDEO_SUBSYSTEM_ERROR
//
// MessageText:
//
// Windows can't connect to your session because a problem occurred in the Windows video subsystem. Try connecting again later, or contact the server administrator for assistance.
//
#define STATUS_TS_VIDEO_SUBSYSTEM_ERROR  ((NTSTATUS)0xC00A003AL)


//
//  IO error values
//

//
// MessageId: STATUS_PNP_BAD_MPS_TABLE
//
// MessageText:
//
// A device is missing in the system BIOS MPS table. This device will not be used.
// Please contact your system vendor for system BIOS update.
//
#define STATUS_PNP_BAD_MPS_TABLE         ((NTSTATUS)0xC0040035L)

//
// MessageId: STATUS_PNP_TRANSLATION_FAILED
//
// MessageText:
//
// A translator failed to translate resources.
//
#define STATUS_PNP_TRANSLATION_FAILED    ((NTSTATUS)0xC0040036L)

//
// MessageId: STATUS_PNP_IRQ_TRANSLATION_FAILED
//
// MessageText:
//
// A IRQ translator failed to translate resources.
//
#define STATUS_PNP_IRQ_TRANSLATION_FAILED ((NTSTATUS)0xC0040037L)

//
// MessageId: STATUS_PNP_INVALID_ID
//
// MessageText:
//
// Driver %2 returned invalid ID for a child device (%3).
//
#define STATUS_PNP_INVALID_ID            ((NTSTATUS)0xC0040038L)

//
// MessageId: STATUS_IO_REISSUE_AS_CACHED
//
// MessageText:
//
// Reissue the given operation as a cached IO operation
//
#define STATUS_IO_REISSUE_AS_CACHED      ((NTSTATUS)0xC0040039L)


//
//  MUI error values
//

//
// MessageId: STATUS_MUI_FILE_NOT_FOUND
//
// MessageText:
//
// The resource loader failed to find MUI file.
//
#define STATUS_MUI_FILE_NOT_FOUND        ((NTSTATUS)0xC00B0001L)

//
// MessageId: STATUS_MUI_INVALID_FILE
//
// MessageText:
//
// The resource loader failed to load MUI file because the file fail to pass validation.
//
#define STATUS_MUI_INVALID_FILE          ((NTSTATUS)0xC00B0002L)

//
// MessageId: STATUS_MUI_INVALID_RC_CONFIG
//
// MessageText:
//
// The RC Manifest is corrupted with garbage data or unsupported version or missing required item.
//
#define STATUS_MUI_INVALID_RC_CONFIG     ((NTSTATUS)0xC00B0003L)

//
// MessageId: STATUS_MUI_INVALID_LOCALE_NAME
//
// MessageText:
//
// The RC Manifest has invalid culture name.
//
#define STATUS_MUI_INVALID_LOCALE_NAME   ((NTSTATUS)0xC00B0004L)

//
// MessageId: STATUS_MUI_INVALID_ULTIMATEFALLBACK_NAME
//
// MessageText:
//
// The RC Manifest has invalid ultimatefallback name.
//
#define STATUS_MUI_INVALID_ULTIMATEFALLBACK_NAME ((NTSTATUS)0xC00B0005L)

//
// MessageId: STATUS_MUI_FILE_NOT_LOADED
//
// MessageText:
//
// The resource loader cache doesn't have loaded MUI entry.
//
#define STATUS_MUI_FILE_NOT_LOADED       ((NTSTATUS)0xC00B0006L)

//
// MessageId: STATUS_RESOURCE_ENUM_USER_STOP
//
// MessageText:
//
// User stopped resource enumeration.
//
#define STATUS_RESOURCE_ENUM_USER_STOP   ((NTSTATUS)0xC00B0007L)


//
//  Filter Manager error values
//

//
//  Translation macro for converting:
//     HRESULT --> NTSTATUS
//

#define FILTER_FLT_NTSTATUS_FROM_HRESULT(x) ((NTSTATUS) (((x) & 0xC0007FFF) | (FACILITY_FILTER_MANAGER << 16) | 0x40000000))

//
// MessageId: STATUS_FLT_NO_HANDLER_DEFINED
//
// MessageText:
//
// A handler was not defined by the filter for this operation.
//
#define STATUS_FLT_NO_HANDLER_DEFINED    ((NTSTATUS)0xC01C0001L)

//
// MessageId: STATUS_FLT_CONTEXT_ALREADY_DEFINED
//
// MessageText:
//
// A context is already defined for this object.
//
#define STATUS_FLT_CONTEXT_ALREADY_DEFINED ((NTSTATUS)0xC01C0002L)

//
// MessageId: STATUS_FLT_INVALID_ASYNCHRONOUS_REQUEST
//
// MessageText:
//
// Asynchronous requests are not valid for this operation.
//
#define STATUS_FLT_INVALID_ASYNCHRONOUS_REQUEST ((NTSTATUS)0xC01C0003L)

//
// MessageId: STATUS_FLT_DISALLOW_FAST_IO
//
// MessageText:
//
// Internal error code used by the filter manager to determine if a fastio operation should be forced down the IRP path. Mini-filters should never return this value.
//
#define STATUS_FLT_DISALLOW_FAST_IO      ((NTSTATUS)0xC01C0004L)

//
//  The same code used to disallow fast IO is also used to disallow the FS
//  filter QueryOpen callback.
//

#define STATUS_FLT_DISALLOW_FSFILTER_IO STATUS_FLT_DISALLOW_FAST_IO

//
// MessageId: STATUS_FLT_INVALID_NAME_REQUEST
//
// MessageText:
//
// An invalid name request was made. The name requested cannot be retrieved at this time.
//
#define STATUS_FLT_INVALID_NAME_REQUEST  ((NTSTATUS)0xC01C0005L)

//
// MessageId: STATUS_FLT_NOT_SAFE_TO_POST_OPERATION
//
// MessageText:
//
// Posting this operation to a worker thread for further processing is not safe at this time because it could lead to a system deadlock.
//
#define STATUS_FLT_NOT_SAFE_TO_POST_OPERATION ((NTSTATUS)0xC01C0006L)

//
// MessageId: STATUS_FLT_NOT_INITIALIZED
//
// MessageText:
//
// The Filter Manager was not initialized when a filter tried to register. Make sure that the Filter Manager is getting loaded as a driver.
//
#define STATUS_FLT_NOT_INITIALIZED       ((NTSTATUS)0xC01C0007L)

//
// MessageId: STATUS_FLT_FILTER_NOT_READY
//
// MessageText:
//
// The filter is not ready for attachment to volumes because it has not finished initializing (FltStartFiltering has not been called).
//
#define STATUS_FLT_FILTER_NOT_READY      ((NTSTATUS)0xC01C0008L)

//
// MessageId: STATUS_FLT_POST_OPERATION_CLEANUP
//
// MessageText:
//
// The filter must cleanup any operation specific context at this time because it is being removed from the system before the operation is completed by the lower drivers.
//
#define STATUS_FLT_POST_OPERATION_CLEANUP ((NTSTATUS)0xC01C0009L)

//
// MessageId: STATUS_FLT_INTERNAL_ERROR
//
// MessageText:
//
// The Filter Manager had an internal error from which it cannot recover, therefore the operation has been failed. This is usually the result of a filter returning an invalid value from a pre-operation callback.
//
#define STATUS_FLT_INTERNAL_ERROR        ((NTSTATUS)0xC01C000AL)

//
// MessageId: STATUS_FLT_DELETING_OBJECT
//
// MessageText:
//
// The object specified for this action is in the process of being deleted, therefore the action requested cannot be completed at this time.
//
#define STATUS_FLT_DELETING_OBJECT       ((NTSTATUS)0xC01C000BL)

//
// MessageId: STATUS_FLT_MUST_BE_NONPAGED_POOL
//
// MessageText:
//
// Non-paged pool must be used for this type of context.
//
#define STATUS_FLT_MUST_BE_NONPAGED_POOL ((NTSTATUS)0xC01C000CL)

//
// MessageId: STATUS_FLT_DUPLICATE_ENTRY
//
// MessageText:
//
// A duplicate handler definition has been provided for an operation.
//
#define STATUS_FLT_DUPLICATE_ENTRY       ((NTSTATUS)0xC01C000DL)

//
// MessageId: STATUS_FLT_CBDQ_DISABLED
//
// MessageText:
//
// The callback data queue has been disabled.
//
#define STATUS_FLT_CBDQ_DISABLED         ((NTSTATUS)0xC01C000EL)

//
// MessageId: STATUS_FLT_DO_NOT_ATTACH
//
// MessageText:
//
// Do not attach the filter to the volume at this time.
//
#define STATUS_FLT_DO_NOT_ATTACH         ((NTSTATUS)0xC01C000FL)

//
// MessageId: STATUS_FLT_DO_NOT_DETACH
//
// MessageText:
//
// Do not detach the filter from the volume at this time.
//
#define STATUS_FLT_DO_NOT_DETACH         ((NTSTATUS)0xC01C0010L)

//
// MessageId: STATUS_FLT_INSTANCE_ALTITUDE_COLLISION
//
// MessageText:
//
// An instance already exists at this altitude on the volume specified.
//
#define STATUS_FLT_INSTANCE_ALTITUDE_COLLISION ((NTSTATUS)0xC01C0011L)

//
// MessageId: STATUS_FLT_INSTANCE_NAME_COLLISION
//
// MessageText:
//
// An instance already exists with this name on the volume specified.
//
#define STATUS_FLT_INSTANCE_NAME_COLLISION ((NTSTATUS)0xC01C0012L)

//
// MessageId: STATUS_FLT_FILTER_NOT_FOUND
//
// MessageText:
//
// The system could not find the filter specified.
//
#define STATUS_FLT_FILTER_NOT_FOUND      ((NTSTATUS)0xC01C0013L)

//
// MessageId: STATUS_FLT_VOLUME_NOT_FOUND
//
// MessageText:
//
// The system could not find the volume specified.
//
#define STATUS_FLT_VOLUME_NOT_FOUND      ((NTSTATUS)0xC01C0014L)

//
// MessageId: STATUS_FLT_INSTANCE_NOT_FOUND
//
// MessageText:
//
// The system could not find the instance specified.
//
#define STATUS_FLT_INSTANCE_NOT_FOUND    ((NTSTATUS)0xC01C0015L)

//
// MessageId: STATUS_FLT_CONTEXT_ALLOCATION_NOT_FOUND
//
// MessageText:
//
// No registered context allocation definition was found for the given request.
//
#define STATUS_FLT_CONTEXT_ALLOCATION_NOT_FOUND ((NTSTATUS)0xC01C0016L)

//
// MessageId: STATUS_FLT_INVALID_CONTEXT_REGISTRATION
//
// MessageText:
//
// An invalid parameter was specified during context registration.
//
#define STATUS_FLT_INVALID_CONTEXT_REGISTRATION ((NTSTATUS)0xC01C0017L)

//
// MessageId: STATUS_FLT_NAME_CACHE_MISS
//
// MessageText:
//
// The name requested was not found in Filter Manager's name cache and could not be retrieved from the file system.
//
#define STATUS_FLT_NAME_CACHE_MISS       ((NTSTATUS)0xC01C0018L)

//
// MessageId: STATUS_FLT_NO_DEVICE_OBJECT
//
// MessageText:
//
// The requested device object does not exist for the given volume.
//
#define STATUS_FLT_NO_DEVICE_OBJECT      ((NTSTATUS)0xC01C0019L)

//
// MessageId: STATUS_FLT_VOLUME_ALREADY_MOUNTED
//
// MessageText:
//
// The specified volume is already mounted.
//
#define STATUS_FLT_VOLUME_ALREADY_MOUNTED ((NTSTATUS)0xC01C001AL)

//
// MessageId: STATUS_FLT_ALREADY_ENLISTED
//
// MessageText:
//
// The specified Transaction Context is already enlisted in a transaction
//
#define STATUS_FLT_ALREADY_ENLISTED      ((NTSTATUS)0xC01C001BL)

//
// MessageId: STATUS_FLT_CONTEXT_ALREADY_LINKED
//
// MessageText:
//
// The specified context is already attached to another object
//
#define STATUS_FLT_CONTEXT_ALREADY_LINKED ((NTSTATUS)0xC01C001CL)

//
// MessageId: STATUS_FLT_NO_WAITER_FOR_REPLY
//
// MessageText:
//
// No waiter is present for the filter's reply to this message.
//
#define STATUS_FLT_NO_WAITER_FOR_REPLY   ((NTSTATUS)0xC01C0020L)

//
// MessageId: STATUS_FLT_REGISTRATION_BUSY
//
// MessageText:
//
// The filesystem database resource is in use. Registration cannot complete at this time.
//
#define STATUS_FLT_REGISTRATION_BUSY     ((NTSTATUS)0xC01C0023L)

//
// MessageId: STATUS_FLT_WCOS_NOT_SUPPORTED
//
// MessageText:
//
// The filter is not allowed to attach because it has not declared compability with WCOS.
//
#define STATUS_FLT_WCOS_NOT_SUPPORTED    ((NTSTATUS)0xC01C0024L)


//
//  Side-by-side (SXS) error values
//

//
// MessageId: STATUS_SXS_SECTION_NOT_FOUND
//
// MessageText:
//
// The requested section is not present in the activation context.
//
#define STATUS_SXS_SECTION_NOT_FOUND     ((NTSTATUS)0xC0150001L)

//
// MessageId: STATUS_SXS_CANT_GEN_ACTCTX
//
// MessageText:
//
// Windows was not able to process the application binding information.
// Please refer to your System Event Log for further information.
//
#define STATUS_SXS_CANT_GEN_ACTCTX       ((NTSTATUS)0xC0150002L)

//
// MessageId: STATUS_SXS_INVALID_ACTCTXDATA_FORMAT
//
// MessageText:
//
// The application binding data format is invalid.
//
#define STATUS_SXS_INVALID_ACTCTXDATA_FORMAT ((NTSTATUS)0xC0150003L)

//
// MessageId: STATUS_SXS_ASSEMBLY_NOT_FOUND
//
// MessageText:
//
// The referenced assembly is not installed on your system.
//
#define STATUS_SXS_ASSEMBLY_NOT_FOUND    ((NTSTATUS)0xC0150004L)

//
// MessageId: STATUS_SXS_MANIFEST_FORMAT_ERROR
//
// MessageText:
//
// The manifest file does not begin with the required tag and format information.
//
#define STATUS_SXS_MANIFEST_FORMAT_ERROR ((NTSTATUS)0xC0150005L)

//
// MessageId: STATUS_SXS_MANIFEST_PARSE_ERROR
//
// MessageText:
//
// The manifest file contains one or more syntax errors.
//
#define STATUS_SXS_MANIFEST_PARSE_ERROR  ((NTSTATUS)0xC0150006L)

//
// MessageId: STATUS_SXS_ACTIVATION_CONTEXT_DISABLED
//
// MessageText:
//
// The application attempted to activate a disabled activation context.
//
#define STATUS_SXS_ACTIVATION_CONTEXT_DISABLED ((NTSTATUS)0xC0150007L)

//
// MessageId: STATUS_SXS_KEY_NOT_FOUND
//
// MessageText:
//
// The requested lookup key was not found in any active activation context.
//
#define STATUS_SXS_KEY_NOT_FOUND         ((NTSTATUS)0xC0150008L)

//
// MessageId: STATUS_SXS_VERSION_CONFLICT
//
// MessageText:
//
// A component version required by the application conflicts with another component version already active.
//
#define STATUS_SXS_VERSION_CONFLICT      ((NTSTATUS)0xC0150009L)

//
// MessageId: STATUS_SXS_WRONG_SECTION_TYPE
//
// MessageText:
//
// The type requested activation context section does not match the query API used.
//
#define STATUS_SXS_WRONG_SECTION_TYPE    ((NTSTATUS)0xC015000AL)

//
// MessageId: STATUS_SXS_THREAD_QUERIES_DISABLED
//
// MessageText:
//
// Lack of system resources has required isolated activation to be disabled for the current thread of execution.
//
#define STATUS_SXS_THREAD_QUERIES_DISABLED ((NTSTATUS)0xC015000BL)

//
// MessageId: STATUS_SXS_ASSEMBLY_MISSING
//
// MessageText:
//
// The referenced assembly could not be found.
//
#define STATUS_SXS_ASSEMBLY_MISSING      ((NTSTATUS)0xC015000CL)

//
// MessageId: STATUS_SXS_RELEASE_ACTIVATION_CONTEXT
//
// MessageText:
//
// A kernel mode component is releasing a reference on an activation context.
//
#define STATUS_SXS_RELEASE_ACTIVATION_CONTEXT ((NTSTATUS)0x4015000DL)

//
// MessageId: STATUS_SXS_PROCESS_DEFAULT_ALREADY_SET
//
// MessageText:
//
// An attempt to set the process default activation context failed because the process default activation context was already set.
//
#define STATUS_SXS_PROCESS_DEFAULT_ALREADY_SET ((NTSTATUS)0xC015000EL)

#if defined(STATUS_SUCCESS) || (_WIN32_WINNT > 0x0500) || (_WIN32_FUSION >= 0x0100) // winnt
//
// MessageId: STATUS_SXS_EARLY_DEACTIVATION
//
// MessageText:
//
// The activation context being deactivated is not the most recently activated one.
//
#define STATUS_SXS_EARLY_DEACTIVATION    ((NTSTATUS)0xC015000FL)    // winnt

//
// MessageId: STATUS_SXS_INVALID_DEACTIVATION
//
// MessageText:
//
// The activation context being deactivated is not active for the current thread of execution.
//
#define STATUS_SXS_INVALID_DEACTIVATION  ((NTSTATUS)0xC0150010L)    // winnt

#endif // winnt
//
// MessageId: STATUS_SXS_MULTIPLE_DEACTIVATION
//
// MessageText:
//
// The activation context being deactivated has already been deactivated.
//
#define STATUS_SXS_MULTIPLE_DEACTIVATION ((NTSTATUS)0xC0150011L)

//
// MessageId: STATUS_SXS_SYSTEM_DEFAULT_ACTIVATION_CONTEXT_EMPTY
//
// MessageText:
//
// The activation context of system default assembly could not be generated.
//
#define STATUS_SXS_SYSTEM_DEFAULT_ACTIVATION_CONTEXT_EMPTY ((NTSTATUS)0xC0150012L)

//
// MessageId: STATUS_SXS_PROCESS_TERMINATION_REQUESTED
//
// MessageText:
//
// A component used by the isolation facility has requested to terminate the process.
//
#define STATUS_SXS_PROCESS_TERMINATION_REQUESTED ((NTSTATUS)0xC0150013L)

//
// MessageId: STATUS_SXS_CORRUPT_ACTIVATION_STACK
//
// MessageText:
//
// The activation context activation stack for the running thread of execution is corrupt.
//
#define STATUS_SXS_CORRUPT_ACTIVATION_STACK ((NTSTATUS)0xC0150014L)

//
// MessageId: STATUS_SXS_CORRUPTION
//
// MessageText:
//
// The application isolation metadata for this process or thread has become corrupt.
//
#define STATUS_SXS_CORRUPTION            ((NTSTATUS)0xC0150015L)

//
// MessageId: STATUS_SXS_INVALID_IDENTITY_ATTRIBUTE_VALUE
//
// MessageText:
//
// The value of an attribute in an identity is not within the legal range.
//
#define STATUS_SXS_INVALID_IDENTITY_ATTRIBUTE_VALUE ((NTSTATUS)0xC0150016L)

//
// MessageId: STATUS_SXS_INVALID_IDENTITY_ATTRIBUTE_NAME
//
// MessageText:
//
// The name of an attribute in an identity is not within the legal range.
//
#define STATUS_SXS_INVALID_IDENTITY_ATTRIBUTE_NAME ((NTSTATUS)0xC0150017L)

//
// MessageId: STATUS_SXS_IDENTITY_DUPLICATE_ATTRIBUTE
//
// MessageText:
//
// An identity contains two definitions for the same attribute.
//
#define STATUS_SXS_IDENTITY_DUPLICATE_ATTRIBUTE ((NTSTATUS)0xC0150018L)

//
// MessageId: STATUS_SXS_IDENTITY_PARSE_ERROR
//
// MessageText:
//
// The identity string is malformed. This may be due to a trailing comma, more than two unnamed attributes, missing attribute name or missing attribute value.
//
#define STATUS_SXS_IDENTITY_PARSE_ERROR  ((NTSTATUS)0xC0150019L)

//
// MessageId: STATUS_SXS_COMPONENT_STORE_CORRUPT
//
// MessageText:
//
// The component store has been corrupted.
//
#define STATUS_SXS_COMPONENT_STORE_CORRUPT ((NTSTATUS)0xC015001AL)

//
// MessageId: STATUS_SXS_FILE_HASH_MISMATCH
//
// MessageText:
//
// A component's file does not match the verification information present in the component manifest.
//
#define STATUS_SXS_FILE_HASH_MISMATCH    ((NTSTATUS)0xC015001BL)

//
// MessageId: STATUS_SXS_MANIFEST_IDENTITY_SAME_BUT_CONTENTS_DIFFERENT
//
// MessageText:
//
// The identities of the manifests are identical but their contents are different.
//
#define STATUS_SXS_MANIFEST_IDENTITY_SAME_BUT_CONTENTS_DIFFERENT ((NTSTATUS)0xC015001CL)

//
// MessageId: STATUS_SXS_IDENTITIES_DIFFERENT
//
// MessageText:
//
// The component identities are different.
//
#define STATUS_SXS_IDENTITIES_DIFFERENT  ((NTSTATUS)0xC015001DL)

//
// MessageId: STATUS_SXS_ASSEMBLY_IS_NOT_A_DEPLOYMENT
//
// MessageText:
//
// The assembly is not a deployment.
//
#define STATUS_SXS_ASSEMBLY_IS_NOT_A_DEPLOYMENT ((NTSTATUS)0xC015001EL)

//
// MessageId: STATUS_SXS_FILE_NOT_PART_OF_ASSEMBLY
//
// MessageText:
//
// The file is not a part of the assembly.
//
#define STATUS_SXS_FILE_NOT_PART_OF_ASSEMBLY ((NTSTATUS)0xC015001FL)

//
// MessageId: STATUS_ADVANCED_INSTALLER_FAILED
//
// MessageText:
//
// An advanced installer failed during setup or servicing.
//
#define STATUS_ADVANCED_INSTALLER_FAILED ((NTSTATUS)0xC0150020L)

//
// MessageId: STATUS_XML_ENCODING_MISMATCH
//
// MessageText:
//
// The character encoding in the XML declaration did not match the encoding used in the document.
//
#define STATUS_XML_ENCODING_MISMATCH     ((NTSTATUS)0xC0150021L)

//
// MessageId: STATUS_SXS_MANIFEST_TOO_BIG
//
// MessageText:
//
// The size of the manifest exceeds the maximum allowed.
//
#define STATUS_SXS_MANIFEST_TOO_BIG      ((NTSTATUS)0xC0150022L)

//
// MessageId: STATUS_SXS_SETTING_NOT_REGISTERED
//
// MessageText:
//
// The setting is not registered.
//
#define STATUS_SXS_SETTING_NOT_REGISTERED ((NTSTATUS)0xC0150023L)

//
// MessageId: STATUS_SXS_TRANSACTION_CLOSURE_INCOMPLETE
//
// MessageText:
//
// One or more required members of the transaction are not present.
//
#define STATUS_SXS_TRANSACTION_CLOSURE_INCOMPLETE ((NTSTATUS)0xC0150024L)

//
// MessageId: STATUS_SMI_PRIMITIVE_INSTALLER_FAILED
//
// MessageText:
//
// The SMI primitive installer failed during setup or servicing.
//
#define STATUS_SMI_PRIMITIVE_INSTALLER_FAILED ((NTSTATUS)0xC0150025L)

//
// MessageId: STATUS_GENERIC_COMMAND_FAILED
//
// MessageText:
//
// A generic command executable returned a result that indicates failure.
//
#define STATUS_GENERIC_COMMAND_FAILED    ((NTSTATUS)0xC0150026L)

//
// MessageId: STATUS_SXS_FILE_HASH_MISSING
//
// MessageText:
//
// A component is missing file verification information in its manifest.
//
#define STATUS_SXS_FILE_HASH_MISSING     ((NTSTATUS)0xC0150027L)


//
//  Cluster error values
//

//
// MessageId: STATUS_CLUSTER_INVALID_NODE
//
// MessageText:
//
// The cluster node is not valid.
//
#define STATUS_CLUSTER_INVALID_NODE      ((NTSTATUS)0xC0130001L)

//
// MessageId: STATUS_CLUSTER_NODE_EXISTS
//
// MessageText:
//
// The cluster node already exists.
//
#define STATUS_CLUSTER_NODE_EXISTS       ((NTSTATUS)0xC0130002L)

//
// MessageId: STATUS_CLUSTER_JOIN_IN_PROGRESS
//
// MessageText:
//
// A node is in the process of joining the cluster.
//
#define STATUS_CLUSTER_JOIN_IN_PROGRESS  ((NTSTATUS)0xC0130003L)

//
// MessageId: STATUS_CLUSTER_NODE_NOT_FOUND
//
// MessageText:
//
// The cluster node was not found.
//
#define STATUS_CLUSTER_NODE_NOT_FOUND    ((NTSTATUS)0xC0130004L)

//
// MessageId: STATUS_CLUSTER_LOCAL_NODE_NOT_FOUND
//
// MessageText:
//
// The cluster local node information was not found.
//
#define STATUS_CLUSTER_LOCAL_NODE_NOT_FOUND ((NTSTATUS)0xC0130005L)

//
// MessageId: STATUS_CLUSTER_NETWORK_EXISTS
//
// MessageText:
//
// The cluster network already exists.
//
#define STATUS_CLUSTER_NETWORK_EXISTS    ((NTSTATUS)0xC0130006L)

//
// MessageId: STATUS_CLUSTER_NETWORK_NOT_FOUND
//
// MessageText:
//
// The cluster network was not found.
//
#define STATUS_CLUSTER_NETWORK_NOT_FOUND ((NTSTATUS)0xC0130007L)

//
// MessageId: STATUS_CLUSTER_NETINTERFACE_EXISTS
//
// MessageText:
//
// The cluster network interface already exists.
//
#define STATUS_CLUSTER_NETINTERFACE_EXISTS ((NTSTATUS)0xC0130008L)

//
// MessageId: STATUS_CLUSTER_NETINTERFACE_NOT_FOUND
//
// MessageText:
//
// The cluster network interface was not found.
//
#define STATUS_CLUSTER_NETINTERFACE_NOT_FOUND ((NTSTATUS)0xC0130009L)

//
// MessageId: STATUS_CLUSTER_INVALID_REQUEST
//
// MessageText:
//
// The cluster request is not valid for this object.
//
#define STATUS_CLUSTER_INVALID_REQUEST   ((NTSTATUS)0xC013000AL)

//
// MessageId: STATUS_CLUSTER_INVALID_NETWORK_PROVIDER
//
// MessageText:
//
// The cluster network provider is not valid.
//
#define STATUS_CLUSTER_INVALID_NETWORK_PROVIDER ((NTSTATUS)0xC013000BL)

//
// MessageId: STATUS_CLUSTER_NODE_DOWN
//
// MessageText:
//
// The cluster node is down.
//
#define STATUS_CLUSTER_NODE_DOWN         ((NTSTATUS)0xC013000CL)

//
// MessageId: STATUS_CLUSTER_NODE_UNREACHABLE
//
// MessageText:
//
// The cluster node is not reachable.
//
#define STATUS_CLUSTER_NODE_UNREACHABLE  ((NTSTATUS)0xC013000DL)

//
// MessageId: STATUS_CLUSTER_NODE_NOT_MEMBER
//
// MessageText:
//
// The cluster node is not a member of the cluster.
//
#define STATUS_CLUSTER_NODE_NOT_MEMBER   ((NTSTATUS)0xC013000EL)

//
// MessageId: STATUS_CLUSTER_JOIN_NOT_IN_PROGRESS
//
// MessageText:
//
// A cluster join operation is not in progress.
//
#define STATUS_CLUSTER_JOIN_NOT_IN_PROGRESS ((NTSTATUS)0xC013000FL)

//
// MessageId: STATUS_CLUSTER_INVALID_NETWORK
//
// MessageText:
//
// The cluster network is not valid.
//
#define STATUS_CLUSTER_INVALID_NETWORK   ((NTSTATUS)0xC0130010L)

//
// MessageId: STATUS_CLUSTER_NO_NET_ADAPTERS
//
// MessageText:
//
// No network adapters are available.
//
#define STATUS_CLUSTER_NO_NET_ADAPTERS   ((NTSTATUS)0xC0130011L)

//
// MessageId: STATUS_CLUSTER_NODE_UP
//
// MessageText:
//
// The cluster node is up.
//
#define STATUS_CLUSTER_NODE_UP           ((NTSTATUS)0xC0130012L)

//
// MessageId: STATUS_CLUSTER_NODE_PAUSED
//
// MessageText:
//
// The cluster node is paused.
//
#define STATUS_CLUSTER_NODE_PAUSED       ((NTSTATUS)0xC0130013L)

//
// MessageId: STATUS_CLUSTER_NODE_NOT_PAUSED
//
// MessageText:
//
// The cluster node is not paused.
//
#define STATUS_CLUSTER_NODE_NOT_PAUSED   ((NTSTATUS)0xC0130014L)

//
// MessageId: STATUS_CLUSTER_NO_SECURITY_CONTEXT
//
// MessageText:
//
// No cluster security context is available.
//
#define STATUS_CLUSTER_NO_SECURITY_CONTEXT ((NTSTATUS)0xC0130015L)

//
// MessageId: STATUS_CLUSTER_NETWORK_NOT_INTERNAL
//
// MessageText:
//
// The cluster network is not configured for internal cluster communication.
//
#define STATUS_CLUSTER_NETWORK_NOT_INTERNAL ((NTSTATUS)0xC0130016L)

//
// MessageId: STATUS_CLUSTER_POISONED
//
// MessageText:
//
// The cluster node has been poisoned.
//
#define STATUS_CLUSTER_POISONED          ((NTSTATUS)0xC0130017L)

//
// MessageId: STATUS_CLUSTER_NON_CSV_PATH
//
// MessageText:
//
// The path does not belong to a cluster shared volume.
//
#define STATUS_CLUSTER_NON_CSV_PATH      ((NTSTATUS)0xC0130018L)

//
// MessageId: STATUS_CLUSTER_CSV_VOLUME_NOT_LOCAL
//
// MessageText:
//
// The cluster shared volume is not locally mounted.
//
#define STATUS_CLUSTER_CSV_VOLUME_NOT_LOCAL ((NTSTATUS)0xC0130019L)

//
// MessageId: STATUS_CLUSTER_CSV_READ_OPLOCK_BREAK_IN_PROGRESS
//
// MessageText:
//
// The operation has failed because read oplock break is in progress.
//
#define STATUS_CLUSTER_CSV_READ_OPLOCK_BREAK_IN_PROGRESS ((NTSTATUS)0xC0130020L)

//
// MessageId: STATUS_CLUSTER_CSV_AUTO_PAUSE_ERROR
//
// MessageText:
//
// The operation has failed. CSVFS has to pause and refresh information.
//
#define STATUS_CLUSTER_CSV_AUTO_PAUSE_ERROR ((NTSTATUS)0xC0130021L)

//
// MessageId: STATUS_CLUSTER_CSV_REDIRECTED
//
// MessageText:
//
// The operation has failed. CSVFS does not allow block i/o in redirected mode.
//
#define STATUS_CLUSTER_CSV_REDIRECTED    ((NTSTATUS)0xC0130022L)

//
// MessageId: STATUS_CLUSTER_CSV_NOT_REDIRECTED
//
// MessageText:
//
// The operation has failed. CSVFS is not in redirected mode.
//
#define STATUS_CLUSTER_CSV_NOT_REDIRECTED ((NTSTATUS)0xC0130023L)

//
// MessageId: STATUS_CLUSTER_CSV_VOLUME_DRAINING
//
// MessageText:
//
// CSVFS is failing operation because it is in draining state.
//
#define STATUS_CLUSTER_CSV_VOLUME_DRAINING ((NTSTATUS)0xC0130024L)

//
// MessageId: STATUS_CLUSTER_CSV_SNAPSHOT_CREATION_IN_PROGRESS
//
// MessageText:
//
// The operation has failed because snapshot creation is in progress.
//
#define STATUS_CLUSTER_CSV_SNAPSHOT_CREATION_IN_PROGRESS ((NTSTATUS)0xC0130025L)

//
// MessageId: STATUS_CLUSTER_CSV_VOLUME_DRAINING_SUCCEEDED_DOWNLEVEL
//
// MessageText:
//
// The operation has succeeded on the down level file system, but CSV is failing it because it is in draining state.
//
#define STATUS_CLUSTER_CSV_VOLUME_DRAINING_SUCCEEDED_DOWNLEVEL ((NTSTATUS)0xC0130026L)

//
// MessageId: STATUS_CLUSTER_CSV_NO_SNAPSHOTS
//
// MessageText:
//
// Volsnap on the coordinating node returned an error indicating that there is no snapshots on this volume.
//
#define STATUS_CLUSTER_CSV_NO_SNAPSHOTS  ((NTSTATUS)0xC0130027L)

//
// MessageId: STATUS_CSV_IO_PAUSE_TIMEOUT
//
// MessageText:
//
// The operation has failed because CSV volume was not able to recover in time specified on this file object.
//
#define STATUS_CSV_IO_PAUSE_TIMEOUT      ((NTSTATUS)0xC0130028L)

//
// MessageId: STATUS_CLUSTER_CSV_INVALID_HANDLE
//
// MessageText:
//
// The operation has failed because CSV has invalidated this file object.
//
#define STATUS_CLUSTER_CSV_INVALID_HANDLE ((NTSTATUS)0xC0130029L)

//
// MessageId: STATUS_CLUSTER_CSV_SUPPORTED_ONLY_ON_COORDINATOR
//
// MessageText:
//
// This operation is supported only on the CSV coordinator node.
//
#define STATUS_CLUSTER_CSV_SUPPORTED_ONLY_ON_COORDINATOR ((NTSTATUS)0xC0130030L)

//
// MessageId: STATUS_CLUSTER_CAM_TICKET_REPLAY_DETECTED
//
// MessageText:
//
// Cluster CAM has detected that someone is trying to replay ticket.
//
#define STATUS_CLUSTER_CAM_TICKET_REPLAY_DETECTED ((NTSTATUS)0xC0130031L)


//
//  Transaction Manager error values
//

//
// MessageId: STATUS_TRANSACTIONAL_CONFLICT
//
// MessageText:
//
// The function attempted to use a name that is reserved for use by another transaction.
//
#define STATUS_TRANSACTIONAL_CONFLICT    ((NTSTATUS)0xC0190001L)

//
// MessageId: STATUS_INVALID_TRANSACTION
//
// MessageText:
//
// The transaction handle associated with this operation is not valid.
//
#define STATUS_INVALID_TRANSACTION       ((NTSTATUS)0xC0190002L)

//
// MessageId: STATUS_TRANSACTION_NOT_ACTIVE
//
// MessageText:
//
// The requested operation was made in the context of a transaction that is no longer active.
//
#define STATUS_TRANSACTION_NOT_ACTIVE    ((NTSTATUS)0xC0190003L)

//
// MessageId: STATUS_TM_INITIALIZATION_FAILED
//
// MessageText:
//
// The Transaction Manager was unable to be successfully initialized. Transacted operations are not supported.
//
#define STATUS_TM_INITIALIZATION_FAILED  ((NTSTATUS)0xC0190004L)

//
// MessageId: STATUS_RM_NOT_ACTIVE
//
// MessageText:
//
// Transaction support within the specified resource manager is not started or was shut down due to an error.
//
#define STATUS_RM_NOT_ACTIVE             ((NTSTATUS)0xC0190005L)

//
// MessageId: STATUS_RM_METADATA_CORRUPT
//
// MessageText:
//
// The metadata of the RM has been corrupted. The RM will not function.
//
#define STATUS_RM_METADATA_CORRUPT       ((NTSTATUS)0xC0190006L)

//
// MessageId: STATUS_TRANSACTION_NOT_JOINED
//
// MessageText:
//
// The resource manager has attempted to prepare a transaction that it has not successfully joined.
//
#define STATUS_TRANSACTION_NOT_JOINED    ((NTSTATUS)0xC0190007L)

//
// MessageId: STATUS_DIRECTORY_NOT_RM
//
// MessageText:
//
// The specified directory does not contain a file system resource manager.
//
#define STATUS_DIRECTORY_NOT_RM          ((NTSTATUS)0xC0190008L)

//
// MessageId: STATUS_COULD_NOT_RESIZE_LOG
//
// MessageText:
//
// The log could not be set to the requested size.
//
#define STATUS_COULD_NOT_RESIZE_LOG      ((NTSTATUS)0x80190009L)

//
// MessageId: STATUS_TRANSACTIONS_UNSUPPORTED_REMOTE
//
// MessageText:
//
// The remote server or share does not support transacted file operations.
//
#define STATUS_TRANSACTIONS_UNSUPPORTED_REMOTE ((NTSTATUS)0xC019000AL)

//
// MessageId: STATUS_LOG_RESIZE_INVALID_SIZE
//
// MessageText:
//
// The requested log size for the file system resource manager is invalid.
//
#define STATUS_LOG_RESIZE_INVALID_SIZE   ((NTSTATUS)0xC019000BL)

//
// MessageId: STATUS_REMOTE_FILE_VERSION_MISMATCH
//
// MessageText:
//
// The remote server sent mismatching version number or Fid for a file opened with transactions.
//
#define STATUS_REMOTE_FILE_VERSION_MISMATCH ((NTSTATUS)0xC019000CL)

//
// MessageId: STATUS_CRM_PROTOCOL_ALREADY_EXISTS
//
// MessageText:
//
// The RM tried to register a protocol that already exists.
//
#define STATUS_CRM_PROTOCOL_ALREADY_EXISTS ((NTSTATUS)0xC019000FL)

//
// MessageId: STATUS_TRANSACTION_PROPAGATION_FAILED
//
// MessageText:
//
// The attempt to propagate the Transaction failed.
//
#define STATUS_TRANSACTION_PROPAGATION_FAILED ((NTSTATUS)0xC0190010L)

//
// MessageId: STATUS_CRM_PROTOCOL_NOT_FOUND
//
// MessageText:
//
// The requested propagation protocol was not registered as a CRM.
//
#define STATUS_CRM_PROTOCOL_NOT_FOUND    ((NTSTATUS)0xC0190011L)

//
// MessageId: STATUS_TRANSACTION_SUPERIOR_EXISTS
//
// MessageText:
//
// The Transaction object already has a superior enlistment, and the caller attempted an operation that would have created a new superior. Only a single superior enlistment is allowed.
//
#define STATUS_TRANSACTION_SUPERIOR_EXISTS ((NTSTATUS)0xC0190012L)

//
// MessageId: STATUS_TRANSACTION_REQUEST_NOT_VALID
//
// MessageText:
//
// The requested operation is not valid on the Transaction object in its current state.
//
#define STATUS_TRANSACTION_REQUEST_NOT_VALID ((NTSTATUS)0xC0190013L)

//
// MessageId: STATUS_TRANSACTION_NOT_REQUESTED
//
// MessageText:
//
// The caller has called a response API, but the response is not expected because the TM did not issue the corresponding request to the caller.
//
#define STATUS_TRANSACTION_NOT_REQUESTED ((NTSTATUS)0xC0190014L)

//
// MessageId: STATUS_TRANSACTION_ALREADY_ABORTED
//
// MessageText:
//
// It is too late to perform the requested operation, since the Transaction has already been aborted.
//
#define STATUS_TRANSACTION_ALREADY_ABORTED ((NTSTATUS)0xC0190015L)

//
// MessageId: STATUS_TRANSACTION_ALREADY_COMMITTED
//
// MessageText:
//
// It is too late to perform the requested operation, since the Transaction has already been committed.
//
#define STATUS_TRANSACTION_ALREADY_COMMITTED ((NTSTATUS)0xC0190016L)

//
// MessageId: STATUS_TRANSACTION_INVALID_MARSHALL_BUFFER
//
// MessageText:
//
// The buffer passed in to NtPushTransaction or NtPullTransaction is not in a valid format.
//
#define STATUS_TRANSACTION_INVALID_MARSHALL_BUFFER ((NTSTATUS)0xC0190017L)

//
// MessageId: STATUS_CURRENT_TRANSACTION_NOT_VALID
//
// MessageText:
//
// The current transaction context associated with the thread is not a valid handle to a transaction object.
//
#define STATUS_CURRENT_TRANSACTION_NOT_VALID ((NTSTATUS)0xC0190018L)

//
// MessageId: STATUS_LOG_GROWTH_FAILED
//
// MessageText:
//
// An attempt to create space in the transactional resource manager's log failed. The failure status has been recorded in the event log.
//
#define STATUS_LOG_GROWTH_FAILED         ((NTSTATUS)0xC0190019L)

//
// MessageId: STATUS_OBJECT_NO_LONGER_EXISTS
//
// MessageText:
//
// The object (file, stream, link) corresponding to the handle has been deleted by a transaction savepoint rollback.
//
#define STATUS_OBJECT_NO_LONGER_EXISTS   ((NTSTATUS)0xC0190021L)

//
// MessageId: STATUS_STREAM_MINIVERSION_NOT_FOUND
//
// MessageText:
//
// The specified file miniversion was not found for this transacted file open.
//
#define STATUS_STREAM_MINIVERSION_NOT_FOUND ((NTSTATUS)0xC0190022L)

//
// MessageId: STATUS_STREAM_MINIVERSION_NOT_VALID
//
// MessageText:
//
// The specified file miniversion was found but has been invalidated. Most likely cause is a transaction savepoint rollback.
//
#define STATUS_STREAM_MINIVERSION_NOT_VALID ((NTSTATUS)0xC0190023L)

//
// MessageId: STATUS_MINIVERSION_INACCESSIBLE_FROM_SPECIFIED_TRANSACTION
//
// MessageText:
//
// A miniversion may only be opened in the context of the transaction that created it.
//
#define STATUS_MINIVERSION_INACCESSIBLE_FROM_SPECIFIED_TRANSACTION ((NTSTATUS)0xC0190024L)

//
// MessageId: STATUS_CANT_OPEN_MINIVERSION_WITH_MODIFY_INTENT
//
// MessageText:
//
// It is not possible to open a miniversion with modify access.
//
#define STATUS_CANT_OPEN_MINIVERSION_WITH_MODIFY_INTENT ((NTSTATUS)0xC0190025L)

//
// MessageId: STATUS_CANT_CREATE_MORE_STREAM_MINIVERSIONS
//
// MessageText:
//
// It is not possible to create any more miniversions for this stream.
//
#define STATUS_CANT_CREATE_MORE_STREAM_MINIVERSIONS ((NTSTATUS)0xC0190026L)

//
// MessageId: STATUS_HANDLE_NO_LONGER_VALID
//
// MessageText:
//
// The handle has been invalidated by a transaction. The most likely cause is the presence of memory mapping on a file or an open handle when the transaction ended or rolled back to savepoint.
//
#define STATUS_HANDLE_NO_LONGER_VALID    ((NTSTATUS)0xC0190028L)

//
// MessageId: STATUS_NO_TXF_METADATA
//
// MessageText:
//
// There is no transaction metadata on the file.
//
#define STATUS_NO_TXF_METADATA           ((NTSTATUS)0x80190029L)

//
// MessageId: STATUS_LOG_CORRUPTION_DETECTED
//
// MessageText:
//
// The log data is corrupt.
//
#define STATUS_LOG_CORRUPTION_DETECTED   ((NTSTATUS)0xC0190030L)

//
// MessageId: STATUS_CANT_RECOVER_WITH_HANDLE_OPEN
//
// MessageText:
//
// The file can't be recovered because there is a handle still open on it.
//
#define STATUS_CANT_RECOVER_WITH_HANDLE_OPEN ((NTSTATUS)0x80190031L)

//
// MessageId: STATUS_RM_DISCONNECTED
//
// MessageText:
//
// The transaction outcome is unavailable because the resource manager responsible for it has disconnected.
//
#define STATUS_RM_DISCONNECTED           ((NTSTATUS)0xC0190032L)

//
// MessageId: STATUS_ENLISTMENT_NOT_SUPERIOR
//
// MessageText:
//
// The request was rejected because the enlistment in question is not a superior enlistment.
//
#define STATUS_ENLISTMENT_NOT_SUPERIOR   ((NTSTATUS)0xC0190033L)

//
// MessageId: STATUS_RECOVERY_NOT_NEEDED
//
// MessageText:
//
// The transactional resource manager is already consistent. Recovery is not needed.
//
#define STATUS_RECOVERY_NOT_NEEDED       ((NTSTATUS)0x40190034L)

//
// MessageId: STATUS_RM_ALREADY_STARTED
//
// MessageText:
//
// The transactional resource manager has already been started.
//
#define STATUS_RM_ALREADY_STARTED        ((NTSTATUS)0x40190035L)

//
// MessageId: STATUS_FILE_IDENTITY_NOT_PERSISTENT
//
// MessageText:
//
// The file cannot be opened transactionally, because its identity depends on the outcome of an unresolved transaction.
//
#define STATUS_FILE_IDENTITY_NOT_PERSISTENT ((NTSTATUS)0xC0190036L)

//
// MessageId: STATUS_CANT_BREAK_TRANSACTIONAL_DEPENDENCY
//
// MessageText:
//
// The operation cannot be performed because another transaction is depending on the fact that this property will not change.
//
#define STATUS_CANT_BREAK_TRANSACTIONAL_DEPENDENCY ((NTSTATUS)0xC0190037L)

//
// MessageId: STATUS_CANT_CROSS_RM_BOUNDARY
//
// MessageText:
//
// The operation would involve a single file with two transactional resource managers and is therefore not allowed.
//
#define STATUS_CANT_CROSS_RM_BOUNDARY    ((NTSTATUS)0xC0190038L)

//
// MessageId: STATUS_TXF_DIR_NOT_EMPTY
//
// MessageText:
//
// The $Txf directory must be empty for this operation to succeed.
//
#define STATUS_TXF_DIR_NOT_EMPTY         ((NTSTATUS)0xC0190039L)

//
// MessageId: STATUS_INDOUBT_TRANSACTIONS_EXIST
//
// MessageText:
//
// The operation would leave a transactional resource manager in an inconsistent state and is therefore not allowed.
//
#define STATUS_INDOUBT_TRANSACTIONS_EXIST ((NTSTATUS)0xC019003AL)

//
// MessageId: STATUS_TM_VOLATILE
//
// MessageText:
//
// The operation could not be completed because the transaction manager does not have a log.
//
#define STATUS_TM_VOLATILE               ((NTSTATUS)0xC019003BL)

//
// MessageId: STATUS_ROLLBACK_TIMER_EXPIRED
//
// MessageText:
//
// A rollback could not be scheduled because a previously scheduled rollback has already executed or been queued for execution.
//
#define STATUS_ROLLBACK_TIMER_EXPIRED    ((NTSTATUS)0xC019003CL)

//
// MessageId: STATUS_TXF_ATTRIBUTE_CORRUPT
//
// MessageText:
//
// The transactional metadata attribute on the file or directory %hs is corrupt and unreadable.
//
#define STATUS_TXF_ATTRIBUTE_CORRUPT     ((NTSTATUS)0xC019003DL)

//
// MessageId: STATUS_EFS_NOT_ALLOWED_IN_TRANSACTION
//
// MessageText:
//
// The encryption operation could not be completed because a transaction is active.
//
#define STATUS_EFS_NOT_ALLOWED_IN_TRANSACTION ((NTSTATUS)0xC019003EL)

//
// MessageId: STATUS_TRANSACTIONAL_OPEN_NOT_ALLOWED
//
// MessageText:
//
// This object is not allowed to be opened in a transaction.
//
#define STATUS_TRANSACTIONAL_OPEN_NOT_ALLOWED ((NTSTATUS)0xC019003FL)

//
// MessageId: STATUS_TRANSACTED_MAPPING_UNSUPPORTED_REMOTE
//
// MessageText:
//
// Memory mapping (creating a mapped section) a remote file under a transaction is not supported.
//
#define STATUS_TRANSACTED_MAPPING_UNSUPPORTED_REMOTE ((NTSTATUS)0xC0190040L)

//
// MessageId: STATUS_TXF_METADATA_ALREADY_PRESENT
//
// MessageText:
//
// Transaction metadata is already present on this file and cannot be superseded.
//
#define STATUS_TXF_METADATA_ALREADY_PRESENT ((NTSTATUS)0x80190041L)

//
// MessageId: STATUS_TRANSACTION_SCOPE_CALLBACKS_NOT_SET
//
// MessageText:
//
// A transaction scope could not be entered because the scope handler has not been initialized.
//
#define STATUS_TRANSACTION_SCOPE_CALLBACKS_NOT_SET ((NTSTATUS)0x80190042L)

//
// MessageId: STATUS_TRANSACTION_REQUIRED_PROMOTION
//
// MessageText:
//
// Promotion was required in order to allow the resource manager to enlist, but the transaction was set to disallow it.
//
#define STATUS_TRANSACTION_REQUIRED_PROMOTION ((NTSTATUS)0xC0190043L)

//
// MessageId: STATUS_CANNOT_EXECUTE_FILE_IN_TRANSACTION
//
// MessageText:
//
// This file is open for modification in an unresolved transaction and may be opened for execute only by a transacted reader.
//
#define STATUS_CANNOT_EXECUTE_FILE_IN_TRANSACTION ((NTSTATUS)0xC0190044L)

//
// MessageId: STATUS_TRANSACTIONS_NOT_FROZEN
//
// MessageText:
//
// The request to thaw frozen transactions was ignored because transactions had not previously been frozen.
//
#define STATUS_TRANSACTIONS_NOT_FROZEN   ((NTSTATUS)0xC0190045L)

//
// MessageId: STATUS_TRANSACTION_FREEZE_IN_PROGRESS
//
// MessageText:
//
// Transactions cannot be frozen because a freeze is already in progress.
//
#define STATUS_TRANSACTION_FREEZE_IN_PROGRESS ((NTSTATUS)0xC0190046L)

//
// MessageId: STATUS_NOT_SNAPSHOT_VOLUME
//
// MessageText:
//
// The target volume is not a snapshot volume. This operation is only valid on a volume mounted as a snapshot.
//
#define STATUS_NOT_SNAPSHOT_VOLUME       ((NTSTATUS)0xC0190047L)

//
// MessageId: STATUS_NO_SAVEPOINT_WITH_OPEN_FILES
//
// MessageText:
//
// The savepoint operation failed because files are open on the transaction. This is not permitted.
//
#define STATUS_NO_SAVEPOINT_WITH_OPEN_FILES ((NTSTATUS)0xC0190048L)

//
// MessageId: STATUS_SPARSE_NOT_ALLOWED_IN_TRANSACTION
//
// MessageText:
//
// The sparse operation could not be completed because a transaction is active on the file.
//
#define STATUS_SPARSE_NOT_ALLOWED_IN_TRANSACTION ((NTSTATUS)0xC0190049L)

//
// MessageId: STATUS_TM_IDENTITY_MISMATCH
//
// MessageText:
//
// The call to create a TransactionManager object failed because the Tm Identity stored in the logfile does not match the Tm Identity that was passed in as an argument.
//
#define STATUS_TM_IDENTITY_MISMATCH      ((NTSTATUS)0xC019004AL)

//
// MessageId: STATUS_FLOATED_SECTION
//
// MessageText:
//
// I/O was attempted on a section object that has been floated as a result of a transaction ending. There is no valid data.
//
#define STATUS_FLOATED_SECTION           ((NTSTATUS)0xC019004BL)

//
// MessageId: STATUS_CANNOT_ACCEPT_TRANSACTED_WORK
//
// MessageText:
//
// The transactional resource manager cannot currently accept transacted work due to a transient condition such as low resources.
//
#define STATUS_CANNOT_ACCEPT_TRANSACTED_WORK ((NTSTATUS)0xC019004CL)

//
// MessageId: STATUS_CANNOT_ABORT_TRANSACTIONS
//
// MessageText:
//
// The transactional resource manager had too many transactions outstanding that could not be aborted. The transactional resource manger has been shut down.
//
#define STATUS_CANNOT_ABORT_TRANSACTIONS ((NTSTATUS)0xC019004DL)

//
// MessageId: STATUS_TRANSACTION_NOT_FOUND
//
// MessageText:
//
// The specified Transaction was unable to be opened, because it was not found.
//
#define STATUS_TRANSACTION_NOT_FOUND     ((NTSTATUS)0xC019004EL)

//
// MessageId: STATUS_RESOURCEMANAGER_NOT_FOUND
//
// MessageText:
//
// The specified ResourceManager was unable to be opened, because it was not found.
//
#define STATUS_RESOURCEMANAGER_NOT_FOUND ((NTSTATUS)0xC019004FL)

//
// MessageId: STATUS_ENLISTMENT_NOT_FOUND
//
// MessageText:
//
// The specified Enlistment was unable to be opened, because it was not found.
//
#define STATUS_ENLISTMENT_NOT_FOUND      ((NTSTATUS)0xC0190050L)

//
// MessageId: STATUS_TRANSACTIONMANAGER_NOT_FOUND
//
// MessageText:
//
// The specified TransactionManager was unable to be opened, because it was not found.
//
#define STATUS_TRANSACTIONMANAGER_NOT_FOUND ((NTSTATUS)0xC0190051L)

//
// MessageId: STATUS_TRANSACTIONMANAGER_NOT_ONLINE
//
// MessageText:
//
// The object specified could not be created or opened, because its associated TransactionManager is not online.  The TransactionManager must be brought fully Online by calling RecoverTransactionManager to recover to the end of its LogFile before objects in its Transaction or ResourceManager namespaces can be opened.  In addition, errors in writing records to its LogFile can cause a TransactionManager to go offline.
//
#define STATUS_TRANSACTIONMANAGER_NOT_ONLINE ((NTSTATUS)0xC0190052L)

//
// MessageId: STATUS_TRANSACTIONMANAGER_RECOVERY_NAME_COLLISION
//
// MessageText:
//
// The specified TransactionManager was unable to create the objects contained in its logfile in the Ob namespace. Therefore, the TransactionManager was unable to recover.
//
#define STATUS_TRANSACTIONMANAGER_RECOVERY_NAME_COLLISION ((NTSTATUS)0xC0190053L)

//
// MessageId: STATUS_TRANSACTION_NOT_ROOT
//
// MessageText:
//
// The call to create a superior Enlistment on this Transaction object could not be completed, because the Transaction object specified for the enlistment is a subordinate branch of the Transaction. Only the root of the Transaction can be enlisted on as a superior.
//
#define STATUS_TRANSACTION_NOT_ROOT      ((NTSTATUS)0xC0190054L)

//
// MessageId: STATUS_TRANSACTION_OBJECT_EXPIRED
//
// MessageText:
//
// Because the associated transaction manager or resource manager has been closed, the handle is no longer valid.
//
#define STATUS_TRANSACTION_OBJECT_EXPIRED ((NTSTATUS)0xC0190055L)

//
// MessageId: STATUS_COMPRESSION_NOT_ALLOWED_IN_TRANSACTION
//
// MessageText:
//
// The compression operation could not be completed because a transaction is active on the file.
//
#define STATUS_COMPRESSION_NOT_ALLOWED_IN_TRANSACTION ((NTSTATUS)0xC0190056L)

//
// MessageId: STATUS_TRANSACTION_RESPONSE_NOT_ENLISTED
//
// MessageText:
//
// The specified operation could not be performed on this Superior enlistment, because the enlistment was not created with the corresponding completion response in the NotificationMask.
//
#define STATUS_TRANSACTION_RESPONSE_NOT_ENLISTED ((NTSTATUS)0xC0190057L)

//
// MessageId: STATUS_TRANSACTION_RECORD_TOO_LONG
//
// MessageText:
//
// The specified operation could not be performed, because the record that would be logged was too long. This can occur because of two conditions:  either there are too many Enlistments on this Transaction, or the combined RecoveryInformation being logged on behalf of those Enlistments is too long.
//
#define STATUS_TRANSACTION_RECORD_TOO_LONG ((NTSTATUS)0xC0190058L)

//
// MessageId: STATUS_NO_LINK_TRACKING_IN_TRANSACTION
//
// MessageText:
//
// The link tracking operation could not be completed because a transaction is active.
//
#define STATUS_NO_LINK_TRACKING_IN_TRANSACTION ((NTSTATUS)0xC0190059L)

//
// MessageId: STATUS_OPERATION_NOT_SUPPORTED_IN_TRANSACTION
//
// MessageText:
//
// This operation cannot be performed in a transaction.
//
#define STATUS_OPERATION_NOT_SUPPORTED_IN_TRANSACTION ((NTSTATUS)0xC019005AL)

//
// MessageId: STATUS_TRANSACTION_INTEGRITY_VIOLATED
//
// MessageText:
//
// The kernel transaction manager had to abort or forget the transaction because it blocked forward progress.
//
#define STATUS_TRANSACTION_INTEGRITY_VIOLATED ((NTSTATUS)0xC019005BL)

//
// MessageId: STATUS_TRANSACTIONMANAGER_IDENTITY_MISMATCH
//
// MessageText:
//
// The TransactionManager identity that was supplied did not match the one recorded in the TransactionManager's log file.
//
#define STATUS_TRANSACTIONMANAGER_IDENTITY_MISMATCH ((NTSTATUS)0xC019005CL)

//
// MessageId: STATUS_RM_CANNOT_BE_FROZEN_FOR_SNAPSHOT
//
// MessageText:
//
// This snapshot operation cannot continue because a transactional resource manager cannot be frozen in its current state.  Please try again.
//
#define STATUS_RM_CANNOT_BE_FROZEN_FOR_SNAPSHOT ((NTSTATUS)0xC019005DL)

//
// MessageId: STATUS_TRANSACTION_MUST_WRITETHROUGH
//
// MessageText:
//
// The transaction cannot be enlisted on with the specified EnlistmentMask, because the transaction has already completed the PrePrepare phase.  In order to ensure correctness, the ResourceManager must switch to a write-through mode and cease caching data within this transaction.  Enlisting for only subsequent transaction phases may still succeed.
//
#define STATUS_TRANSACTION_MUST_WRITETHROUGH ((NTSTATUS)0xC019005EL)

//
// MessageId: STATUS_TRANSACTION_NO_SUPERIOR
//
// MessageText:
//
// The transaction does not have a superior enlistment.
//
#define STATUS_TRANSACTION_NO_SUPERIOR   ((NTSTATUS)0xC019005FL)

//
// MessageId: STATUS_EXPIRED_HANDLE
//
// MessageText:
//
// The handle is no longer properly associated with its transaction.  It may have been opened in a transactional resource manager that was subsequently forced to restart.  Please close the handle and open a new one.
//
#define STATUS_EXPIRED_HANDLE            ((NTSTATUS)0xC0190060L)

//
// MessageId: STATUS_TRANSACTION_NOT_ENLISTED
//
// MessageText:
//
// The specified operation could not be performed because the resource manager is not enlisted in the transaction.
//
#define STATUS_TRANSACTION_NOT_ENLISTED  ((NTSTATUS)0xC0190061L)


//
//  CLFS (common log file system) error values
//

//
// MessageId: STATUS_LOG_SECTOR_INVALID
//
// MessageText:
//
// Log service found an invalid log sector.
//
#define STATUS_LOG_SECTOR_INVALID        ((NTSTATUS)0xC01A0001L)

//
// MessageId: STATUS_LOG_SECTOR_PARITY_INVALID
//
// MessageText:
//
// Log service encountered a log sector with invalid block parity.
//
#define STATUS_LOG_SECTOR_PARITY_INVALID ((NTSTATUS)0xC01A0002L)

//
// MessageId: STATUS_LOG_SECTOR_REMAPPED
//
// MessageText:
//
// Log service encountered a remapped log sector.
//
#define STATUS_LOG_SECTOR_REMAPPED       ((NTSTATUS)0xC01A0003L)

//
// MessageId: STATUS_LOG_BLOCK_INCOMPLETE
//
// MessageText:
//
// Log service encountered a partial or incomplete log block.
//
#define STATUS_LOG_BLOCK_INCOMPLETE      ((NTSTATUS)0xC01A0004L)

//
// MessageId: STATUS_LOG_INVALID_RANGE
//
// MessageText:
//
// Log service encountered an attempt access data outside the active log range.
//
#define STATUS_LOG_INVALID_RANGE         ((NTSTATUS)0xC01A0005L)

//
// MessageId: STATUS_LOG_BLOCKS_EXHAUSTED
//
// MessageText:
//
// Log service user log marshalling buffers are exhausted.
//
#define STATUS_LOG_BLOCKS_EXHAUSTED      ((NTSTATUS)0xC01A0006L)

//
// MessageId: STATUS_LOG_READ_CONTEXT_INVALID
//
// MessageText:
//
// Log service encountered an attempt read from a marshalling area with an invalid read context.
//
#define STATUS_LOG_READ_CONTEXT_INVALID  ((NTSTATUS)0xC01A0007L)

//
// MessageId: STATUS_LOG_RESTART_INVALID
//
// MessageText:
//
// Log service encountered an invalid log restart area.
//
#define STATUS_LOG_RESTART_INVALID       ((NTSTATUS)0xC01A0008L)

//
// MessageId: STATUS_LOG_BLOCK_VERSION
//
// MessageText:
//
// Log service encountered an invalid log block version.
//
#define STATUS_LOG_BLOCK_VERSION         ((NTSTATUS)0xC01A0009L)

//
// MessageId: STATUS_LOG_BLOCK_INVALID
//
// MessageText:
//
// Log service encountered an invalid log block.
//
#define STATUS_LOG_BLOCK_INVALID         ((NTSTATUS)0xC01A000AL)

//
// MessageId: STATUS_LOG_READ_MODE_INVALID
//
// MessageText:
//
// Log service encountered an attempt to read the log with an invalid read mode.
//
#define STATUS_LOG_READ_MODE_INVALID     ((NTSTATUS)0xC01A000BL)

//
// MessageId: STATUS_LOG_NO_RESTART
//
// MessageText:
//
// Log service encountered a log stream with no restart area.
//
#define STATUS_LOG_NO_RESTART            ((NTSTATUS)0x401A000CL)

//
// MessageId: STATUS_LOG_METADATA_CORRUPT
//
// MessageText:
//
// Log service encountered a corrupted metadata file.
//
#define STATUS_LOG_METADATA_CORRUPT      ((NTSTATUS)0xC01A000DL)

//
// MessageId: STATUS_LOG_METADATA_INVALID
//
// MessageText:
//
// Log service encountered a metadata file that could not be created by the log file system.
//
#define STATUS_LOG_METADATA_INVALID      ((NTSTATUS)0xC01A000EL)

//
// MessageId: STATUS_LOG_METADATA_INCONSISTENT
//
// MessageText:
//
// Log service encountered a metadata file with inconsistent data.
//
#define STATUS_LOG_METADATA_INCONSISTENT ((NTSTATUS)0xC01A000FL)

//
// MessageId: STATUS_LOG_RESERVATION_INVALID
//
// MessageText:
//
// Log service encountered an attempt to erroneously allocate or dispose reservation space.
//
#define STATUS_LOG_RESERVATION_INVALID   ((NTSTATUS)0xC01A0010L)

//
// MessageId: STATUS_LOG_CANT_DELETE
//
// MessageText:
//
// Log service cannot delete log file or file system container.
//
#define STATUS_LOG_CANT_DELETE           ((NTSTATUS)0xC01A0011L)

//
// MessageId: STATUS_LOG_CONTAINER_LIMIT_EXCEEDED
//
// MessageText:
//
// Log service has reached the maximum allowable containers allocated to a log file.
//
#define STATUS_LOG_CONTAINER_LIMIT_EXCEEDED ((NTSTATUS)0xC01A0012L)

//
// MessageId: STATUS_LOG_START_OF_LOG
//
// MessageText:
//
// Log service has attempted to read or write backwards past the start of the log.
//
#define STATUS_LOG_START_OF_LOG          ((NTSTATUS)0xC01A0013L)

//
// MessageId: STATUS_LOG_POLICY_ALREADY_INSTALLED
//
// MessageText:
//
// Log policy could not be installed because a policy of the same type is already present.
//
#define STATUS_LOG_POLICY_ALREADY_INSTALLED ((NTSTATUS)0xC01A0014L)

//
// MessageId: STATUS_LOG_POLICY_NOT_INSTALLED
//
// MessageText:
//
// Log policy in question was not installed at the time of the request.
//
#define STATUS_LOG_POLICY_NOT_INSTALLED  ((NTSTATUS)0xC01A0015L)

//
// MessageId: STATUS_LOG_POLICY_INVALID
//
// MessageText:
//
// The installed set of policies on the log is invalid.
//
#define STATUS_LOG_POLICY_INVALID        ((NTSTATUS)0xC01A0016L)

//
// MessageId: STATUS_LOG_POLICY_CONFLICT
//
// MessageText:
//
// A policy on the log in question prevented the operation from completing.
//
#define STATUS_LOG_POLICY_CONFLICT       ((NTSTATUS)0xC01A0017L)

//
// MessageId: STATUS_LOG_PINNED_ARCHIVE_TAIL
//
// MessageText:
//
// Log space cannot be reclaimed because the log is pinned by the archive tail.
//
#define STATUS_LOG_PINNED_ARCHIVE_TAIL   ((NTSTATUS)0xC01A0018L)

//
// MessageId: STATUS_LOG_RECORD_NONEXISTENT
//
// MessageText:
//
// Log record is not a record in the log file.
//
#define STATUS_LOG_RECORD_NONEXISTENT    ((NTSTATUS)0xC01A0019L)

//
// MessageId: STATUS_LOG_RECORDS_RESERVED_INVALID
//
// MessageText:
//
// Number of reserved log records or the adjustment of the number of reserved log records is invalid.
//
#define STATUS_LOG_RECORDS_RESERVED_INVALID ((NTSTATUS)0xC01A001AL)

//
// MessageId: STATUS_LOG_SPACE_RESERVED_INVALID
//
// MessageText:
//
// Reserved log space or the adjustment of the log space is invalid.
//
#define STATUS_LOG_SPACE_RESERVED_INVALID ((NTSTATUS)0xC01A001BL)

//
// MessageId: STATUS_LOG_TAIL_INVALID
//
// MessageText:
//
// A new or existing archive tail or base of the active log is invalid.
//
#define STATUS_LOG_TAIL_INVALID          ((NTSTATUS)0xC01A001CL)

//
// MessageId: STATUS_LOG_FULL
//
// MessageText:
//
// Log space is exhausted.
//
#define STATUS_LOG_FULL                  ((NTSTATUS)0xC01A001DL)

//
// MessageId: STATUS_LOG_MULTIPLEXED
//
// MessageText:
//
// Log is multiplexed, no direct writes to the physical log is allowed.
//
#define STATUS_LOG_MULTIPLEXED           ((NTSTATUS)0xC01A001EL)

//
// MessageId: STATUS_LOG_DEDICATED
//
// MessageText:
//
// The operation failed because the log is a dedicated log.
//
#define STATUS_LOG_DEDICATED             ((NTSTATUS)0xC01A001FL)

//
// MessageId: STATUS_LOG_ARCHIVE_NOT_IN_PROGRESS
//
// MessageText:
//
// The operation requires an archive context.
//
#define STATUS_LOG_ARCHIVE_NOT_IN_PROGRESS ((NTSTATUS)0xC01A0020L)

//
// MessageId: STATUS_LOG_ARCHIVE_IN_PROGRESS
//
// MessageText:
//
// Log archival is in progress.
//
#define STATUS_LOG_ARCHIVE_IN_PROGRESS   ((NTSTATUS)0xC01A0021L)

//
// MessageId: STATUS_LOG_EPHEMERAL
//
// MessageText:
//
// The operation requires a non-ephemeral log, but the log is ephemeral.
//
#define STATUS_LOG_EPHEMERAL             ((NTSTATUS)0xC01A0022L)

//
// MessageId: STATUS_LOG_NOT_ENOUGH_CONTAINERS
//
// MessageText:
//
// The log must have at least two containers before it can be read from or written to.
//
#define STATUS_LOG_NOT_ENOUGH_CONTAINERS ((NTSTATUS)0xC01A0023L)

//
// MessageId: STATUS_LOG_CLIENT_ALREADY_REGISTERED
//
// MessageText:
//
// A log client has already registered on the stream.
//
#define STATUS_LOG_CLIENT_ALREADY_REGISTERED ((NTSTATUS)0xC01A0024L)

//
// MessageId: STATUS_LOG_CLIENT_NOT_REGISTERED
//
// MessageText:
//
// A log client has not been registered on the stream.
//
#define STATUS_LOG_CLIENT_NOT_REGISTERED ((NTSTATUS)0xC01A0025L)

//
// MessageId: STATUS_LOG_FULL_HANDLER_IN_PROGRESS
//
// MessageText:
//
// A request has already been made to handle the log full condition.
//
#define STATUS_LOG_FULL_HANDLER_IN_PROGRESS ((NTSTATUS)0xC01A0026L)

//
// MessageId: STATUS_LOG_CONTAINER_READ_FAILED
//
// MessageText:
//
// Log service encountered an error when attempting to read from a log container.
//
#define STATUS_LOG_CONTAINER_READ_FAILED ((NTSTATUS)0xC01A0027L)

//
// MessageId: STATUS_LOG_CONTAINER_WRITE_FAILED
//
// MessageText:
//
// Log service encountered an error when attempting to write to a log container.
//
#define STATUS_LOG_CONTAINER_WRITE_FAILED ((NTSTATUS)0xC01A0028L)

//
// MessageId: STATUS_LOG_CONTAINER_OPEN_FAILED
//
// MessageText:
//
// Log service encountered an error when attempting open a log container.
//
#define STATUS_LOG_CONTAINER_OPEN_FAILED ((NTSTATUS)0xC01A0029L)

//
// MessageId: STATUS_LOG_CONTAINER_STATE_INVALID
//
// MessageText:
//
// Log service encountered an invalid container state when attempting a requested action.
//
#define STATUS_LOG_CONTAINER_STATE_INVALID ((NTSTATUS)0xC01A002AL)

//
// MessageId: STATUS_LOG_STATE_INVALID
//
// MessageText:
//
// Log service is not in the correct state to perform a requested action.
//
#define STATUS_LOG_STATE_INVALID         ((NTSTATUS)0xC01A002BL)

//
// MessageId: STATUS_LOG_PINNED
//
// MessageText:
//
// Log space cannot be reclaimed because the log is pinned.
//
#define STATUS_LOG_PINNED                ((NTSTATUS)0xC01A002CL)

//
// MessageId: STATUS_LOG_METADATA_FLUSH_FAILED
//
// MessageText:
//
// Log metadata flush failed.
//
#define STATUS_LOG_METADATA_FLUSH_FAILED ((NTSTATUS)0xC01A002DL)

//
// MessageId: STATUS_LOG_INCONSISTENT_SECURITY
//
// MessageText:
//
// Security on the log and its containers is inconsistent.
//
#define STATUS_LOG_INCONSISTENT_SECURITY ((NTSTATUS)0xC01A002EL)

//
// MessageId: STATUS_LOG_APPENDED_FLUSH_FAILED
//
// MessageText:
//
// Records were appended to the log or reservation changes were made, but the log could not be flushed.
//
#define STATUS_LOG_APPENDED_FLUSH_FAILED ((NTSTATUS)0xC01A002FL)

//
// MessageId: STATUS_LOG_PINNED_RESERVATION
//
// MessageText:
//
// The log is pinned due to reservation consuming most of the log space. Free some reserved records to make space available.
//
#define STATUS_LOG_PINNED_RESERVATION    ((NTSTATUS)0xC01A0030L)


//
// XDDM Video Facility Error codes (videoprt.sys)
//

//
// MessageId: STATUS_VIDEO_HUNG_DISPLAY_DRIVER_THREAD
//
// MessageText:
//
// {Display Driver Stopped Responding}
// The %hs display driver has stopped working normally. Save your work and reboot the system to restore full display functionality. The next time you reboot the machine a dialog will be displayed giving you a chance to upload data about this failure to Microsoft.
//
#define STATUS_VIDEO_HUNG_DISPLAY_DRIVER_THREAD ((NTSTATUS)0xC01B00EAL)

//
// MessageId: STATUS_VIDEO_HUNG_DISPLAY_DRIVER_THREAD_RECOVERED
//
// MessageText:
//
// {Display Driver Stopped Responding and recovered}
// The %hs display driver has stopped working normally. The recovery had been performed.
//
#define STATUS_VIDEO_HUNG_DISPLAY_DRIVER_THREAD_RECOVERED ((NTSTATUS)0x801B00EBL)

//
// MessageId: STATUS_VIDEO_DRIVER_DEBUG_REPORT_REQUEST
//
// MessageText:
//
// {Display Driver Recovered From Failure}
// The %hs display driver has detected and recovered from a failure. Some graphical operations may have failed. The next time you reboot the machine a dialog will be displayed giving you a chance to upload data about this failure to Microsoft.
//
#define STATUS_VIDEO_DRIVER_DEBUG_REPORT_REQUEST ((NTSTATUS)0x401B00ECL)


//
// Monitor Facility Error codes (monitor.sys)
//

//
// MessageId: STATUS_MONITOR_NO_DESCRIPTOR
//
// MessageText:
//
// Monitor descriptor could not be obtained.
//
#define STATUS_MONITOR_NO_DESCRIPTOR     ((NTSTATUS)0xC01D0001L)

//
// MessageId: STATUS_MONITOR_UNKNOWN_DESCRIPTOR_FORMAT
//
// MessageText:
//
// Format of the obtained monitor descriptor is not supported by this release.
//
#define STATUS_MONITOR_UNKNOWN_DESCRIPTOR_FORMAT ((NTSTATUS)0xC01D0002L)

//
// MessageId: STATUS_MONITOR_INVALID_DESCRIPTOR_CHECKSUM
//
// MessageText:
//
// Checksum of the obtained monitor descriptor is invalid.
//
#define STATUS_MONITOR_INVALID_DESCRIPTOR_CHECKSUM ((NTSTATUS)0xC01D0003L)

//
// MessageId: STATUS_MONITOR_INVALID_STANDARD_TIMING_BLOCK
//
// MessageText:
//
// Monitor descriptor contains an invalid standard timing block.
//
#define STATUS_MONITOR_INVALID_STANDARD_TIMING_BLOCK ((NTSTATUS)0xC01D0004L)

//
// MessageId: STATUS_MONITOR_WMI_DATABLOCK_REGISTRATION_FAILED
//
// MessageText:
//
// WMI data block registration failed for one of the MSMonitorClass WMI subclasses.
//
#define STATUS_MONITOR_WMI_DATABLOCK_REGISTRATION_FAILED ((NTSTATUS)0xC01D0005L)

//
// MessageId: STATUS_MONITOR_INVALID_SERIAL_NUMBER_MONDSC_BLOCK
//
// MessageText:
//
// Provided monitor descriptor block is either corrupted or does not contain monitor's detailed serial number.
//
#define STATUS_MONITOR_INVALID_SERIAL_NUMBER_MONDSC_BLOCK ((NTSTATUS)0xC01D0006L)

//
// MessageId: STATUS_MONITOR_INVALID_USER_FRIENDLY_MONDSC_BLOCK
//
// MessageText:
//
// Provided monitor descriptor block is either corrupted or does not contain monitor's user friendly name.
//
#define STATUS_MONITOR_INVALID_USER_FRIENDLY_MONDSC_BLOCK ((NTSTATUS)0xC01D0007L)

//
// MessageId: STATUS_MONITOR_NO_MORE_DESCRIPTOR_DATA
//
// MessageText:
//
// There is no monitor descriptor data at the specified (offset, size) region.
//
#define STATUS_MONITOR_NO_MORE_DESCRIPTOR_DATA ((NTSTATUS)0xC01D0008L)

//
// MessageId: STATUS_MONITOR_INVALID_DETAILED_TIMING_BLOCK
//
// MessageText:
//
// Monitor descriptor contains an invalid detailed timing block.
//
#define STATUS_MONITOR_INVALID_DETAILED_TIMING_BLOCK ((NTSTATUS)0xC01D0009L)

//
// MessageId: STATUS_MONITOR_INVALID_MANUFACTURE_DATE
//
// MessageText:
//
// Monitor descriptor contains invalid manufacture date.
//
#define STATUS_MONITOR_INVALID_MANUFACTURE_DATE ((NTSTATUS)0xC01D000AL)


//
// Graphics Facility Error codes (dxg.sys, dxgkrnl.sys)
//

//
//   Common Windows Graphics Kernel Subsystem status codes {0x0000..0x00ff}
//
//
// MessageId: STATUS_GRAPHICS_NOT_EXCLUSIVE_MODE_OWNER
//
// MessageText:
//
// Exclusive mode ownership is needed to create unmanaged primary allocation.
//
#define STATUS_GRAPHICS_NOT_EXCLUSIVE_MODE_OWNER ((NTSTATUS)0xC01E0000L)

//
// MessageId: STATUS_GRAPHICS_INSUFFICIENT_DMA_BUFFER
//
// MessageText:
//
// The driver needs more DMA buffer space in order to complete the requested operation.
//
#define STATUS_GRAPHICS_INSUFFICIENT_DMA_BUFFER ((NTSTATUS)0xC01E0001L)

//
// MessageId: STATUS_GRAPHICS_INVALID_DISPLAY_ADAPTER
//
// MessageText:
//
// Specified display adapter handle is invalid.
//
#define STATUS_GRAPHICS_INVALID_DISPLAY_ADAPTER ((NTSTATUS)0xC01E0002L)

//
// MessageId: STATUS_GRAPHICS_ADAPTER_WAS_RESET
//
// MessageText:
//
// Specified display adapter and all of its state has been reset.
//
#define STATUS_GRAPHICS_ADAPTER_WAS_RESET ((NTSTATUS)0xC01E0003L)

//
// MessageId: STATUS_GRAPHICS_INVALID_DRIVER_MODEL
//
// MessageText:
//
// The driver stack doesn't match the expected driver model.
//
#define STATUS_GRAPHICS_INVALID_DRIVER_MODEL ((NTSTATUS)0xC01E0004L)

//
// MessageId: STATUS_GRAPHICS_PRESENT_MODE_CHANGED
//
// MessageText:
//
// Present happened but ended up into the changed desktop mode
//
#define STATUS_GRAPHICS_PRESENT_MODE_CHANGED ((NTSTATUS)0xC01E0005L)

//
// MessageId: STATUS_GRAPHICS_PRESENT_OCCLUDED
//
// MessageText:
//
// Nothing to present due to desktop occlusion
//
#define STATUS_GRAPHICS_PRESENT_OCCLUDED ((NTSTATUS)0xC01E0006L)

//
// MessageId: STATUS_GRAPHICS_PRESENT_DENIED
//
// MessageText:
//
// Not able to present due to denial of desktop access
//
#define STATUS_GRAPHICS_PRESENT_DENIED   ((NTSTATUS)0xC01E0007L)

//
// MessageId: STATUS_GRAPHICS_CANNOTCOLORCONVERT
//
// MessageText:
//
// Not able to present with color conversion
//
#define STATUS_GRAPHICS_CANNOTCOLORCONVERT ((NTSTATUS)0xC01E0008L)

//
// MessageId: STATUS_GRAPHICS_DRIVER_MISMATCH
//
// MessageText:
//
// The kernel driver detected a version mismatch between it and the user mode driver.
//
#define STATUS_GRAPHICS_DRIVER_MISMATCH  ((NTSTATUS)0xC01E0009L)

//
// MessageId: STATUS_GRAPHICS_PARTIAL_DATA_POPULATED
//
// MessageText:
//
// Specified buffer is not big enough to contain entire requested dataset. Partial data populated up to the size of the buffer. Caller needs to provide buffer of size as specified in the partially populated buffer's content (interface specific).
//
#define STATUS_GRAPHICS_PARTIAL_DATA_POPULATED ((NTSTATUS)0x401E000AL)

//
// MessageId: STATUS_GRAPHICS_PRESENT_REDIRECTION_DISABLED
//
// MessageText:
//
// Present redirection is disabled (desktop windowing management subsystem is off).
//
#define STATUS_GRAPHICS_PRESENT_REDIRECTION_DISABLED ((NTSTATUS)0xC01E000BL)

//
// MessageId: STATUS_GRAPHICS_PRESENT_UNOCCLUDED
//
// MessageText:
//
// Previous exclusive VidPn source owner has released its ownership
//
#define STATUS_GRAPHICS_PRESENT_UNOCCLUDED ((NTSTATUS)0xC01E000CL)

//
// MessageId: STATUS_GRAPHICS_WINDOWDC_NOT_AVAILABLE
//
// MessageText:
//
// Window DC is not available for presentation
//
#define STATUS_GRAPHICS_WINDOWDC_NOT_AVAILABLE ((NTSTATUS)0xC01E000DL)

//
// MessageId: STATUS_GRAPHICS_WINDOWLESS_PRESENT_DISABLED
//
// MessageText:
//
// Windowless present is disabled (desktop windowing management subsystem is off).
//
#define STATUS_GRAPHICS_WINDOWLESS_PRESENT_DISABLED ((NTSTATUS)0xC01E000EL)

//
// MessageId: STATUS_GRAPHICS_PRESENT_INVALID_WINDOW
//
// MessageText:
//
// Window handle is invalid
//
#define STATUS_GRAPHICS_PRESENT_INVALID_WINDOW ((NTSTATUS)0xC01E000FL)

//
// MessageId: STATUS_GRAPHICS_PRESENT_BUFFER_NOT_BOUND
//
// MessageText:
//
// No buffer is bound to composition surface
//
#define STATUS_GRAPHICS_PRESENT_BUFFER_NOT_BOUND ((NTSTATUS)0xC01E0010L)

//
// MessageId: STATUS_GRAPHICS_VAIL_STATE_CHANGED
//
// MessageText:
//
// Vail state has been changed
//
#define STATUS_GRAPHICS_VAIL_STATE_CHANGED ((NTSTATUS)0xC01E0011L)

//
// MessageId: STATUS_GRAPHICS_INDIRECT_DISPLAY_ABANDON_SWAPCHAIN
//
// MessageText:
//
// Notifying indirect display UMDF class driver to abandon current swapchain.
//
#define STATUS_GRAPHICS_INDIRECT_DISPLAY_ABANDON_SWAPCHAIN ((NTSTATUS)0xC01E0012L)

//
// MessageId: STATUS_GRAPHICS_INDIRECT_DISPLAY_DEVICE_STOPPED
//
// MessageText:
//
// Notifying indirect display UMDF class driver that indirect display device has been stopped.
//
#define STATUS_GRAPHICS_INDIRECT_DISPLAY_DEVICE_STOPPED ((NTSTATUS)0xC01E0013L)

//
//   Video Memory Manager (VidMM) specific status codes {0x0100..0x01ff}
//
//
// MessageId: STATUS_GRAPHICS_NO_VIDEO_MEMORY
//
// MessageText:
//
// Not enough video memory available to complete the operation.
//
#define STATUS_GRAPHICS_NO_VIDEO_MEMORY  ((NTSTATUS)0xC01E0100L)

//
// MessageId: STATUS_GRAPHICS_CANT_LOCK_MEMORY
//
// MessageText:
//
// Couldn't probe and lock the underlying memory of an allocation.
//
#define STATUS_GRAPHICS_CANT_LOCK_MEMORY ((NTSTATUS)0xC01E0101L)

//
// MessageId: STATUS_GRAPHICS_ALLOCATION_BUSY
//
// MessageText:
//
// The allocation is currently busy.
//
#define STATUS_GRAPHICS_ALLOCATION_BUSY  ((NTSTATUS)0xC01E0102L)

//
// MessageId: STATUS_GRAPHICS_TOO_MANY_REFERENCES
//
// MessageText:
//
// An object being referenced has already reached the maximum reference count and can't be referenced any further.
//
#define STATUS_GRAPHICS_TOO_MANY_REFERENCES ((NTSTATUS)0xC01E0103L)

//
// MessageId: STATUS_GRAPHICS_TRY_AGAIN_LATER
//
// MessageText:
//
// A problem couldn't be solved due to some currently existing condition. The problem should be tried again later.
//
#define STATUS_GRAPHICS_TRY_AGAIN_LATER  ((NTSTATUS)0xC01E0104L)

//
// MessageId: STATUS_GRAPHICS_TRY_AGAIN_NOW
//
// MessageText:
//
// A problem couldn't be solved due to some currently existing condition. The problem should be tried again immediately.
//
#define STATUS_GRAPHICS_TRY_AGAIN_NOW    ((NTSTATUS)0xC01E0105L)

//
// MessageId: STATUS_GRAPHICS_ALLOCATION_INVALID
//
// MessageText:
//
// The allocation is invalid.
//
#define STATUS_GRAPHICS_ALLOCATION_INVALID ((NTSTATUS)0xC01E0106L)

//
// MessageId: STATUS_GRAPHICS_UNSWIZZLING_APERTURE_UNAVAILABLE
//
// MessageText:
//
// No more unswizzling aperture are currently available.
//
#define STATUS_GRAPHICS_UNSWIZZLING_APERTURE_UNAVAILABLE ((NTSTATUS)0xC01E0107L)

//
// MessageId: STATUS_GRAPHICS_UNSWIZZLING_APERTURE_UNSUPPORTED
//
// MessageText:
//
// The current allocation can't be unswizzled by an aperture.
//
#define STATUS_GRAPHICS_UNSWIZZLING_APERTURE_UNSUPPORTED ((NTSTATUS)0xC01E0108L)

//
// MessageId: STATUS_GRAPHICS_CANT_EVICT_PINNED_ALLOCATION
//
// MessageText:
//
// The request failed because a pinned allocation can't be evicted.
//
#define STATUS_GRAPHICS_CANT_EVICT_PINNED_ALLOCATION ((NTSTATUS)0xC01E0109L)

//
// MessageId: STATUS_GRAPHICS_INVALID_ALLOCATION_USAGE
//
// MessageText:
//
// The allocation can't be used from its current segment location for the specified operation.
//
#define STATUS_GRAPHICS_INVALID_ALLOCATION_USAGE ((NTSTATUS)0xC01E0110L)

//
// MessageId: STATUS_GRAPHICS_CANT_RENDER_LOCKED_ALLOCATION
//
// MessageText:
//
// A locked allocation can't be used in the current command buffer.
//
#define STATUS_GRAPHICS_CANT_RENDER_LOCKED_ALLOCATION ((NTSTATUS)0xC01E0111L)

//
// MessageId: STATUS_GRAPHICS_ALLOCATION_CLOSED
//
// MessageText:
//
// The allocation being referenced has been closed permanently.
//
#define STATUS_GRAPHICS_ALLOCATION_CLOSED ((NTSTATUS)0xC01E0112L)

//
// MessageId: STATUS_GRAPHICS_INVALID_ALLOCATION_INSTANCE
//
// MessageText:
//
// An invalid allocation instance is being referenced.
//
#define STATUS_GRAPHICS_INVALID_ALLOCATION_INSTANCE ((NTSTATUS)0xC01E0113L)

//
// MessageId: STATUS_GRAPHICS_INVALID_ALLOCATION_HANDLE
//
// MessageText:
//
// An invalid allocation handle is being referenced.
//
#define STATUS_GRAPHICS_INVALID_ALLOCATION_HANDLE ((NTSTATUS)0xC01E0114L)

//
// MessageId: STATUS_GRAPHICS_WRONG_ALLOCATION_DEVICE
//
// MessageText:
//
// The allocation being referenced doesn't belong to the current device.
//
#define STATUS_GRAPHICS_WRONG_ALLOCATION_DEVICE ((NTSTATUS)0xC01E0115L)

//
// MessageId: STATUS_GRAPHICS_ALLOCATION_CONTENT_LOST
//
// MessageText:
//
// The specified allocation lost its content.
//
#define STATUS_GRAPHICS_ALLOCATION_CONTENT_LOST ((NTSTATUS)0xC01E0116L)

//
//   Video GPU Scheduler (VidSch) specific status codes {0x0200..0x02ff}
//
//
// MessageId: STATUS_GRAPHICS_GPU_EXCEPTION_ON_DEVICE
//
// MessageText:
//
// GPU exception is detected on the given device. The device is not able to be scheduled.
//
#define STATUS_GRAPHICS_GPU_EXCEPTION_ON_DEVICE ((NTSTATUS)0xC01E0200L)

//
// MessageId: STATUS_GRAPHICS_SKIP_ALLOCATION_PREPARATION
//
// MessageText:
//
// Skip preparation of allocations referenced by the DMA buffer.
//
#define STATUS_GRAPHICS_SKIP_ALLOCATION_PREPARATION ((NTSTATUS)0x401E0201L)

//
//   Video Present Network Management (VidPNMgr) specific status codes {0x0300..0x03ff}
//
//
// MessageId: STATUS_GRAPHICS_INVALID_VIDPN_TOPOLOGY
//
// MessageText:
//
// Specified VidPN topology is invalid.
//
#define STATUS_GRAPHICS_INVALID_VIDPN_TOPOLOGY ((NTSTATUS)0xC01E0300L)

//
// MessageId: STATUS_GRAPHICS_VIDPN_TOPOLOGY_NOT_SUPPORTED
//
// MessageText:
//
// Specified VidPN topology is valid but is not supported by this model of the display adapter.
//
#define STATUS_GRAPHICS_VIDPN_TOPOLOGY_NOT_SUPPORTED ((NTSTATUS)0xC01E0301L)

//
// MessageId: STATUS_GRAPHICS_VIDPN_TOPOLOGY_CURRENTLY_NOT_SUPPORTED
//
// MessageText:
//
// Specified VidPN topology is valid but is not supported by the display adapter at this time, due to current allocation of its resources.
//
#define STATUS_GRAPHICS_VIDPN_TOPOLOGY_CURRENTLY_NOT_SUPPORTED ((NTSTATUS)0xC01E0302L)

//
// MessageId: STATUS_GRAPHICS_INVALID_VIDPN
//
// MessageText:
//
// Specified VidPN handle is invalid.
//
#define STATUS_GRAPHICS_INVALID_VIDPN    ((NTSTATUS)0xC01E0303L)

//
// MessageId: STATUS_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE
//
// MessageText:
//
// Specified video present source is invalid.
//
#define STATUS_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE ((NTSTATUS)0xC01E0304L)

//
// MessageId: STATUS_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET
//
// MessageText:
//
// Specified video present target is invalid.
//
#define STATUS_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET ((NTSTATUS)0xC01E0305L)

//
// MessageId: STATUS_GRAPHICS_VIDPN_MODALITY_NOT_SUPPORTED
//
// MessageText:
//
// Specified VidPN modality is not supported (e.g. at least two of the pinned modes are not cofunctional).
//
#define STATUS_GRAPHICS_VIDPN_MODALITY_NOT_SUPPORTED ((NTSTATUS)0xC01E0306L)

//
// MessageId: STATUS_GRAPHICS_MODE_NOT_PINNED
//
// MessageText:
//
// No mode is pinned on the specified VidPN source/target.
//
#define STATUS_GRAPHICS_MODE_NOT_PINNED  ((NTSTATUS)0x401E0307L)

//
// MessageId: STATUS_GRAPHICS_INVALID_VIDPN_SOURCEMODESET
//
// MessageText:
//
// Specified VidPN source mode set is invalid.
//
#define STATUS_GRAPHICS_INVALID_VIDPN_SOURCEMODESET ((NTSTATUS)0xC01E0308L)

//
// MessageId: STATUS_GRAPHICS_INVALID_VIDPN_TARGETMODESET
//
// MessageText:
//
// Specified VidPN target mode set is invalid.
//
#define STATUS_GRAPHICS_INVALID_VIDPN_TARGETMODESET ((NTSTATUS)0xC01E0309L)

//
// MessageId: STATUS_GRAPHICS_INVALID_FREQUENCY
//
// MessageText:
//
// Specified video signal frequency is invalid.
//
#define STATUS_GRAPHICS_INVALID_FREQUENCY ((NTSTATUS)0xC01E030AL)

//
// MessageId: STATUS_GRAPHICS_INVALID_ACTIVE_REGION
//
// MessageText:
//
// Specified video signal active region is invalid.
//
#define STATUS_GRAPHICS_INVALID_ACTIVE_REGION ((NTSTATUS)0xC01E030BL)

//
// MessageId: STATUS_GRAPHICS_INVALID_TOTAL_REGION
//
// MessageText:
//
// Specified video signal total region is invalid.
//
#define STATUS_GRAPHICS_INVALID_TOTAL_REGION ((NTSTATUS)0xC01E030CL)

//
// MessageId: STATUS_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE_MODE
//
// MessageText:
//
// Specified video present source mode is invalid.
//
#define STATUS_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE_MODE ((NTSTATUS)0xC01E0310L)

//
// MessageId: STATUS_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET_MODE
//
// MessageText:
//
// Specified video present target mode is invalid.
//
#define STATUS_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET_MODE ((NTSTATUS)0xC01E0311L)

//
// MessageId: STATUS_GRAPHICS_PINNED_MODE_MUST_REMAIN_IN_SET
//
// MessageText:
//
// Pinned mode must remain in the set on VidPN's cofunctional modality enumeration.
//
#define STATUS_GRAPHICS_PINNED_MODE_MUST_REMAIN_IN_SET ((NTSTATUS)0xC01E0312L)

//
// MessageId: STATUS_GRAPHICS_PATH_ALREADY_IN_TOPOLOGY
//
// MessageText:
//
// Specified video present path is already in VidPN's topology.
//
#define STATUS_GRAPHICS_PATH_ALREADY_IN_TOPOLOGY ((NTSTATUS)0xC01E0313L)

//
// MessageId: STATUS_GRAPHICS_MODE_ALREADY_IN_MODESET
//
// MessageText:
//
// Specified mode is already in the mode set.
//
#define STATUS_GRAPHICS_MODE_ALREADY_IN_MODESET ((NTSTATUS)0xC01E0314L)

//
// MessageId: STATUS_GRAPHICS_INVALID_VIDEOPRESENTSOURCESET
//
// MessageText:
//
// Specified video present source set is invalid.
//
#define STATUS_GRAPHICS_INVALID_VIDEOPRESENTSOURCESET ((NTSTATUS)0xC01E0315L)

//
// MessageId: STATUS_GRAPHICS_INVALID_VIDEOPRESENTTARGETSET
//
// MessageText:
//
// Specified video present target set is invalid.
//
#define STATUS_GRAPHICS_INVALID_VIDEOPRESENTTARGETSET ((NTSTATUS)0xC01E0316L)

//
// MessageId: STATUS_GRAPHICS_SOURCE_ALREADY_IN_SET
//
// MessageText:
//
// Specified video present source is already in the video present source set.
//
#define STATUS_GRAPHICS_SOURCE_ALREADY_IN_SET ((NTSTATUS)0xC01E0317L)

//
// MessageId: STATUS_GRAPHICS_TARGET_ALREADY_IN_SET
//
// MessageText:
//
// Specified video present target is already in the video present target set.
//
#define STATUS_GRAPHICS_TARGET_ALREADY_IN_SET ((NTSTATUS)0xC01E0318L)

//
// MessageId: STATUS_GRAPHICS_INVALID_VIDPN_PRESENT_PATH
//
// MessageText:
//
// Specified VidPN present path is invalid.
//
#define STATUS_GRAPHICS_INVALID_VIDPN_PRESENT_PATH ((NTSTATUS)0xC01E0319L)

//
// MessageId: STATUS_GRAPHICS_NO_RECOMMENDED_VIDPN_TOPOLOGY
//
// MessageText:
//
// Miniport has no recommendation for augmentation of the specified VidPN's topology.
//
#define STATUS_GRAPHICS_NO_RECOMMENDED_VIDPN_TOPOLOGY ((NTSTATUS)0xC01E031AL)

//
// MessageId: STATUS_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGESET
//
// MessageText:
//
// Specified monitor frequency range set is invalid.
//
#define STATUS_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGESET ((NTSTATUS)0xC01E031BL)

//
// MessageId: STATUS_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGE
//
// MessageText:
//
// Specified monitor frequency range is invalid.
//
#define STATUS_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGE ((NTSTATUS)0xC01E031CL)

//
// MessageId: STATUS_GRAPHICS_FREQUENCYRANGE_NOT_IN_SET
//
// MessageText:
//
// Specified frequency range is not in the specified monitor frequency range set.
//
#define STATUS_GRAPHICS_FREQUENCYRANGE_NOT_IN_SET ((NTSTATUS)0xC01E031DL)

//
// MessageId: STATUS_GRAPHICS_NO_PREFERRED_MODE
//
// MessageText:
//
// Specified mode set does not specify preference for one of its modes.
//
#define STATUS_GRAPHICS_NO_PREFERRED_MODE ((NTSTATUS)0x401E031EL)

//
// MessageId: STATUS_GRAPHICS_FREQUENCYRANGE_ALREADY_IN_SET
//
// MessageText:
//
// Specified frequency range is already in the specified monitor frequency range set.
//
#define STATUS_GRAPHICS_FREQUENCYRANGE_ALREADY_IN_SET ((NTSTATUS)0xC01E031FL)

//
// MessageId: STATUS_GRAPHICS_STALE_MODESET
//
// MessageText:
//
// Specified mode set is stale. Please reacquire the new mode set.
//
#define STATUS_GRAPHICS_STALE_MODESET    ((NTSTATUS)0xC01E0320L)

//
// MessageId: STATUS_GRAPHICS_INVALID_MONITOR_SOURCEMODESET
//
// MessageText:
//
// Specified monitor source mode set is invalid.
//
#define STATUS_GRAPHICS_INVALID_MONITOR_SOURCEMODESET ((NTSTATUS)0xC01E0321L)

//
// MessageId: STATUS_GRAPHICS_INVALID_MONITOR_SOURCE_MODE
//
// MessageText:
//
// Specified monitor source mode is invalid.
//
#define STATUS_GRAPHICS_INVALID_MONITOR_SOURCE_MODE ((NTSTATUS)0xC01E0322L)

//
// MessageId: STATUS_GRAPHICS_NO_RECOMMENDED_FUNCTIONAL_VIDPN
//
// MessageText:
//
// Miniport does not have any recommendation regarding the request to provide a functional VidPN given the current display adapter configuration.
//
#define STATUS_GRAPHICS_NO_RECOMMENDED_FUNCTIONAL_VIDPN ((NTSTATUS)0xC01E0323L)

//
// MessageId: STATUS_GRAPHICS_MODE_ID_MUST_BE_UNIQUE
//
// MessageText:
//
// ID of the specified mode is already used by another mode in the set.
//
#define STATUS_GRAPHICS_MODE_ID_MUST_BE_UNIQUE ((NTSTATUS)0xC01E0324L)

//
// MessageId: STATUS_GRAPHICS_EMPTY_ADAPTER_MONITOR_MODE_SUPPORT_INTERSECTION
//
// MessageText:
//
// System failed to determine a mode that is supported by both the display adapter and the monitor connected to it.
//
#define STATUS_GRAPHICS_EMPTY_ADAPTER_MONITOR_MODE_SUPPORT_INTERSECTION ((NTSTATUS)0xC01E0325L)

//
// MessageId: STATUS_GRAPHICS_VIDEO_PRESENT_TARGETS_LESS_THAN_SOURCES
//
// MessageText:
//
// Number of video present targets must be greater than or equal to the number of video present sources.
//
#define STATUS_GRAPHICS_VIDEO_PRESENT_TARGETS_LESS_THAN_SOURCES ((NTSTATUS)0xC01E0326L)

//
// MessageId: STATUS_GRAPHICS_PATH_NOT_IN_TOPOLOGY
//
// MessageText:
//
// Specified present path is not in VidPN's topology.
//
#define STATUS_GRAPHICS_PATH_NOT_IN_TOPOLOGY ((NTSTATUS)0xC01E0327L)

//
// MessageId: STATUS_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_SOURCE
//
// MessageText:
//
// Display adapter must have at least one video present source.
//
#define STATUS_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_SOURCE ((NTSTATUS)0xC01E0328L)

//
// MessageId: STATUS_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_TARGET
//
// MessageText:
//
// Display adapter must have at least one video present target.
//
#define STATUS_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_TARGET ((NTSTATUS)0xC01E0329L)

//
// MessageId: STATUS_GRAPHICS_INVALID_MONITORDESCRIPTORSET
//
// MessageText:
//
// Specified monitor descriptor set is invalid.
//
#define STATUS_GRAPHICS_INVALID_MONITORDESCRIPTORSET ((NTSTATUS)0xC01E032AL)

//
// MessageId: STATUS_GRAPHICS_INVALID_MONITORDESCRIPTOR
//
// MessageText:
//
// Specified monitor descriptor is invalid.
//
#define STATUS_GRAPHICS_INVALID_MONITORDESCRIPTOR ((NTSTATUS)0xC01E032BL)

//
// MessageId: STATUS_GRAPHICS_MONITORDESCRIPTOR_NOT_IN_SET
//
// MessageText:
//
// Specified descriptor is not in the specified monitor descriptor set.
//
#define STATUS_GRAPHICS_MONITORDESCRIPTOR_NOT_IN_SET ((NTSTATUS)0xC01E032CL)

//
// MessageId: STATUS_GRAPHICS_MONITORDESCRIPTOR_ALREADY_IN_SET
//
// MessageText:
//
// Specified descriptor is already in the specified monitor descriptor set.
//
#define STATUS_GRAPHICS_MONITORDESCRIPTOR_ALREADY_IN_SET ((NTSTATUS)0xC01E032DL)

//
// MessageId: STATUS_GRAPHICS_MONITORDESCRIPTOR_ID_MUST_BE_UNIQUE
//
// MessageText:
//
// ID of the specified monitor descriptor is already used by another descriptor in the set.
//
#define STATUS_GRAPHICS_MONITORDESCRIPTOR_ID_MUST_BE_UNIQUE ((NTSTATUS)0xC01E032EL)

//
// MessageId: STATUS_GRAPHICS_INVALID_VIDPN_TARGET_SUBSET_TYPE
//
// MessageText:
//
// Specified video present target subset type is invalid.
//
#define STATUS_GRAPHICS_INVALID_VIDPN_TARGET_SUBSET_TYPE ((NTSTATUS)0xC01E032FL)

//
// MessageId: STATUS_GRAPHICS_RESOURCES_NOT_RELATED
//
// MessageText:
//
// Two or more of the specified resources are not related to each other, as defined by the interface semantics.
//
#define STATUS_GRAPHICS_RESOURCES_NOT_RELATED ((NTSTATUS)0xC01E0330L)

//
// MessageId: STATUS_GRAPHICS_SOURCE_ID_MUST_BE_UNIQUE
//
// MessageText:
//
// ID of the specified video present source is already used by another source in the set.
//
#define STATUS_GRAPHICS_SOURCE_ID_MUST_BE_UNIQUE ((NTSTATUS)0xC01E0331L)

//
// MessageId: STATUS_GRAPHICS_TARGET_ID_MUST_BE_UNIQUE
//
// MessageText:
//
// ID of the specified video present target is already used by another target in the set.
//
#define STATUS_GRAPHICS_TARGET_ID_MUST_BE_UNIQUE ((NTSTATUS)0xC01E0332L)

//
// MessageId: STATUS_GRAPHICS_NO_AVAILABLE_VIDPN_TARGET
//
// MessageText:
//
// Specified VidPN source cannot be used because there is no available VidPN target to connect it to.
//
#define STATUS_GRAPHICS_NO_AVAILABLE_VIDPN_TARGET ((NTSTATUS)0xC01E0333L)

//
// MessageId: STATUS_GRAPHICS_MONITOR_COULD_NOT_BE_ASSOCIATED_WITH_ADAPTER
//
// MessageText:
//
// Newly arrived monitor could not be associated with a display adapter.
//
#define STATUS_GRAPHICS_MONITOR_COULD_NOT_BE_ASSOCIATED_WITH_ADAPTER ((NTSTATUS)0xC01E0334L)

//
// MessageId: STATUS_GRAPHICS_NO_VIDPNMGR
//
// MessageText:
//
// Display adapter in question does not have an associated VidPN manager.
//
#define STATUS_GRAPHICS_NO_VIDPNMGR      ((NTSTATUS)0xC01E0335L)

//
// MessageId: STATUS_GRAPHICS_NO_ACTIVE_VIDPN
//
// MessageText:
//
// VidPN manager of the display adapter in question does not have an active VidPN.
//
#define STATUS_GRAPHICS_NO_ACTIVE_VIDPN  ((NTSTATUS)0xC01E0336L)

//
// MessageId: STATUS_GRAPHICS_STALE_VIDPN_TOPOLOGY
//
// MessageText:
//
// Specified VidPN topology is stale. Please reacquire the new topology.
//
#define STATUS_GRAPHICS_STALE_VIDPN_TOPOLOGY ((NTSTATUS)0xC01E0337L)

//
// MessageId: STATUS_GRAPHICS_MONITOR_NOT_CONNECTED
//
// MessageText:
//
// There is no monitor connected on the specified video present target.
//
#define STATUS_GRAPHICS_MONITOR_NOT_CONNECTED ((NTSTATUS)0xC01E0338L)

//
// MessageId: STATUS_GRAPHICS_SOURCE_NOT_IN_TOPOLOGY
//
// MessageText:
//
// Specified source is not part of the specified VidPN's topology.
//
#define STATUS_GRAPHICS_SOURCE_NOT_IN_TOPOLOGY ((NTSTATUS)0xC01E0339L)

//
// MessageId: STATUS_GRAPHICS_INVALID_PRIMARYSURFACE_SIZE
//
// MessageText:
//
// Specified primary surface size is invalid.
//
#define STATUS_GRAPHICS_INVALID_PRIMARYSURFACE_SIZE ((NTSTATUS)0xC01E033AL)

//
// MessageId: STATUS_GRAPHICS_INVALID_VISIBLEREGION_SIZE
//
// MessageText:
//
// Specified visible region size is invalid.
//
#define STATUS_GRAPHICS_INVALID_VISIBLEREGION_SIZE ((NTSTATUS)0xC01E033BL)

//
// MessageId: STATUS_GRAPHICS_INVALID_STRIDE
//
// MessageText:
//
// Specified stride is invalid.
//
#define STATUS_GRAPHICS_INVALID_STRIDE   ((NTSTATUS)0xC01E033CL)

//
// MessageId: STATUS_GRAPHICS_INVALID_PIXELFORMAT
//
// MessageText:
//
// Specified pixel format is invalid.
//
#define STATUS_GRAPHICS_INVALID_PIXELFORMAT ((NTSTATUS)0xC01E033DL)

//
// MessageId: STATUS_GRAPHICS_INVALID_COLORBASIS
//
// MessageText:
//
// Specified color basis is invalid.
//
#define STATUS_GRAPHICS_INVALID_COLORBASIS ((NTSTATUS)0xC01E033EL)

//
// MessageId: STATUS_GRAPHICS_INVALID_PIXELVALUEACCESSMODE
//
// MessageText:
//
// Specified pixel value access mode is invalid.
//
#define STATUS_GRAPHICS_INVALID_PIXELVALUEACCESSMODE ((NTSTATUS)0xC01E033FL)

//
// MessageId: STATUS_GRAPHICS_TARGET_NOT_IN_TOPOLOGY
//
// MessageText:
//
// Specified target is not part of the specified VidPN's topology.
//
#define STATUS_GRAPHICS_TARGET_NOT_IN_TOPOLOGY ((NTSTATUS)0xC01E0340L)

//
// MessageId: STATUS_GRAPHICS_NO_DISPLAY_MODE_MANAGEMENT_SUPPORT
//
// MessageText:
//
// Failed to acquire display mode management interface.
//
#define STATUS_GRAPHICS_NO_DISPLAY_MODE_MANAGEMENT_SUPPORT ((NTSTATUS)0xC01E0341L)

//
// MessageId: STATUS_GRAPHICS_VIDPN_SOURCE_IN_USE
//
// MessageText:
//
// Specified VidPN source is already owned by a DMM client and cannot be used until that client releases it.
//
#define STATUS_GRAPHICS_VIDPN_SOURCE_IN_USE ((NTSTATUS)0xC01E0342L)

//
// MessageId: STATUS_GRAPHICS_CANT_ACCESS_ACTIVE_VIDPN
//
// MessageText:
//
// Specified VidPN is active and cannot be accessed.
//
#define STATUS_GRAPHICS_CANT_ACCESS_ACTIVE_VIDPN ((NTSTATUS)0xC01E0343L)

//
// MessageId: STATUS_GRAPHICS_INVALID_PATH_IMPORTANCE_ORDINAL
//
// MessageText:
//
// Specified VidPN present path importance ordinal is invalid.
//
#define STATUS_GRAPHICS_INVALID_PATH_IMPORTANCE_ORDINAL ((NTSTATUS)0xC01E0344L)

//
// MessageId: STATUS_GRAPHICS_INVALID_PATH_CONTENT_GEOMETRY_TRANSFORMATION
//
// MessageText:
//
// Specified VidPN present path content geometry transformation is invalid.
//
#define STATUS_GRAPHICS_INVALID_PATH_CONTENT_GEOMETRY_TRANSFORMATION ((NTSTATUS)0xC01E0345L)

//
// MessageId: STATUS_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_SUPPORTED
//
// MessageText:
//
// Specified content geometry transformation is not supported on the respective VidPN present path.
//
#define STATUS_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_SUPPORTED ((NTSTATUS)0xC01E0346L)

//
// MessageId: STATUS_GRAPHICS_INVALID_GAMMA_RAMP
//
// MessageText:
//
// Specified gamma ramp is invalid.
//
#define STATUS_GRAPHICS_INVALID_GAMMA_RAMP ((NTSTATUS)0xC01E0347L)

//
// MessageId: STATUS_GRAPHICS_GAMMA_RAMP_NOT_SUPPORTED
//
// MessageText:
//
// Specified gamma ramp is not supported on the respective VidPN present path.
//
#define STATUS_GRAPHICS_GAMMA_RAMP_NOT_SUPPORTED ((NTSTATUS)0xC01E0348L)

//
// MessageId: STATUS_GRAPHICS_MULTISAMPLING_NOT_SUPPORTED
//
// MessageText:
//
// Multi-sampling is not supported on the respective VidPN present path.
//
#define STATUS_GRAPHICS_MULTISAMPLING_NOT_SUPPORTED ((NTSTATUS)0xC01E0349L)

//
// MessageId: STATUS_GRAPHICS_MODE_NOT_IN_MODESET
//
// MessageText:
//
// Specified mode is not in the specified mode set.
//
#define STATUS_GRAPHICS_MODE_NOT_IN_MODESET ((NTSTATUS)0xC01E034AL)

//
// MessageId: STATUS_GRAPHICS_DATASET_IS_EMPTY
//
// MessageText:
//
// Specified data set (e.g. mode set, frequency range set, descriptor set, topology, etc.) is empty.
//
#define STATUS_GRAPHICS_DATASET_IS_EMPTY ((NTSTATUS)0x401E034BL)

//
// MessageId: STATUS_GRAPHICS_NO_MORE_ELEMENTS_IN_DATASET
//
// MessageText:
//
// Specified data set (e.g. mode set, frequency range set, descriptor set, topology, etc.) does not contain any more elements.
//
#define STATUS_GRAPHICS_NO_MORE_ELEMENTS_IN_DATASET ((NTSTATUS)0x401E034CL)

//
// MessageId: STATUS_GRAPHICS_INVALID_VIDPN_TOPOLOGY_RECOMMENDATION_REASON
//
// MessageText:
//
// Specified VidPN topology recommendation reason is invalid.
//
#define STATUS_GRAPHICS_INVALID_VIDPN_TOPOLOGY_RECOMMENDATION_REASON ((NTSTATUS)0xC01E034DL)

//
// MessageId: STATUS_GRAPHICS_INVALID_PATH_CONTENT_TYPE
//
// MessageText:
//
// Specified VidPN present path content type is invalid.
//
#define STATUS_GRAPHICS_INVALID_PATH_CONTENT_TYPE ((NTSTATUS)0xC01E034EL)

//
// MessageId: STATUS_GRAPHICS_INVALID_COPYPROTECTION_TYPE
//
// MessageText:
//
// Specified VidPN present path copy protection type is invalid.
//
#define STATUS_GRAPHICS_INVALID_COPYPROTECTION_TYPE ((NTSTATUS)0xC01E034FL)

//
// MessageId: STATUS_GRAPHICS_UNASSIGNED_MODESET_ALREADY_EXISTS
//
// MessageText:
//
// No more than one unassigned mode set can exist at any given time for a given VidPN source/target.
//
#define STATUS_GRAPHICS_UNASSIGNED_MODESET_ALREADY_EXISTS ((NTSTATUS)0xC01E0350L)

//
// MessageId: STATUS_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_PINNED
//
// MessageText:
//
// Specified content transformation is not pinned on the specified VidPN present path.
//
#define STATUS_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_PINNED ((NTSTATUS)0x401E0351L)

//
// MessageId: STATUS_GRAPHICS_INVALID_SCANLINE_ORDERING
//
// MessageText:
//
// Specified scanline ordering type is invalid.
//
#define STATUS_GRAPHICS_INVALID_SCANLINE_ORDERING ((NTSTATUS)0xC01E0352L)

//
// MessageId: STATUS_GRAPHICS_TOPOLOGY_CHANGES_NOT_ALLOWED
//
// MessageText:
//
// Topology changes are not allowed for the specified VidPN.
//
#define STATUS_GRAPHICS_TOPOLOGY_CHANGES_NOT_ALLOWED ((NTSTATUS)0xC01E0353L)

//
// MessageId: STATUS_GRAPHICS_NO_AVAILABLE_IMPORTANCE_ORDINALS
//
// MessageText:
//
// All available importance ordinals are already used in specified topology.
//
#define STATUS_GRAPHICS_NO_AVAILABLE_IMPORTANCE_ORDINALS ((NTSTATUS)0xC01E0354L)

//
// MessageId: STATUS_GRAPHICS_INCOMPATIBLE_PRIVATE_FORMAT
//
// MessageText:
//
// Specified primary surface has a different private format attribute than the current primary surface
//
#define STATUS_GRAPHICS_INCOMPATIBLE_PRIVATE_FORMAT ((NTSTATUS)0xC01E0355L)

//
// MessageId: STATUS_GRAPHICS_INVALID_MODE_PRUNING_ALGORITHM
//
// MessageText:
//
// Specified mode pruning algorithm is invalid
//
#define STATUS_GRAPHICS_INVALID_MODE_PRUNING_ALGORITHM ((NTSTATUS)0xC01E0356L)

//
// MessageId: STATUS_GRAPHICS_INVALID_MONITOR_CAPABILITY_ORIGIN
//
// MessageText:
//
// Specified monitor capability origin is invalid.
//
#define STATUS_GRAPHICS_INVALID_MONITOR_CAPABILITY_ORIGIN ((NTSTATUS)0xC01E0357L)

//
// MessageId: STATUS_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGE_CONSTRAINT
//
// MessageText:
//
// Specified monitor frequency range constraint is invalid.
//
#define STATUS_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGE_CONSTRAINT ((NTSTATUS)0xC01E0358L)

//
// MessageId: STATUS_GRAPHICS_MAX_NUM_PATHS_REACHED
//
// MessageText:
//
// Maximum supported number of present paths has been reached.
//
#define STATUS_GRAPHICS_MAX_NUM_PATHS_REACHED ((NTSTATUS)0xC01E0359L)

//
// MessageId: STATUS_GRAPHICS_CANCEL_VIDPN_TOPOLOGY_AUGMENTATION
//
// MessageText:
//
// Miniport requested that augmentation be cancelled for the specified source of the specified VidPN's topology.
//
#define STATUS_GRAPHICS_CANCEL_VIDPN_TOPOLOGY_AUGMENTATION ((NTSTATUS)0xC01E035AL)

//
// MessageId: STATUS_GRAPHICS_INVALID_CLIENT_TYPE
//
// MessageText:
//
// Specified client type was not recognized.
//
#define STATUS_GRAPHICS_INVALID_CLIENT_TYPE ((NTSTATUS)0xC01E035BL)

//
// MessageId: STATUS_GRAPHICS_CLIENTVIDPN_NOT_SET
//
// MessageText:
//
// Client VidPN is not set on this adapter (e.g. no user mode initiated mode changes took place on this adapter yet).
//
#define STATUS_GRAPHICS_CLIENTVIDPN_NOT_SET ((NTSTATUS)0xC01E035CL)

//
//   Port specific status codes {0x0400..0x04ff}
//
//
// MessageId: STATUS_GRAPHICS_SPECIFIED_CHILD_ALREADY_CONNECTED
//
// MessageText:
//
// Specified display adapter child device already has an external device connected to it.
//
#define STATUS_GRAPHICS_SPECIFIED_CHILD_ALREADY_CONNECTED ((NTSTATUS)0xC01E0400L)    

//
// MessageId: STATUS_GRAPHICS_CHILD_DESCRIPTOR_NOT_SUPPORTED
//
// MessageText:
//
// Specified display adapter child device does not support descriptor exposure.
//
#define STATUS_GRAPHICS_CHILD_DESCRIPTOR_NOT_SUPPORTED ((NTSTATUS)0xC01E0401L)    

//
// MessageId: STATUS_GRAPHICS_UNKNOWN_CHILD_STATUS
//
// MessageText:
//
// Child device presence was not reliably detected.
//
#define STATUS_GRAPHICS_UNKNOWN_CHILD_STATUS ((NTSTATUS)0x401E042FL)

//
// MessageId: STATUS_GRAPHICS_NOT_A_LINKED_ADAPTER
//
// MessageText:
//
// The display adapter is not linked to any other adapters.
//
#define STATUS_GRAPHICS_NOT_A_LINKED_ADAPTER ((NTSTATUS)0xC01E0430L)

//
// MessageId: STATUS_GRAPHICS_LEADLINK_NOT_ENUMERATED
//
// MessageText:
//
// Lead adapter in a linked configuration was not enumerated yet.
//
#define STATUS_GRAPHICS_LEADLINK_NOT_ENUMERATED ((NTSTATUS)0xC01E0431L)

//
// MessageId: STATUS_GRAPHICS_CHAINLINKS_NOT_ENUMERATED
//
// MessageText:
//
// Some chain adapters in a linked configuration were not enumerated yet.
//
#define STATUS_GRAPHICS_CHAINLINKS_NOT_ENUMERATED ((NTSTATUS)0xC01E0432L)

//
// MessageId: STATUS_GRAPHICS_ADAPTER_CHAIN_NOT_READY
//
// MessageText:
//
// The chain of linked adapters is not ready to start because of an unknown failure.
//
#define STATUS_GRAPHICS_ADAPTER_CHAIN_NOT_READY ((NTSTATUS)0xC01E0433L)

//
// MessageId: STATUS_GRAPHICS_CHAINLINKS_NOT_STARTED
//
// MessageText:
//
// An attempt was made to start a lead link display adapter when the chain links were not started yet.
//
#define STATUS_GRAPHICS_CHAINLINKS_NOT_STARTED ((NTSTATUS)0xC01E0434L)

//
// MessageId: STATUS_GRAPHICS_CHAINLINKS_NOT_POWERED_ON
//
// MessageText:
//
// An attempt was made to power up a lead link display adapter when the chain links were powered down.
//
#define STATUS_GRAPHICS_CHAINLINKS_NOT_POWERED_ON ((NTSTATUS)0xC01E0435L)

//
// MessageId: STATUS_GRAPHICS_INCONSISTENT_DEVICE_LINK_STATE
//
// MessageText:
//
// The adapter link was found to be in an inconsistent state. Not all adapters are in an expected PNP/Power state.
//
#define STATUS_GRAPHICS_INCONSISTENT_DEVICE_LINK_STATE ((NTSTATUS)0xC01E0436L)

//
// MessageId: STATUS_GRAPHICS_LEADLINK_START_DEFERRED
//
// MessageText:
//
// Starting the leadlink adapter has been deferred temporarily.
//
#define STATUS_GRAPHICS_LEADLINK_START_DEFERRED ((NTSTATUS)0x401E0437L)

//
// MessageId: STATUS_GRAPHICS_NOT_POST_DEVICE_DRIVER
//
// MessageText:
//
// The driver trying to start is not the same as the driver for the POSTed display adapter.
//
#define STATUS_GRAPHICS_NOT_POST_DEVICE_DRIVER ((NTSTATUS)0xC01E0438L)

//
// MessageId: STATUS_GRAPHICS_POLLING_TOO_FREQUENTLY
//
// MessageText:
//
// The display adapter is being polled for children too frequently at the same polling level.
//
#define STATUS_GRAPHICS_POLLING_TOO_FREQUENTLY ((NTSTATUS)0x401E0439L)

//
// MessageId: STATUS_GRAPHICS_START_DEFERRED
//
// MessageText:
//
// Starting the adapter has been deferred temporarily.
//
#define STATUS_GRAPHICS_START_DEFERRED   ((NTSTATUS)0x401E043AL)

//
// MessageId: STATUS_GRAPHICS_ADAPTER_ACCESS_NOT_EXCLUDED
//
// MessageText:
//
// An operation is being attempted that requires the display adapter to be in a quiescent state.
//
#define STATUS_GRAPHICS_ADAPTER_ACCESS_NOT_EXCLUDED ((NTSTATUS)0xC01E043BL)

//
// MessageId: STATUS_GRAPHICS_DEPENDABLE_CHILD_STATUS
//
// MessageText:
//
// We can depend on the child device presence returned by the driver.
//
#define STATUS_GRAPHICS_DEPENDABLE_CHILD_STATUS ((NTSTATUS)0x401E043CL)

//
//   OPM, PVP and UAB status codes {0x0500..0x057F}
//
//
// MessageId: STATUS_GRAPHICS_OPM_NOT_SUPPORTED
//
// MessageText:
//
// The driver does not support OPM.
//
#define STATUS_GRAPHICS_OPM_NOT_SUPPORTED ((NTSTATUS)0xC01E0500L)    

//
// MessageId: STATUS_GRAPHICS_COPP_NOT_SUPPORTED
//
// MessageText:
//
// The driver does not support COPP.
//
#define STATUS_GRAPHICS_COPP_NOT_SUPPORTED ((NTSTATUS)0xC01E0501L)    

//
// MessageId: STATUS_GRAPHICS_UAB_NOT_SUPPORTED
//
// MessageText:
//
// The driver does not support UAB.
//
#define STATUS_GRAPHICS_UAB_NOT_SUPPORTED ((NTSTATUS)0xC01E0502L)    

//
// MessageId: STATUS_GRAPHICS_OPM_INVALID_ENCRYPTED_PARAMETERS
//
// MessageText:
//
// The specified encrypted parameters are invalid.
//
#define STATUS_GRAPHICS_OPM_INVALID_ENCRYPTED_PARAMETERS ((NTSTATUS)0xC01E0503L)    

//
// MessageId: STATUS_GRAPHICS_OPM_NO_PROTECTED_OUTPUTS_EXIST
//
// MessageText:
//
// The GDI display device passed to this function does not have any active protected outputs.
//
#define STATUS_GRAPHICS_OPM_NO_PROTECTED_OUTPUTS_EXIST ((NTSTATUS)0xC01E0505L)

//
// MessageId: STATUS_GRAPHICS_OPM_INTERNAL_ERROR
//
// MessageText:
//
// An internal error caused an operation to fail.
//
#define STATUS_GRAPHICS_OPM_INTERNAL_ERROR ((NTSTATUS)0xC01E050BL)

//
// MessageId: STATUS_GRAPHICS_OPM_INVALID_HANDLE
//
// MessageText:
//
// The function failed because the caller passed in an invalid OPM user mode handle.
//
#define STATUS_GRAPHICS_OPM_INVALID_HANDLE ((NTSTATUS)0xC01E050CL)

//
// MessageId: STATUS_GRAPHICS_PVP_INVALID_CERTIFICATE_LENGTH
//
// MessageText:
//
// A certificate could not be returned because the certificate buffer passed to the function was too small.
//
#define STATUS_GRAPHICS_PVP_INVALID_CERTIFICATE_LENGTH ((NTSTATUS)0xC01E050EL)

//
// MessageId: STATUS_GRAPHICS_OPM_SPANNING_MODE_ENABLED
//
// MessageText:
//
// The DxgkDdiOpmCreateProtectedOutput function could not create a protected output because the Video Present Target is in spanning mode.
//
#define STATUS_GRAPHICS_OPM_SPANNING_MODE_ENABLED ((NTSTATUS)0xC01E050FL)

//
// MessageId: STATUS_GRAPHICS_OPM_THEATER_MODE_ENABLED
//
// MessageText:
//
// The DxgkDdiOpmCreateProtectedOutput function could not create a protected output because the Video Present Target is in theater mode.
//
#define STATUS_GRAPHICS_OPM_THEATER_MODE_ENABLED ((NTSTATUS)0xC01E0510L)

//
// MessageId: STATUS_GRAPHICS_PVP_HFS_FAILED
//
// MessageText:
//
// The function failed because the display adapter's Hardware Functionality Scan failed to validate the graphics hardware.
//
#define STATUS_GRAPHICS_PVP_HFS_FAILED   ((NTSTATUS)0xC01E0511L)

//
// MessageId: STATUS_GRAPHICS_OPM_INVALID_SRM
//
// MessageText:
//
// The HDCP System Renewability Message passed to this function did not comply with section 5 of the HDCP 1.1 specification.
//
#define STATUS_GRAPHICS_OPM_INVALID_SRM  ((NTSTATUS)0xC01E0512L)

//
// MessageId: STATUS_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_HDCP
//
// MessageText:
//
// The protected output cannot enable the High-bandwidth Digital Content Protection (HDCP) System because it does not support HDCP.
//
#define STATUS_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_HDCP ((NTSTATUS)0xC01E0513L)

//
// MessageId: STATUS_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_ACP
//
// MessageText:
//
// The protected output cannot enable Analogue Copy Protection (ACP) because it does not support ACP.
//
#define STATUS_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_ACP ((NTSTATUS)0xC01E0514L)

//
// MessageId: STATUS_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_CGMSA
//
// MessageText:
//
// The protected output cannot enable the Content Generation Management System Analogue (CGMS-A) protection technology because it does not support CGMS-A.
//
#define STATUS_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_CGMSA ((NTSTATUS)0xC01E0515L)

//
// MessageId: STATUS_GRAPHICS_OPM_HDCP_SRM_NEVER_SET
//
// MessageText:
//
// The DxgkDdiOPMGetInformation function cannot return the version of the SRM being used because the application never successfully passed an SRM to the protected output.
//
#define STATUS_GRAPHICS_OPM_HDCP_SRM_NEVER_SET ((NTSTATUS)0xC01E0516L)

//
// MessageId: STATUS_GRAPHICS_OPM_RESOLUTION_TOO_HIGH
//
// MessageText:
//
// The DxgkDdiOPMConfigureProtectedOutput function cannot enable the specified output protection technology because the output's screen resolution is too high.
//
#define STATUS_GRAPHICS_OPM_RESOLUTION_TOO_HIGH ((NTSTATUS)0xC01E0517L)

//
// MessageId: STATUS_GRAPHICS_OPM_ALL_HDCP_HARDWARE_ALREADY_IN_USE
//
// MessageText:
//
// The DxgkDdiOPMConfigureProtectedOutput function cannot enable HDCP because the display adapter's HDCP hardware is already being used by other physical outputs.
//
#define STATUS_GRAPHICS_OPM_ALL_HDCP_HARDWARE_ALREADY_IN_USE ((NTSTATUS)0xC01E0518L)

//
// MessageId: STATUS_GRAPHICS_OPM_PROTECTED_OUTPUT_NO_LONGER_EXISTS
//
// MessageText:
//
// The operating system asynchronously destroyed this OPM protected output because the operating system's state changed. This error typically occurs because the monitor PDO associated with this protected output was removed, the monitor PDO associated with this protected output was stopped, or the protected output's session became a non-console session.
//
#define STATUS_GRAPHICS_OPM_PROTECTED_OUTPUT_NO_LONGER_EXISTS ((NTSTATUS)0xC01E051AL)

//
// MessageId: STATUS_GRAPHICS_OPM_PROTECTED_OUTPUT_DOES_NOT_HAVE_COPP_SEMANTICS
//
// MessageText:
//
// Either the DxgkDdiOPMGetCOPPCompatibleInformation, DxgkDdiOPMGetInformation, or DxgkDdiOPMConfigureProtectedOutput function failed. This error is returned when the caller tries to use a COPP specific command while the protected output has OPM semantics only.
//
#define STATUS_GRAPHICS_OPM_PROTECTED_OUTPUT_DOES_NOT_HAVE_COPP_SEMANTICS ((NTSTATUS)0xC01E051CL)

//
// MessageId: STATUS_GRAPHICS_OPM_INVALID_INFORMATION_REQUEST
//
// MessageText:
//
// The DxgkDdiOPMGetInformation and DxgkDdiOPMGetCOPPCompatibleInformation functions return this error code if the passed in sequence number is not the expected sequence number or the passed in OMAC value is invalid.
//
#define STATUS_GRAPHICS_OPM_INVALID_INFORMATION_REQUEST ((NTSTATUS)0xC01E051DL)

//
// MessageId: STATUS_GRAPHICS_OPM_DRIVER_INTERNAL_ERROR
//
// MessageText:
//
// The function failed because an unexpected error occurred inside of a display driver.
//
#define STATUS_GRAPHICS_OPM_DRIVER_INTERNAL_ERROR ((NTSTATUS)0xC01E051EL)

//
// MessageId: STATUS_GRAPHICS_OPM_PROTECTED_OUTPUT_DOES_NOT_HAVE_OPM_SEMANTICS
//
// MessageText:
//
// Either the DxgkDdiOPMGetCOPPCompatibleInformation, DxgkDdiOPMGetInformation, or DxgkDdiOPMConfigureProtectedOutput function failed. This error is returned when the caller tries to use an OPM specific command while the protected output has COPP semantics only.
//
#define STATUS_GRAPHICS_OPM_PROTECTED_OUTPUT_DOES_NOT_HAVE_OPM_SEMANTICS ((NTSTATUS)0xC01E051FL)

//
// MessageId: STATUS_GRAPHICS_OPM_SIGNALING_NOT_SUPPORTED
//
// MessageText:
//
// The DxgkDdiOPMGetCOPPCompatibleInformation and DxgkDdiOPMConfigureProtectedOutput functions return this error if the display driver does not support the DXGKMDT_OPM_GET_ACP_AND_CGMSA_SIGNALING and DXGKMDT_OPM_SET_ACP_AND_CGMSA_SIGNALING GUIDs.
//
#define STATUS_GRAPHICS_OPM_SIGNALING_NOT_SUPPORTED ((NTSTATUS)0xC01E0520L)

//
// MessageId: STATUS_GRAPHICS_OPM_INVALID_CONFIGURATION_REQUEST
//
// MessageText:
//
// The DxgkDdiOPMConfigureProtectedOutput function returns this error code if the passed in sequence number is not the expected sequence number or the passed in OMAC value is invalid.
//
#define STATUS_GRAPHICS_OPM_INVALID_CONFIGURATION_REQUEST ((NTSTATUS)0xC01E0521L)

//
//   Monitor Configuration API status codes {0x0580..0x05DF}
//
//
// MessageId: STATUS_GRAPHICS_I2C_NOT_SUPPORTED
//
// MessageText:
//
// The monitor connected to the specified video output does not have an I2C bus.
//
#define STATUS_GRAPHICS_I2C_NOT_SUPPORTED ((NTSTATUS)0xC01E0580L)    

//
// MessageId: STATUS_GRAPHICS_I2C_DEVICE_DOES_NOT_EXIST
//
// MessageText:
//
// No device on the I2C bus has the specified address.
//
#define STATUS_GRAPHICS_I2C_DEVICE_DOES_NOT_EXIST ((NTSTATUS)0xC01E0581L)    

//
// MessageId: STATUS_GRAPHICS_I2C_ERROR_TRANSMITTING_DATA
//
// MessageText:
//
// An error occurred while transmitting data to the device on the I2C bus.
//
#define STATUS_GRAPHICS_I2C_ERROR_TRANSMITTING_DATA ((NTSTATUS)0xC01E0582L)    

//
// MessageId: STATUS_GRAPHICS_I2C_ERROR_RECEIVING_DATA
//
// MessageText:
//
// An error occurred while receiving data from the device on the I2C bus.
//
#define STATUS_GRAPHICS_I2C_ERROR_RECEIVING_DATA ((NTSTATUS)0xC01E0583L)    

//
// MessageId: STATUS_GRAPHICS_DDCCI_VCP_NOT_SUPPORTED
//
// MessageText:
//
// The monitor does not support the specified VCP code.
//
#define STATUS_GRAPHICS_DDCCI_VCP_NOT_SUPPORTED ((NTSTATUS)0xC01E0584L)    

//
// MessageId: STATUS_GRAPHICS_DDCCI_INVALID_DATA
//
// MessageText:
//
// The data received from the monitor is invalid.
//
#define STATUS_GRAPHICS_DDCCI_INVALID_DATA ((NTSTATUS)0xC01E0585L)    

//
// MessageId: STATUS_GRAPHICS_DDCCI_MONITOR_RETURNED_INVALID_TIMING_STATUS_BYTE
//
// MessageText:
//
// The function failed because a monitor returned an invalid Timing Status byte when the operating system used the DDC/CI Get Timing Report & Timing Message command to get a timing report from a monitor.
//
#define STATUS_GRAPHICS_DDCCI_MONITOR_RETURNED_INVALID_TIMING_STATUS_BYTE ((NTSTATUS)0xC01E0586L)

//
// MessageId: STATUS_GRAPHICS_DDCCI_INVALID_CAPABILITIES_STRING
//
// MessageText:
//
// A monitor returned a DDC/CI capabilities string which did not comply with the ACCESS.bus 3.0, DDC/CI 1.1, or MCCS 2 Revision 1 specification.
//
#define STATUS_GRAPHICS_DDCCI_INVALID_CAPABILITIES_STRING ((NTSTATUS)0xC01E0587L)

//
// MessageId: STATUS_GRAPHICS_MCA_INTERNAL_ERROR
//
// MessageText:
//
// An internal error caused an operation to fail.
//
#define STATUS_GRAPHICS_MCA_INTERNAL_ERROR ((NTSTATUS)0xC01E0588L)

//
// MessageId: STATUS_GRAPHICS_DDCCI_INVALID_MESSAGE_COMMAND
//
// MessageText:
//
// An operation failed because a DDC/CI message had an invalid value in its command field.
//
#define STATUS_GRAPHICS_DDCCI_INVALID_MESSAGE_COMMAND ((NTSTATUS)0xC01E0589L)

//
// MessageId: STATUS_GRAPHICS_DDCCI_INVALID_MESSAGE_LENGTH
//
// MessageText:
//
// An error occurred because the field length of a DDC/CI message contained an invalid value.
//
#define STATUS_GRAPHICS_DDCCI_INVALID_MESSAGE_LENGTH ((NTSTATUS)0xC01E058AL)

//
// MessageId: STATUS_GRAPHICS_DDCCI_INVALID_MESSAGE_CHECKSUM
//
// MessageText:
//
// An error occurred because the checksum field in a DDC/CI message did not match the message's computed checksum value. This error implies that the data was corrupted while it was being transmitted from a monitor to a computer.
//
#define STATUS_GRAPHICS_DDCCI_INVALID_MESSAGE_CHECKSUM ((NTSTATUS)0xC01E058BL)

//
// MessageId: STATUS_GRAPHICS_INVALID_PHYSICAL_MONITOR_HANDLE
//
// MessageText:
//
// This function failed because an invalid monitor handle was passed to it.
//
#define STATUS_GRAPHICS_INVALID_PHYSICAL_MONITOR_HANDLE ((NTSTATUS)0xC01E058CL)

//
// MessageId: STATUS_GRAPHICS_MONITOR_NO_LONGER_EXISTS
//
// MessageText:
//
// The operating system asynchronously destroyed the monitor which corresponds to this handle because the operating system's state changed. This error typically occurs because the monitor PDO associated with this handle was removed, the monitor PDO associated with this handle was stopped, or a display mode change occurred. A display mode change occurs when windows sends a WM_DISPLAYCHANGE windows message to applications.
//
#define STATUS_GRAPHICS_MONITOR_NO_LONGER_EXISTS ((NTSTATUS)0xC01E058DL)

//
//   OPM, UAB, PVP and DDC/CI shared status codes {0x25E0..0x25FF}
//
//
// MessageId: STATUS_GRAPHICS_ONLY_CONSOLE_SESSION_SUPPORTED
//
// MessageText:
//
// This function can only be used if a program is running in the local console session. It cannot be used if a program is running on a remote desktop session or on a terminal server session.
//
#define STATUS_GRAPHICS_ONLY_CONSOLE_SESSION_SUPPORTED ((NTSTATUS)0xC01E05E0L)

//
// MessageId: STATUS_GRAPHICS_NO_DISPLAY_DEVICE_CORRESPONDS_TO_NAME
//
// MessageText:
//
// This function cannot find an actual GDI display device which corresponds to the specified GDI display device name.
//
#define STATUS_GRAPHICS_NO_DISPLAY_DEVICE_CORRESPONDS_TO_NAME ((NTSTATUS)0xC01E05E1L)

//
// MessageId: STATUS_GRAPHICS_DISPLAY_DEVICE_NOT_ATTACHED_TO_DESKTOP
//
// MessageText:
//
// The function failed because the specified GDI display device was not attached to the Windows desktop.
//
#define STATUS_GRAPHICS_DISPLAY_DEVICE_NOT_ATTACHED_TO_DESKTOP ((NTSTATUS)0xC01E05E2L)

//
// MessageId: STATUS_GRAPHICS_MIRRORING_DEVICES_NOT_SUPPORTED
//
// MessageText:
//
// This function does not support GDI mirroring display devices because GDI mirroring display devices do not have any physical monitors associated with them.
//
#define STATUS_GRAPHICS_MIRRORING_DEVICES_NOT_SUPPORTED ((NTSTATUS)0xC01E05E3L)

//
// MessageId: STATUS_GRAPHICS_INVALID_POINTER
//
// MessageText:
//
// The function failed because an invalid pointer parameter was passed to it. A pointer parameter is invalid if it is NULL, it points to an invalid address, it points to a kernel mode address or it is not correctly aligned.
//
#define STATUS_GRAPHICS_INVALID_POINTER  ((NTSTATUS)0xC01E05E4L)

//
// MessageId: STATUS_GRAPHICS_NO_MONITORS_CORRESPOND_TO_DISPLAY_DEVICE
//
// MessageText:
//
// This function failed because the GDI device passed to it did not have any monitors associated with it.
//
#define STATUS_GRAPHICS_NO_MONITORS_CORRESPOND_TO_DISPLAY_DEVICE ((NTSTATUS)0xC01E05E5L)

//
// MessageId: STATUS_GRAPHICS_PARAMETER_ARRAY_TOO_SMALL
//
// MessageText:
//
// An array passed to the function cannot hold all of the data that the function must copy into the array.
//
#define STATUS_GRAPHICS_PARAMETER_ARRAY_TOO_SMALL ((NTSTATUS)0xC01E05E6L)

//
// MessageId: STATUS_GRAPHICS_INTERNAL_ERROR
//
// MessageText:
//
// An internal error caused an operation to fail.
//
#define STATUS_GRAPHICS_INTERNAL_ERROR   ((NTSTATUS)0xC01E05E7L)

//
// MessageId: STATUS_GRAPHICS_SESSION_TYPE_CHANGE_IN_PROGRESS
//
// MessageText:
//
// The function failed because the current session is changing its type. This function cannot be called when the current session is changing its type. There are currently three types of sessions: console, disconnected and remote.
//
#define STATUS_GRAPHICS_SESSION_TYPE_CHANGE_IN_PROGRESS ((NTSTATUS)0xC01E05E8L)


//
// Full Volume Encryption Error codes (fvevol.sys)
//

//
// MessageId: STATUS_FVE_LOCKED_VOLUME
//
// MessageText:
//
// This volume is locked by BitLocker Drive Encryption.
//
#define STATUS_FVE_LOCKED_VOLUME         ((NTSTATUS)0xC0210000L)

//
// MessageId: STATUS_FVE_NOT_ENCRYPTED
//
// MessageText:
//
// The volume is not encrypted, no key is available.
//
#define STATUS_FVE_NOT_ENCRYPTED         ((NTSTATUS)0xC0210001L)

//
// MessageId: STATUS_FVE_BAD_INFORMATION
//
// MessageText:
//
// The control block for the encrypted volume is not valid.
//
#define STATUS_FVE_BAD_INFORMATION       ((NTSTATUS)0xC0210002L)

//
// MessageId: STATUS_FVE_TOO_SMALL
//
// MessageText:
//
// The volume cannot be encrypted because it does not have enough free space.
//
#define STATUS_FVE_TOO_SMALL             ((NTSTATUS)0xC0210003L)

//
// MessageId: STATUS_FVE_FAILED_WRONG_FS
//
// MessageText:
//
// The volume cannot be encrypted because the file system is not supported.
//
#define STATUS_FVE_FAILED_WRONG_FS       ((NTSTATUS)0xC0210004L)

//
// MessageId: STATUS_FVE_BAD_PARTITION_SIZE
//
// MessageText:
//
// The file system size is larger than the partition size in the partition table.
//
#define STATUS_FVE_BAD_PARTITION_SIZE    ((NTSTATUS)0xC0210005L)

//
// MessageId: STATUS_FVE_FS_NOT_EXTENDED
//
// MessageText:
//
// The file system does not extend to the end of the volume.
//
#define STATUS_FVE_FS_NOT_EXTENDED       ((NTSTATUS)0xC0210006L)

//
// MessageId: STATUS_FVE_FS_MOUNTED
//
// MessageText:
//
// This operation cannot be performed while a file system is mounted on the volume.
//
#define STATUS_FVE_FS_MOUNTED            ((NTSTATUS)0xC0210007L)

//
// MessageId: STATUS_FVE_NO_LICENSE
//
// MessageText:
//
// BitLocker Drive Encryption is not included with this version of Windows.
//
#define STATUS_FVE_NO_LICENSE            ((NTSTATUS)0xC0210008L)

//
// MessageId: STATUS_FVE_ACTION_NOT_ALLOWED
//
// MessageText:
//
// Requested action not allowed in the current volume state.
//
#define STATUS_FVE_ACTION_NOT_ALLOWED    ((NTSTATUS)0xC0210009L)

//
// MessageId: STATUS_FVE_BAD_DATA
//
// MessageText:
//
// Data supplied is malformed.
//
#define STATUS_FVE_BAD_DATA              ((NTSTATUS)0xC021000AL)

//
// MessageId: STATUS_FVE_VOLUME_NOT_BOUND
//
// MessageText:
//
// The volume is not bound to the system.
//
#define STATUS_FVE_VOLUME_NOT_BOUND      ((NTSTATUS)0xC021000BL)

//
// MessageId: STATUS_FVE_NOT_DATA_VOLUME
//
// MessageText:
//
// That volume is not a data volume.
//
#define STATUS_FVE_NOT_DATA_VOLUME       ((NTSTATUS)0xC021000CL)

//
// MessageId: STATUS_FVE_CONV_READ_ERROR
//
// MessageText:
//
// A read operation failed while converting the volume.
//
#define STATUS_FVE_CONV_READ_ERROR       ((NTSTATUS)0xC021000DL)

//
// MessageId: STATUS_FVE_CONV_WRITE_ERROR
//
// MessageText:
//
// A write operation failed while converting the volume.
//
#define STATUS_FVE_CONV_WRITE_ERROR      ((NTSTATUS)0xC021000EL)

//
// MessageId: STATUS_FVE_OVERLAPPED_UPDATE
//
// MessageText:
//
// The control block for the encrypted volume was updated by another thread. Try again.
//
#define STATUS_FVE_OVERLAPPED_UPDATE     ((NTSTATUS)0xC021000FL)

//
// MessageId: STATUS_FVE_FAILED_SECTOR_SIZE
//
// MessageText:
//
// The encryption algorithm does not support the sector size of that volume.
//
#define STATUS_FVE_FAILED_SECTOR_SIZE    ((NTSTATUS)0xC0210010L)

//
// MessageId: STATUS_FVE_FAILED_AUTHENTICATION
//
// MessageText:
//
// BitLocker recovery authentication failed.
//
#define STATUS_FVE_FAILED_AUTHENTICATION ((NTSTATUS)0xC0210011L)

//
// MessageId: STATUS_FVE_NOT_OS_VOLUME
//
// MessageText:
//
// That volume is not the OS volume.
//
#define STATUS_FVE_NOT_OS_VOLUME         ((NTSTATUS)0xC0210012L)

//
// MessageId: STATUS_FVE_KEYFILE_NOT_FOUND
//
// MessageText:
//
// The BitLocker startup key or recovery password could not be read from external media.
//
#define STATUS_FVE_KEYFILE_NOT_FOUND     ((NTSTATUS)0xC0210013L)

//
// MessageId: STATUS_FVE_KEYFILE_INVALID
//
// MessageText:
//
// The BitLocker startup key or recovery password file is corrupt or invalid.
//
#define STATUS_FVE_KEYFILE_INVALID       ((NTSTATUS)0xC0210014L)

//
// MessageId: STATUS_FVE_KEYFILE_NO_VMK
//
// MessageText:
//
// The BitLocker encryption key could not be obtained from the startup key or recovery password.
//
#define STATUS_FVE_KEYFILE_NO_VMK        ((NTSTATUS)0xC0210015L)

//
// MessageId: STATUS_FVE_TPM_DISABLED
//
// MessageText:
//
// The Trusted Platform Module (TPM) is disabled.
//
#define STATUS_FVE_TPM_DISABLED          ((NTSTATUS)0xC0210016L)

//
// MessageId: STATUS_FVE_TPM_SRK_AUTH_NOT_ZERO
//
// MessageText:
//
// The authorization data for the Storage Root Key (SRK) of the Trusted Platform Module (TPM) is not zero.
//
#define STATUS_FVE_TPM_SRK_AUTH_NOT_ZERO ((NTSTATUS)0xC0210017L)

//
// MessageId: STATUS_FVE_TPM_INVALID_PCR
//
// MessageText:
//
// The system boot information changed or the Trusted Platform Module (TPM) locked out access to BitLocker encryption keys until the computer is restarted.
//
#define STATUS_FVE_TPM_INVALID_PCR       ((NTSTATUS)0xC0210018L)

//
// MessageId: STATUS_FVE_TPM_NO_VMK
//
// MessageText:
//
// The BitLocker encryption key could not be obtained from the Trusted Platform Module (TPM).
//
#define STATUS_FVE_TPM_NO_VMK            ((NTSTATUS)0xC0210019L)

//
// MessageId: STATUS_FVE_PIN_INVALID
//
// MessageText:
//
// The BitLocker encryption key could not be obtained from the Trusted Platform Module (TPM) and PIN.
//
#define STATUS_FVE_PIN_INVALID           ((NTSTATUS)0xC021001AL)

//
// MessageId: STATUS_FVE_AUTH_INVALID_APPLICATION
//
// MessageText:
//
// A boot application hash does not match the hash computed when BitLocker was turned on.
//
#define STATUS_FVE_AUTH_INVALID_APPLICATION ((NTSTATUS)0xC021001BL)

//
// MessageId: STATUS_FVE_AUTH_INVALID_CONFIG
//
// MessageText:
//
// The Boot Configuration Data (BCD) settings are not supported or have changed since BitLocker was enabled.
//
#define STATUS_FVE_AUTH_INVALID_CONFIG   ((NTSTATUS)0xC021001CL)

//
// MessageId: STATUS_FVE_DEBUGGER_ENABLED
//
// MessageText:
//
// Boot debugging is enabled. Run bcdedit to turn it off.
//
#define STATUS_FVE_DEBUGGER_ENABLED      ((NTSTATUS)0xC021001DL)

//
// MessageId: STATUS_FVE_DRY_RUN_FAILED
//
// MessageText:
//
// The BitLocker encryption key could not be obtained.
//
#define STATUS_FVE_DRY_RUN_FAILED        ((NTSTATUS)0xC021001EL)

//
// MessageId: STATUS_FVE_BAD_METADATA_POINTER
//
// MessageText:
//
// The metadata disk region pointer is incorrect.
//
#define STATUS_FVE_BAD_METADATA_POINTER  ((NTSTATUS)0xC021001FL)

//
// MessageId: STATUS_FVE_OLD_METADATA_COPY
//
// MessageText:
//
// The backup copy of the metadata is out of date.
//
#define STATUS_FVE_OLD_METADATA_COPY     ((NTSTATUS)0xC0210020L)

//
// MessageId: STATUS_FVE_REBOOT_REQUIRED
//
// MessageText:
//
// No action was taken as a system reboot is required.
//
#define STATUS_FVE_REBOOT_REQUIRED       ((NTSTATUS)0xC0210021L)

//
// MessageId: STATUS_FVE_RAW_ACCESS
//
// MessageText:
//
// No action was taken as BitLocker Drive Encryption is in RAW access mode.
//
#define STATUS_FVE_RAW_ACCESS            ((NTSTATUS)0xC0210022L)

//
// MessageId: STATUS_FVE_RAW_BLOCKED
//
// MessageText:
//
// BitLocker Drive Encryption cannot enter raw access mode for this volume.
//
#define STATUS_FVE_RAW_BLOCKED           ((NTSTATUS)0xC0210023L)

//
// MessageId: STATUS_FVE_NO_AUTOUNLOCK_MASTER_KEY
//
// MessageText:
//
// The auto-unlock master key was not available from the operating system volume. Retry the operation using the BitLocker WMI interface.
//
#define STATUS_FVE_NO_AUTOUNLOCK_MASTER_KEY ((NTSTATUS)0xC0210024L)

//
// MessageId: STATUS_FVE_MOR_FAILED
//
// MessageText:
//
// The system firmware failed to enable clearing of system memory on reboot.
//
#define STATUS_FVE_MOR_FAILED            ((NTSTATUS)0xC0210025L)

//
// MessageId: STATUS_FVE_NO_FEATURE_LICENSE
//
// MessageText:
//
// This feature of BitLocker Drive Encryption is not included with this version of Windows.
//
#define STATUS_FVE_NO_FEATURE_LICENSE    ((NTSTATUS)0xC0210026L)

//
// MessageId: STATUS_FVE_POLICY_USER_DISABLE_RDV_NOT_ALLOWED
//
// MessageText:
//
// Group policy does not permit turning off BitLocker Drive Encryption on roaming data volumes.
//
#define STATUS_FVE_POLICY_USER_DISABLE_RDV_NOT_ALLOWED ((NTSTATUS)0xC0210027L)

//
// MessageId: STATUS_FVE_CONV_RECOVERY_FAILED
//
// MessageText:
//
// Bitlocker Drive Encryption failed to recover from aborted conversion. This could be due to either all conversion logs being corrupted or the media being write-protected.
//
#define STATUS_FVE_CONV_RECOVERY_FAILED  ((NTSTATUS)0xC0210028L)

//
// MessageId: STATUS_FVE_VIRTUALIZED_SPACE_TOO_BIG
//
// MessageText:
//
// The requested virtualization size is too big.
//
#define STATUS_FVE_VIRTUALIZED_SPACE_TOO_BIG ((NTSTATUS)0xC0210029L)

//
// MessageId: STATUS_FVE_INVALID_DATUM_TYPE
//
// MessageText:
//
// The management information stored on the drive contained an unknown type. If you are using an old version of Windows, try accessing the drive from the latest version.
//
#define STATUS_FVE_INVALID_DATUM_TYPE    ((NTSTATUS)0xC021002AL)

//
// MessageId: STATUS_FVE_VOLUME_TOO_SMALL
//
// MessageText:
//
// The drive is too small to be protected using BitLocker Drive Encryption.
//
#define STATUS_FVE_VOLUME_TOO_SMALL      ((NTSTATUS)0xC0210030L)

//
// MessageId: STATUS_FVE_ENH_PIN_INVALID
//
// MessageText:
//
// The BitLocker encryption key could not be obtained from the Trusted Platform Module (TPM) and enhanced PIN. Try using a PIN containing only numerals.
//
#define STATUS_FVE_ENH_PIN_INVALID       ((NTSTATUS)0xC0210031L)

//
// MessageId: STATUS_FVE_FULL_ENCRYPTION_NOT_ALLOWED_ON_TP_STORAGE
//
// MessageText:
//
// BitLocker Drive Encryption only supports Used Space Only encryption on thin provisioned storage.
//
#define STATUS_FVE_FULL_ENCRYPTION_NOT_ALLOWED_ON_TP_STORAGE ((NTSTATUS)0xC0210032L)

//
// MessageId: STATUS_FVE_WIPE_NOT_ALLOWED_ON_TP_STORAGE
//
// MessageText:
//
// BitLocker Drive Encryption does not support wiping free space on thin provisioned storage.
//
#define STATUS_FVE_WIPE_NOT_ALLOWED_ON_TP_STORAGE ((NTSTATUS)0xC0210033L)

//
// MessageId: STATUS_FVE_NOT_ALLOWED_ON_CSV_STACK
//
// MessageText:
//
// This command can only be performed from the coordinator node for the specified CSV volume.
//
#define STATUS_FVE_NOT_ALLOWED_ON_CSV_STACK ((NTSTATUS)0xC0210034L)

//
// MessageId: STATUS_FVE_NOT_ALLOWED_ON_CLUSTER
//
// MessageText:
//
// This command cannot be performed on a volume when it is part of a cluster.
//
#define STATUS_FVE_NOT_ALLOWED_ON_CLUSTER ((NTSTATUS)0xC0210035L)

//
// MessageId: STATUS_FVE_NOT_ALLOWED_TO_UPGRADE_WHILE_CONVERTING
//
// MessageText:
//
// BitLocker cannot be upgraded during disk encryption or decryption.
//
#define STATUS_FVE_NOT_ALLOWED_TO_UPGRADE_WHILE_CONVERTING ((NTSTATUS)0xC0210036L)

//
// MessageId: STATUS_FVE_WIPE_CANCEL_NOT_APPLICABLE
//
// MessageText:
//
// Wipe of free space is not currently taking place.
//
#define STATUS_FVE_WIPE_CANCEL_NOT_APPLICABLE ((NTSTATUS)0xC0210037L)

//
// MessageId: STATUS_FVE_EDRIVE_DRY_RUN_FAILED
//
// MessageText:
//
// Your computer doesn't support BitLocker hardware-based encryption. Check with your computer manufacturer for firmware updates.
//
#define STATUS_FVE_EDRIVE_DRY_RUN_FAILED ((NTSTATUS)0xC0210038L)

//
// MessageId: STATUS_FVE_SECUREBOOT_DISABLED
//
// MessageText:
//
// Secure Boot has been disabled. Either Secure Boot must be re-enabled, or BitLocker must be suspended for Windows to start normally.
//
#define STATUS_FVE_SECUREBOOT_DISABLED   ((NTSTATUS)0xC0210039L)

//
// MessageId: STATUS_FVE_SECUREBOOT_CONFIG_CHANGE
//
// MessageText:
//
// Secure Boot policy has unexpectedly changed.
//
#define STATUS_FVE_SECUREBOOT_CONFIG_CHANGE ((NTSTATUS)0xC021003AL)

//
// MessageId: STATUS_FVE_DEVICE_LOCKEDOUT
//
// MessageText:
//
// Device Lock has been triggered due to too many incorrect password attempts.
//
#define STATUS_FVE_DEVICE_LOCKEDOUT      ((NTSTATUS)0xC021003BL)

//
// MessageId: STATUS_FVE_VOLUME_EXTEND_PREVENTS_EOW_DECRYPT
//
// MessageText:
//
// Device encryption removal is blocked due to volume being extended beyond its original size.
//
#define STATUS_FVE_VOLUME_EXTEND_PREVENTS_EOW_DECRYPT ((NTSTATUS)0xC021003CL)

//
// MessageId: STATUS_FVE_NOT_DE_VOLUME
//
// MessageText:
//
// This action isn't supported because this drive isn't automatically managed with device encryption.
//
#define STATUS_FVE_NOT_DE_VOLUME         ((NTSTATUS)0xC021003DL)

//
// MessageId: STATUS_FVE_PROTECTION_DISABLED
//
// MessageText:
//
// BitLocker Drive Encryption has been suspended on this drive. All BitLocker key protectors configured for this drive are effectively disabled, and the drive will be automatically unlocked using an unencrypted (clear) key.
//
#define STATUS_FVE_PROTECTION_DISABLED   ((NTSTATUS)0xC021003EL)

//
// MessageId: STATUS_FVE_PROTECTION_CANNOT_BE_DISABLED
//
// MessageText:
//
// BitLocker can't be suspended on this drive until the next restart.
//
#define STATUS_FVE_PROTECTION_CANNOT_BE_DISABLED ((NTSTATUS)0xC021003FL)

//
// MessageId: STATUS_FVE_OSV_KSR_NOT_ALLOWED
//
// MessageText:
//
// BitLocker Drive Encryption policy does not allow KSR operation with protected OS volume.
//
#define STATUS_FVE_OSV_KSR_NOT_ALLOWED   ((NTSTATUS)0xC0210040L)

//
// MessageId: STATUS_FVE_EDRIVE_BAND_ENUMERATION_FAILED
//
// MessageText:
//
// BitLocker can't enable encryption on this hardware encrypting drive volume because the drive bands couldn't be enumerated.
//
#define STATUS_FVE_EDRIVE_BAND_ENUMERATION_FAILED ((NTSTATUS)0xC0210041L)


//
// FWP error codes (fwpkclnt.sys)
//

//
// MessageId: STATUS_FWP_CALLOUT_NOT_FOUND
//
// MessageText:
//
// The callout does not exist.
//
#define STATUS_FWP_CALLOUT_NOT_FOUND     ((NTSTATUS)0xC0220001L)

//
// MessageId: STATUS_FWP_CONDITION_NOT_FOUND
//
// MessageText:
//
// The filter condition does not exist.
//
#define STATUS_FWP_CONDITION_NOT_FOUND   ((NTSTATUS)0xC0220002L)

//
// MessageId: STATUS_FWP_FILTER_NOT_FOUND
//
// MessageText:
//
// The filter does not exist.
//
#define STATUS_FWP_FILTER_NOT_FOUND      ((NTSTATUS)0xC0220003L)

//
// MessageId: STATUS_FWP_LAYER_NOT_FOUND
//
// MessageText:
//
// The layer does not exist.
//
#define STATUS_FWP_LAYER_NOT_FOUND       ((NTSTATUS)0xC0220004L)

//
// MessageId: STATUS_FWP_PROVIDER_NOT_FOUND
//
// MessageText:
//
// The provider does not exist.
//
#define STATUS_FWP_PROVIDER_NOT_FOUND    ((NTSTATUS)0xC0220005L)

//
// MessageId: STATUS_FWP_PROVIDER_CONTEXT_NOT_FOUND
//
// MessageText:
//
// The provider context does not exist.
//
#define STATUS_FWP_PROVIDER_CONTEXT_NOT_FOUND ((NTSTATUS)0xC0220006L)

//
// MessageId: STATUS_FWP_SUBLAYER_NOT_FOUND
//
// MessageText:
//
// The sublayer does not exist.
//
#define STATUS_FWP_SUBLAYER_NOT_FOUND    ((NTSTATUS)0xC0220007L)

//
// MessageId: STATUS_FWP_NOT_FOUND
//
// MessageText:
//
// The object does not exist.
//
#define STATUS_FWP_NOT_FOUND             ((NTSTATUS)0xC0220008L)

//
// MessageId: STATUS_FWP_ALREADY_EXISTS
//
// MessageText:
//
// An object with that GUID or LUID already exists.
//
#define STATUS_FWP_ALREADY_EXISTS        ((NTSTATUS)0xC0220009L)

//
// MessageId: STATUS_FWP_IN_USE
//
// MessageText:
//
// The object is referenced by other objects so cannot be deleted.
//
#define STATUS_FWP_IN_USE                ((NTSTATUS)0xC022000AL)

//
// MessageId: STATUS_FWP_DYNAMIC_SESSION_IN_PROGRESS
//
// MessageText:
//
// The call is not allowed from within a dynamic session.
//
#define STATUS_FWP_DYNAMIC_SESSION_IN_PROGRESS ((NTSTATUS)0xC022000BL)

//
// MessageId: STATUS_FWP_WRONG_SESSION
//
// MessageText:
//
// The call was made from the wrong session so cannot be completed.
//
#define STATUS_FWP_WRONG_SESSION         ((NTSTATUS)0xC022000CL)

//
// MessageId: STATUS_FWP_NO_TXN_IN_PROGRESS
//
// MessageText:
//
// The call must be made from within an explicit transaction.
//
#define STATUS_FWP_NO_TXN_IN_PROGRESS    ((NTSTATUS)0xC022000DL)

//
// MessageId: STATUS_FWP_TXN_IN_PROGRESS
//
// MessageText:
//
// The call is not allowed from within an explicit transaction.
//
#define STATUS_FWP_TXN_IN_PROGRESS       ((NTSTATUS)0xC022000EL)

//
// MessageId: STATUS_FWP_TXN_ABORTED
//
// MessageText:
//
// The explicit transaction has been forcibly cancelled.
//
#define STATUS_FWP_TXN_ABORTED           ((NTSTATUS)0xC022000FL)

//
// MessageId: STATUS_FWP_SESSION_ABORTED
//
// MessageText:
//
// The session has been cancelled.
//
#define STATUS_FWP_SESSION_ABORTED       ((NTSTATUS)0xC0220010L)

//
// MessageId: STATUS_FWP_INCOMPATIBLE_TXN
//
// MessageText:
//
// The call is not allowed from within a read-only transaction.
//
#define STATUS_FWP_INCOMPATIBLE_TXN      ((NTSTATUS)0xC0220011L)

//
// MessageId: STATUS_FWP_TIMEOUT
//
// MessageText:
//
// The call timed out while waiting to acquire the transaction lock.
//
#define STATUS_FWP_TIMEOUT               ((NTSTATUS)0xC0220012L)

//
// MessageId: STATUS_FWP_NET_EVENTS_DISABLED
//
// MessageText:
//
// Collection of network diagnostic events is disabled.
//
#define STATUS_FWP_NET_EVENTS_DISABLED   ((NTSTATUS)0xC0220013L)

//
// MessageId: STATUS_FWP_INCOMPATIBLE_LAYER
//
// MessageText:
//
// The operation is not supported by the specified layer.
//
#define STATUS_FWP_INCOMPATIBLE_LAYER    ((NTSTATUS)0xC0220014L)

//
// MessageId: STATUS_FWP_KM_CLIENTS_ONLY
//
// MessageText:
//
// The call is allowed for kernel-mode callers only.
//
#define STATUS_FWP_KM_CLIENTS_ONLY       ((NTSTATUS)0xC0220015L)

//
// MessageId: STATUS_FWP_LIFETIME_MISMATCH
//
// MessageText:
//
// The call tried to associate two objects with incompatible lifetimes.
//
#define STATUS_FWP_LIFETIME_MISMATCH     ((NTSTATUS)0xC0220016L)

//
// MessageId: STATUS_FWP_BUILTIN_OBJECT
//
// MessageText:
//
// The object is built in so cannot be deleted.
//
#define STATUS_FWP_BUILTIN_OBJECT        ((NTSTATUS)0xC0220017L)

//
// MessageId: STATUS_FWP_TOO_MANY_CALLOUTS
//
// MessageText:
//
// The maximum number of callouts has been reached.
//
#define STATUS_FWP_TOO_MANY_CALLOUTS     ((NTSTATUS)0xC0220018L)

//
// MessageId: STATUS_FWP_NOTIFICATION_DROPPED
//
// MessageText:
//
// A notification could not be delivered because a message queue is at its maximum capacity.
//
#define STATUS_FWP_NOTIFICATION_DROPPED  ((NTSTATUS)0xC0220019L)

//
// MessageId: STATUS_FWP_TRAFFIC_MISMATCH
//
// MessageText:
//
// The traffic parameters do not match those for the security association context.
//
#define STATUS_FWP_TRAFFIC_MISMATCH      ((NTSTATUS)0xC022001AL)

//
// MessageId: STATUS_FWP_INCOMPATIBLE_SA_STATE
//
// MessageText:
//
// The call is not allowed for the current security association state.
//
#define STATUS_FWP_INCOMPATIBLE_SA_STATE ((NTSTATUS)0xC022001BL)

//
// MessageId: STATUS_FWP_NULL_POINTER
//
// MessageText:
//
// A required pointer is null.
//
#define STATUS_FWP_NULL_POINTER          ((NTSTATUS)0xC022001CL)

//
// MessageId: STATUS_FWP_INVALID_ENUMERATOR
//
// MessageText:
//
// An enumerator is not valid.
//
#define STATUS_FWP_INVALID_ENUMERATOR    ((NTSTATUS)0xC022001DL)

//
// MessageId: STATUS_FWP_INVALID_FLAGS
//
// MessageText:
//
// The flags field contains an invalid value.
//
#define STATUS_FWP_INVALID_FLAGS         ((NTSTATUS)0xC022001EL)

//
// MessageId: STATUS_FWP_INVALID_NET_MASK
//
// MessageText:
//
// A network mask is not valid.
//
#define STATUS_FWP_INVALID_NET_MASK      ((NTSTATUS)0xC022001FL)

//
// MessageId: STATUS_FWP_INVALID_RANGE
//
// MessageText:
//
// An FWP_RANGE is not valid.
//
#define STATUS_FWP_INVALID_RANGE         ((NTSTATUS)0xC0220020L)

//
// MessageId: STATUS_FWP_INVALID_INTERVAL
//
// MessageText:
//
// The time interval is not valid.
//
#define STATUS_FWP_INVALID_INTERVAL      ((NTSTATUS)0xC0220021L)

//
// MessageId: STATUS_FWP_ZERO_LENGTH_ARRAY
//
// MessageText:
//
// An array that must contain at least one element is zero length.
//
#define STATUS_FWP_ZERO_LENGTH_ARRAY     ((NTSTATUS)0xC0220022L)

//
// MessageId: STATUS_FWP_NULL_DISPLAY_NAME
//
// MessageText:
//
// The displayData.name field cannot be null.
//
#define STATUS_FWP_NULL_DISPLAY_NAME     ((NTSTATUS)0xC0220023L)

//
// MessageId: STATUS_FWP_INVALID_ACTION_TYPE
//
// MessageText:
//
// The action type is not one of the allowed action types for a filter.
//
#define STATUS_FWP_INVALID_ACTION_TYPE   ((NTSTATUS)0xC0220024L)

//
// MessageId: STATUS_FWP_INVALID_WEIGHT
//
// MessageText:
//
// The filter weight is not valid.
//
#define STATUS_FWP_INVALID_WEIGHT        ((NTSTATUS)0xC0220025L)

//
// MessageId: STATUS_FWP_MATCH_TYPE_MISMATCH
//
// MessageText:
//
// A filter condition contains a match type that is not compatible with the operands.
//
#define STATUS_FWP_MATCH_TYPE_MISMATCH   ((NTSTATUS)0xC0220026L)

//
// MessageId: STATUS_FWP_TYPE_MISMATCH
//
// MessageText:
//
// An FWP_VALUE or FWPM_CONDITION_VALUE is of the wrong type.
//
#define STATUS_FWP_TYPE_MISMATCH         ((NTSTATUS)0xC0220027L)

//
// MessageId: STATUS_FWP_OUT_OF_BOUNDS
//
// MessageText:
//
// An integer value is outside the allowed range.
//
#define STATUS_FWP_OUT_OF_BOUNDS         ((NTSTATUS)0xC0220028L)

//
// MessageId: STATUS_FWP_RESERVED
//
// MessageText:
//
// A reserved field is non-zero.
//
#define STATUS_FWP_RESERVED              ((NTSTATUS)0xC0220029L)

//
// MessageId: STATUS_FWP_DUPLICATE_CONDITION
//
// MessageText:
//
// A filter cannot contain multiple conditions operating on a single field.
//
#define STATUS_FWP_DUPLICATE_CONDITION   ((NTSTATUS)0xC022002AL)

//
// MessageId: STATUS_FWP_DUPLICATE_KEYMOD
//
// MessageText:
//
// A policy cannot contain the same keying module more than once.
//
#define STATUS_FWP_DUPLICATE_KEYMOD      ((NTSTATUS)0xC022002BL)

//
// MessageId: STATUS_FWP_ACTION_INCOMPATIBLE_WITH_LAYER
//
// MessageText:
//
// The action type is not compatible with the layer.
//
#define STATUS_FWP_ACTION_INCOMPATIBLE_WITH_LAYER ((NTSTATUS)0xC022002CL)

//
// MessageId: STATUS_FWP_ACTION_INCOMPATIBLE_WITH_SUBLAYER
//
// MessageText:
//
// The action type is not compatible with the sublayer.
//
#define STATUS_FWP_ACTION_INCOMPATIBLE_WITH_SUBLAYER ((NTSTATUS)0xC022002DL)

//
// MessageId: STATUS_FWP_CONTEXT_INCOMPATIBLE_WITH_LAYER
//
// MessageText:
//
// The raw context or the provider context is not compatible with the layer.
//
#define STATUS_FWP_CONTEXT_INCOMPATIBLE_WITH_LAYER ((NTSTATUS)0xC022002EL)

//
// MessageId: STATUS_FWP_CONTEXT_INCOMPATIBLE_WITH_CALLOUT
//
// MessageText:
//
// The raw context or the provider context is not compatible with the callout.
//
#define STATUS_FWP_CONTEXT_INCOMPATIBLE_WITH_CALLOUT ((NTSTATUS)0xC022002FL)

//
// MessageId: STATUS_FWP_INCOMPATIBLE_AUTH_METHOD
//
// MessageText:
//
// The authentication method is not compatible with the policy type.
//
#define STATUS_FWP_INCOMPATIBLE_AUTH_METHOD ((NTSTATUS)0xC0220030L)

//
// MessageId: STATUS_FWP_INCOMPATIBLE_DH_GROUP
//
// MessageText:
//
// The Diffie-Hellman group is not compatible with the policy type.
//
#define STATUS_FWP_INCOMPATIBLE_DH_GROUP ((NTSTATUS)0xC0220031L)

//
// MessageId: STATUS_FWP_EM_NOT_SUPPORTED
//
// MessageText:
//
// An IKE policy cannot contain an Extended Mode policy.
//
#define STATUS_FWP_EM_NOT_SUPPORTED      ((NTSTATUS)0xC0220032L)

//
// MessageId: STATUS_FWP_NEVER_MATCH
//
// MessageText:
//
// The enumeration template or subscription will never match any objects.
//
#define STATUS_FWP_NEVER_MATCH           ((NTSTATUS)0xC0220033L)

//
// MessageId: STATUS_FWP_PROVIDER_CONTEXT_MISMATCH
//
// MessageText:
//
// The provider context is of the wrong type.
//
#define STATUS_FWP_PROVIDER_CONTEXT_MISMATCH ((NTSTATUS)0xC0220034L)

//
// MessageId: STATUS_FWP_INVALID_PARAMETER
//
// MessageText:
//
// The parameter is incorrect.
//
#define STATUS_FWP_INVALID_PARAMETER     ((NTSTATUS)0xC0220035L)

//
// MessageId: STATUS_FWP_TOO_MANY_SUBLAYERS
//
// MessageText:
//
// The maximum number of sublayers has been reached.
//
#define STATUS_FWP_TOO_MANY_SUBLAYERS    ((NTSTATUS)0xC0220036L)

//
// MessageId: STATUS_FWP_CALLOUT_NOTIFICATION_FAILED
//
// MessageText:
//
// The notification function for a callout returned an error.
//
#define STATUS_FWP_CALLOUT_NOTIFICATION_FAILED ((NTSTATUS)0xC0220037L)

//
// MessageId: STATUS_FWP_INVALID_AUTH_TRANSFORM
//
// MessageText:
//
// The IPsec authentication transform is not valid.
//
#define STATUS_FWP_INVALID_AUTH_TRANSFORM ((NTSTATUS)0xC0220038L)

//
// MessageId: STATUS_FWP_INVALID_CIPHER_TRANSFORM
//
// MessageText:
//
// The IPsec cipher transform is not valid.
//
#define STATUS_FWP_INVALID_CIPHER_TRANSFORM ((NTSTATUS)0xC0220039L)

//
// MessageId: STATUS_FWP_INCOMPATIBLE_CIPHER_TRANSFORM
//
// MessageText:
//
// The IPsec cipher transform is not compatible with the policy.
//
#define STATUS_FWP_INCOMPATIBLE_CIPHER_TRANSFORM ((NTSTATUS)0xC022003AL)

//
// MessageId: STATUS_FWP_INVALID_TRANSFORM_COMBINATION
//
// MessageText:
//
// The combination of IPsec transform types is not valid.
//
#define STATUS_FWP_INVALID_TRANSFORM_COMBINATION ((NTSTATUS)0xC022003BL)

//
// MessageId: STATUS_FWP_DUPLICATE_AUTH_METHOD
//
// MessageText:
//
// A policy cannot contain the same auth method more than once.
//
#define STATUS_FWP_DUPLICATE_AUTH_METHOD ((NTSTATUS)0xC022003CL)

//
// MessageId: STATUS_FWP_INVALID_TUNNEL_ENDPOINT
//
// MessageText:
//
// A tunnel endpoint configuration is invalid.
//
#define STATUS_FWP_INVALID_TUNNEL_ENDPOINT ((NTSTATUS)0xC022003DL)

//
// MessageId: STATUS_FWP_L2_DRIVER_NOT_READY
//
// MessageText:
//
// The WFP MAC Layers are not ready.
//
#define STATUS_FWP_L2_DRIVER_NOT_READY   ((NTSTATUS)0xC022003EL)

//
// MessageId: STATUS_FWP_KEY_DICTATOR_ALREADY_REGISTERED
//
// MessageText:
//
// A key manager capable of key dictation is already registered
//
#define STATUS_FWP_KEY_DICTATOR_ALREADY_REGISTERED ((NTSTATUS)0xC022003FL)

//
// MessageId: STATUS_FWP_KEY_DICTATION_INVALID_KEYING_MATERIAL
//
// MessageText:
//
// A key manager dictated invalid keys
//
#define STATUS_FWP_KEY_DICTATION_INVALID_KEYING_MATERIAL ((NTSTATUS)0xC0220040L)

//
// MessageId: STATUS_FWP_CONNECTIONS_DISABLED
//
// MessageText:
//
// The BFE IPsec Connection Tracking is disabled.
//
#define STATUS_FWP_CONNECTIONS_DISABLED  ((NTSTATUS)0xC0220041L)

//
// MessageId: STATUS_FWP_INVALID_DNS_NAME
//
// MessageText:
//
// The DNS name is invalid.
//
#define STATUS_FWP_INVALID_DNS_NAME      ((NTSTATUS)0xC0220042L)

//
// MessageId: STATUS_FWP_STILL_ON
//
// MessageText:
//
// The engine option is still enabled due to other configuration settings.
//
#define STATUS_FWP_STILL_ON              ((NTSTATUS)0xC0220043L)

//
// MessageId: STATUS_FWP_IKEEXT_NOT_RUNNING
//
// MessageText:
//
// The IKEEXT service is not running.  This service only runs when there is IPsec policy applied to the machine.
//
#define STATUS_FWP_IKEEXT_NOT_RUNNING    ((NTSTATUS)0xC0220044L)

//
// MessageId: STATUS_FWP_TCPIP_NOT_READY
//
// MessageText:
//
// The TCP/IP stack is not ready.
//
#define STATUS_FWP_TCPIP_NOT_READY       ((NTSTATUS)0xC0220100L)

//
// MessageId: STATUS_FWP_INJECT_HANDLE_CLOSING
//
// MessageText:
//
// The injection handle is being closed by another thread.
//
#define STATUS_FWP_INJECT_HANDLE_CLOSING ((NTSTATUS)0xC0220101L)

//
// MessageId: STATUS_FWP_INJECT_HANDLE_STALE
//
// MessageText:
//
// The injection handle is stale.
//
#define STATUS_FWP_INJECT_HANDLE_STALE   ((NTSTATUS)0xC0220102L)

//
// MessageId: STATUS_FWP_CANNOT_PEND
//
// MessageText:
//
// The classify cannot be pended.
//
#define STATUS_FWP_CANNOT_PEND           ((NTSTATUS)0xC0220103L)

//
// MessageId: STATUS_FWP_DROP_NOICMP
//
// MessageText:
//
// The packet should be dropped, no ICMP should be sent.
//
#define STATUS_FWP_DROP_NOICMP           ((NTSTATUS)0xC0220104L)


//
// NDIS error codes (ndis.sys)
//

//
// MessageId: STATUS_NDIS_CLOSING
//
// MessageText:
//
// The binding to the network interface is being closed.
//
#define STATUS_NDIS_CLOSING              ((NTSTATUS)0xC0230002L)

//
// MessageId: STATUS_NDIS_BAD_VERSION
//
// MessageText:
//
// An invalid version was specified.
//
#define STATUS_NDIS_BAD_VERSION          ((NTSTATUS)0xC0230004L)

//
// MessageId: STATUS_NDIS_BAD_CHARACTERISTICS
//
// MessageText:
//
// An invalid characteristics table was used.
//
#define STATUS_NDIS_BAD_CHARACTERISTICS  ((NTSTATUS)0xC0230005L)

//
// MessageId: STATUS_NDIS_ADAPTER_NOT_FOUND
//
// MessageText:
//
// Failed to find the network interface or network interface is not ready.
//
#define STATUS_NDIS_ADAPTER_NOT_FOUND    ((NTSTATUS)0xC0230006L)

//
// MessageId: STATUS_NDIS_OPEN_FAILED
//
// MessageText:
//
// Failed to open the network interface.
//
#define STATUS_NDIS_OPEN_FAILED          ((NTSTATUS)0xC0230007L)

//
// MessageId: STATUS_NDIS_DEVICE_FAILED
//
// MessageText:
//
// Network interface has encountered an internal unrecoverable failure.
//
#define STATUS_NDIS_DEVICE_FAILED        ((NTSTATUS)0xC0230008L)

//
// MessageId: STATUS_NDIS_MULTICAST_FULL
//
// MessageText:
//
// The multicast list on the network interface is full.
//
#define STATUS_NDIS_MULTICAST_FULL       ((NTSTATUS)0xC0230009L)

//
// MessageId: STATUS_NDIS_MULTICAST_EXISTS
//
// MessageText:
//
// An attempt was made to add a duplicate multicast address to the list.
//
#define STATUS_NDIS_MULTICAST_EXISTS     ((NTSTATUS)0xC023000AL)

//
// MessageId: STATUS_NDIS_MULTICAST_NOT_FOUND
//
// MessageText:
//
// At attempt was made to remove a multicast address that was never added.
//
#define STATUS_NDIS_MULTICAST_NOT_FOUND  ((NTSTATUS)0xC023000BL)

//
// MessageId: STATUS_NDIS_REQUEST_ABORTED
//
// MessageText:
//
// Network interface aborted the request.
//
#define STATUS_NDIS_REQUEST_ABORTED      ((NTSTATUS)0xC023000CL)

//
// MessageId: STATUS_NDIS_RESET_IN_PROGRESS
//
// MessageText:
//
// Network interface can not process the request because it is being reset.
//
#define STATUS_NDIS_RESET_IN_PROGRESS    ((NTSTATUS)0xC023000DL)

//
// MessageId: STATUS_NDIS_NOT_SUPPORTED
//
// MessageText:
//
// Network interface does not support this request.
//
#define STATUS_NDIS_NOT_SUPPORTED        ((NTSTATUS)0xC02300BBL)

//
// MessageId: STATUS_NDIS_INVALID_PACKET
//
// MessageText:
//
// An attempt was made to send an invalid packet on a network interface.
//
#define STATUS_NDIS_INVALID_PACKET       ((NTSTATUS)0xC023000FL)

//
// MessageId: STATUS_NDIS_ADAPTER_NOT_READY
//
// MessageText:
//
// Network interface is not ready to complete this operation.
//
#define STATUS_NDIS_ADAPTER_NOT_READY    ((NTSTATUS)0xC0230011L)

//
// MessageId: STATUS_NDIS_INVALID_LENGTH
//
// MessageText:
//
// The length of the buffer submitted for this operation is not valid.
//
#define STATUS_NDIS_INVALID_LENGTH       ((NTSTATUS)0xC0230014L)

//
// MessageId: STATUS_NDIS_INVALID_DATA
//
// MessageText:
//
// The data used for this operation is not valid.
//
#define STATUS_NDIS_INVALID_DATA         ((NTSTATUS)0xC0230015L)

//
// MessageId: STATUS_NDIS_BUFFER_TOO_SHORT
//
// MessageText:
//
// The length of buffer submitted for this operation is too small.
//
#define STATUS_NDIS_BUFFER_TOO_SHORT     ((NTSTATUS)0xC0230016L)

//
// MessageId: STATUS_NDIS_INVALID_OID
//
// MessageText:
//
// Network interface does not support this OID (Object Identifier)
//
#define STATUS_NDIS_INVALID_OID          ((NTSTATUS)0xC0230017L)

//
// MessageId: STATUS_NDIS_ADAPTER_REMOVED
//
// MessageText:
//
// The network interface has been removed.
//
#define STATUS_NDIS_ADAPTER_REMOVED      ((NTSTATUS)0xC0230018L)

//
// MessageId: STATUS_NDIS_UNSUPPORTED_MEDIA
//
// MessageText:
//
// Network interface does not support this media type.
//
#define STATUS_NDIS_UNSUPPORTED_MEDIA    ((NTSTATUS)0xC0230019L)

//
// MessageId: STATUS_NDIS_GROUP_ADDRESS_IN_USE
//
// MessageText:
//
// An attempt was made to remove a token ring group address that is in use by other components.
//
#define STATUS_NDIS_GROUP_ADDRESS_IN_USE ((NTSTATUS)0xC023001AL)

//
// MessageId: STATUS_NDIS_FILE_NOT_FOUND
//
// MessageText:
//
// An attempt was made to map a file that can not be found.
//
#define STATUS_NDIS_FILE_NOT_FOUND       ((NTSTATUS)0xC023001BL)

//
// MessageId: STATUS_NDIS_ERROR_READING_FILE
//
// MessageText:
//
// An error occurred while NDIS tried to map the file.
//
#define STATUS_NDIS_ERROR_READING_FILE   ((NTSTATUS)0xC023001CL)

//
// MessageId: STATUS_NDIS_ALREADY_MAPPED
//
// MessageText:
//
// An attempt was made to map a file that is already mapped.
//
#define STATUS_NDIS_ALREADY_MAPPED       ((NTSTATUS)0xC023001DL)

//
// MessageId: STATUS_NDIS_RESOURCE_CONFLICT
//
// MessageText:
//
// An attempt to allocate a hardware resource failed because the resource is used by another component.
//
#define STATUS_NDIS_RESOURCE_CONFLICT    ((NTSTATUS)0xC023001EL)

//
// MessageId: STATUS_NDIS_MEDIA_DISCONNECTED
//
// MessageText:
//
// The I/O operation failed because network media is disconnected or wireless access point is out of range.
//
#define STATUS_NDIS_MEDIA_DISCONNECTED   ((NTSTATUS)0xC023001FL)

//
// MessageId: STATUS_NDIS_INVALID_ADDRESS
//
// MessageText:
//
// The network address used in the request is invalid.
//
#define STATUS_NDIS_INVALID_ADDRESS      ((NTSTATUS)0xC0230022L)

//
// MessageId: STATUS_NDIS_INVALID_DEVICE_REQUEST
//
// MessageText:
//
// The specified request is not a valid operation for the target device.
//
#define STATUS_NDIS_INVALID_DEVICE_REQUEST ((NTSTATUS)0xC0230010L)

//
// MessageId: STATUS_NDIS_PAUSED
//
// MessageText:
//
// The offload operation on the network interface has been paused.
//
#define STATUS_NDIS_PAUSED               ((NTSTATUS)0xC023002AL)

//
// MessageId: STATUS_NDIS_INTERFACE_NOT_FOUND
//
// MessageText:
//
// Network interface was not found.
//
#define STATUS_NDIS_INTERFACE_NOT_FOUND  ((NTSTATUS)0xC023002BL)

//
// MessageId: STATUS_NDIS_UNSUPPORTED_REVISION
//
// MessageText:
//
// The revision number specified in the structure is not supported.
//
#define STATUS_NDIS_UNSUPPORTED_REVISION ((NTSTATUS)0xC023002CL)

//
// MessageId: STATUS_NDIS_INVALID_PORT
//
// MessageText:
//
// The specified port does not exist on this network interface.
//
#define STATUS_NDIS_INVALID_PORT         ((NTSTATUS)0xC023002DL)

//
// MessageId: STATUS_NDIS_INVALID_PORT_STATE
//
// MessageText:
//
// The current state of the specified port on this network interface does not support the requested operation.
//
#define STATUS_NDIS_INVALID_PORT_STATE   ((NTSTATUS)0xC023002EL)

//
// MessageId: STATUS_NDIS_LOW_POWER_STATE
//
// MessageText:
//
// The miniport adapter is in lower power state.
//
#define STATUS_NDIS_LOW_POWER_STATE      ((NTSTATUS)0xC023002FL)

//
// MessageId: STATUS_NDIS_REINIT_REQUIRED
//
// MessageText:
//
// This operation requires the miniport adapter to be reinitialized.
//
#define STATUS_NDIS_REINIT_REQUIRED      ((NTSTATUS)0xC0230030L)

//
// MessageId: STATUS_NDIS_NO_QUEUES
//
// MessageText:
//
// There are not enough queues to complete the operation.
//
#define STATUS_NDIS_NO_QUEUES            ((NTSTATUS)0xC0230031L)


//
// NDIS error codes (802.11 wireless LAN)
//

//
// MessageId: STATUS_NDIS_DOT11_AUTO_CONFIG_ENABLED
//
// MessageText:
//
// The wireless local area network interface is in auto configuration mode and doesn't support the requested parameter change operation.
//
#define STATUS_NDIS_DOT11_AUTO_CONFIG_ENABLED ((NTSTATUS)0xC0232000L)

//
// MessageId: STATUS_NDIS_DOT11_MEDIA_IN_USE
//
// MessageText:
//
// The wireless local area network interface is busy and can not perform the requested operation.
//
#define STATUS_NDIS_DOT11_MEDIA_IN_USE   ((NTSTATUS)0xC0232001L)

//
// MessageId: STATUS_NDIS_DOT11_POWER_STATE_INVALID
//
// MessageText:
//
// The wireless local area network interface is powered down and doesn't support the requested operation.
//
#define STATUS_NDIS_DOT11_POWER_STATE_INVALID ((NTSTATUS)0xC0232002L)

//
// MessageId: STATUS_NDIS_PM_WOL_PATTERN_LIST_FULL
//
// MessageText:
//
// The list of wake on LAN patterns is full.
//
#define STATUS_NDIS_PM_WOL_PATTERN_LIST_FULL ((NTSTATUS)0xC0232003L)

//
// MessageId: STATUS_NDIS_PM_PROTOCOL_OFFLOAD_LIST_FULL
//
// MessageText:
//
// The list of low power protocol offloads is full.
//
#define STATUS_NDIS_PM_PROTOCOL_OFFLOAD_LIST_FULL ((NTSTATUS)0xC0232004L)

//
// MessageId: STATUS_NDIS_DOT11_AP_CHANNEL_CURRENTLY_NOT_AVAILABLE
//
// MessageText:
//
// The wireless local area network interface cannot start an AP on the specified channel right now.
//
#define STATUS_NDIS_DOT11_AP_CHANNEL_CURRENTLY_NOT_AVAILABLE ((NTSTATUS)0xC0232005L)

//
// MessageId: STATUS_NDIS_DOT11_AP_BAND_CURRENTLY_NOT_AVAILABLE
//
// MessageText:
//
// The wireless local area network interface cannot start an AP on the specified band right now.
//
#define STATUS_NDIS_DOT11_AP_BAND_CURRENTLY_NOT_AVAILABLE ((NTSTATUS)0xC0232006L)

//
// MessageId: STATUS_NDIS_DOT11_AP_CHANNEL_NOT_ALLOWED
//
// MessageText:
//
// The wireless local area network interface cannot start an AP on this channel due to regulatory reasons.
//
#define STATUS_NDIS_DOT11_AP_CHANNEL_NOT_ALLOWED ((NTSTATUS)0xC0232007L)

//
// MessageId: STATUS_NDIS_DOT11_AP_BAND_NOT_ALLOWED
//
// MessageText:
//
// The wireless local area network interface cannot start an AP on this band due to regulatory reasons.
//
#define STATUS_NDIS_DOT11_AP_BAND_NOT_ALLOWED ((NTSTATUS)0xC0232008L)

//
// NDIS informational codes(ndis.sys)
//

//
// MessageId: STATUS_NDIS_INDICATION_REQUIRED
//
// MessageText:
//
// The request will be completed later by NDIS status indication.
//
#define STATUS_NDIS_INDICATION_REQUIRED  ((NTSTATUS)0x40230001L)

//
// NDIS Chimney Offload codes (ndis.sys)
//

//
// MessageId: STATUS_NDIS_OFFLOAD_POLICY
//
// MessageText:
//
// The TCP connection is not offloadable because of a local policy setting.
//
#define STATUS_NDIS_OFFLOAD_POLICY       ((NTSTATUS)0xC023100FL)

//
// MessageId: STATUS_NDIS_OFFLOAD_CONNECTION_REJECTED
//
// MessageText:
//
// The TCP connection is not offloadable by the Chimney offload target.
//
#define STATUS_NDIS_OFFLOAD_CONNECTION_REJECTED ((NTSTATUS)0xC0231012L)

//
// MessageId: STATUS_NDIS_OFFLOAD_PATH_REJECTED
//
// MessageText:
//
// The IP Path object is not in an offloadable state.
//
#define STATUS_NDIS_OFFLOAD_PATH_REJECTED ((NTSTATUS)0xC0231013L)

//
// TPM hardware errors {0x0000..0x003ff}
//
//
// MessageId: STATUS_TPM_ERROR_MASK
//
// MessageText:
//
// This is an error mask to convert TPM hardware errors to win errors.
//
#define STATUS_TPM_ERROR_MASK            ((NTSTATUS)0xC0290000L)

//
// MessageId: STATUS_TPM_AUTHFAIL
//
// MessageText:
//
// TPM 1.2: Authentication failed.
//
#define STATUS_TPM_AUTHFAIL              ((NTSTATUS)0xC0290001L)

//
// MessageId: STATUS_TPM_BADINDEX
//
// MessageText:
//
// TPM 1.2: The index to a PCR, DIR or other register is incorrect.
//
#define STATUS_TPM_BADINDEX              ((NTSTATUS)0xC0290002L)

//
// MessageId: STATUS_TPM_BAD_PARAMETER
//
// MessageText:
//
// TPM 1.2: One or more parameter is bad.
//
#define STATUS_TPM_BAD_PARAMETER         ((NTSTATUS)0xC0290003L)

//
// MessageId: STATUS_TPM_AUDITFAILURE
//
// MessageText:
//
// TPM 1.2: An operation completed successfully but the auditing of that operation failed.
//
#define STATUS_TPM_AUDITFAILURE          ((NTSTATUS)0xC0290004L)

//
// MessageId: STATUS_TPM_CLEAR_DISABLED
//
// MessageText:
//
// TPM 1.2: The clear disable flag is set and all clear operations now require physical access.
//
#define STATUS_TPM_CLEAR_DISABLED        ((NTSTATUS)0xC0290005L)

//
// MessageId: STATUS_TPM_DEACTIVATED
//
// MessageText:
//
// TPM 1.2: Activate the Trusted Platform Module (TPM).
//
#define STATUS_TPM_DEACTIVATED           ((NTSTATUS)0xC0290006L)

//
// MessageId: STATUS_TPM_DISABLED
//
// MessageText:
//
// TPM 1.2: Enable the Trusted Platform Module (TPM).
//
#define STATUS_TPM_DISABLED              ((NTSTATUS)0xC0290007L)

//
// MessageId: STATUS_TPM_DISABLED_CMD
//
// MessageText:
//
// TPM 1.2: The target command has been disabled.
//
#define STATUS_TPM_DISABLED_CMD          ((NTSTATUS)0xC0290008L)

//
// MessageId: STATUS_TPM_FAIL
//
// MessageText:
//
// TPM 1.2: The operation failed.
//
#define STATUS_TPM_FAIL                  ((NTSTATUS)0xC0290009L)

//
// MessageId: STATUS_TPM_BAD_ORDINAL
//
// MessageText:
//
// TPM 1.2: The ordinal was unknown or inconsistent.
//
#define STATUS_TPM_BAD_ORDINAL           ((NTSTATUS)0xC029000AL)

//
// MessageId: STATUS_TPM_INSTALL_DISABLED
//
// MessageText:
//
// TPM 1.2: The ability to install an owner is disabled.
//
#define STATUS_TPM_INSTALL_DISABLED      ((NTSTATUS)0xC029000BL)

//
// MessageId: STATUS_TPM_INVALID_KEYHANDLE
//
// MessageText:
//
// TPM 1.2: The key handle cannot be interpreted.
//
#define STATUS_TPM_INVALID_KEYHANDLE     ((NTSTATUS)0xC029000CL)

//
// MessageId: STATUS_TPM_KEYNOTFOUND
//
// MessageText:
//
// TPM 1.2: The key handle points to an invalid key.
//
#define STATUS_TPM_KEYNOTFOUND           ((NTSTATUS)0xC029000DL)

//
// MessageId: STATUS_TPM_INAPPROPRIATE_ENC
//
// MessageText:
//
// TPM 1.2: Unacceptable encryption scheme.
//
#define STATUS_TPM_INAPPROPRIATE_ENC     ((NTSTATUS)0xC029000EL)

//
// MessageId: STATUS_TPM_MIGRATEFAIL
//
// MessageText:
//
// TPM 1.2: Migration authorization failed.
//
#define STATUS_TPM_MIGRATEFAIL           ((NTSTATUS)0xC029000FL)

//
// MessageId: STATUS_TPM_INVALID_PCR_INFO
//
// MessageText:
//
// TPM 1.2: PCR information could not be interpreted.
//
#define STATUS_TPM_INVALID_PCR_INFO      ((NTSTATUS)0xC0290010L)

//
// MessageId: STATUS_TPM_NOSPACE
//
// MessageText:
//
// TPM 1.2: No room to load key.
//
#define STATUS_TPM_NOSPACE               ((NTSTATUS)0xC0290011L)

//
// MessageId: STATUS_TPM_NOSRK
//
// MessageText:
//
// TPM 1.2: There is no Storage Root Key (SRK) set.
//
#define STATUS_TPM_NOSRK                 ((NTSTATUS)0xC0290012L)

//
// MessageId: STATUS_TPM_NOTSEALED_BLOB
//
// MessageText:
//
// TPM 1.2: An encrypted blob is invalid or was not created by this TPM.
//
#define STATUS_TPM_NOTSEALED_BLOB        ((NTSTATUS)0xC0290013L)

//
// MessageId: STATUS_TPM_OWNER_SET
//
// MessageText:
//
// TPM 1.2: The Trusted Platform Module (TPM) already has an owner.
//
#define STATUS_TPM_OWNER_SET             ((NTSTATUS)0xC0290014L)

//
// MessageId: STATUS_TPM_RESOURCES
//
// MessageText:
//
// TPM 1.2: The TPM has insufficient internal resources to perform the requested action.
//
#define STATUS_TPM_RESOURCES             ((NTSTATUS)0xC0290015L)

//
// MessageId: STATUS_TPM_SHORTRANDOM
//
// MessageText:
//
// TPM 1.2: A random string was too short.
//
#define STATUS_TPM_SHORTRANDOM           ((NTSTATUS)0xC0290016L)

//
// MessageId: STATUS_TPM_SIZE
//
// MessageText:
//
// TPM 1.2: The TPM does not have the space to perform the operation.
//
#define STATUS_TPM_SIZE                  ((NTSTATUS)0xC0290017L)

//
// MessageId: STATUS_TPM_WRONGPCRVAL
//
// MessageText:
//
// TPM 1.2: The named PCR value does not match the current PCR value.
//
#define STATUS_TPM_WRONGPCRVAL           ((NTSTATUS)0xC0290018L)

//
// MessageId: STATUS_TPM_BAD_PARAM_SIZE
//
// MessageText:
//
// TPM 1.2: The paramSize argument to the command has the incorrect value .
//
#define STATUS_TPM_BAD_PARAM_SIZE        ((NTSTATUS)0xC0290019L)

//
// MessageId: STATUS_TPM_SHA_THREAD
//
// MessageText:
//
// TPM 1.2: There is no existing SHA-1 thread.
//
#define STATUS_TPM_SHA_THREAD            ((NTSTATUS)0xC029001AL)

//
// MessageId: STATUS_TPM_SHA_ERROR
//
// MessageText:
//
// TPM 1.2: The calculation is unable to proceed because the existing SHA-1 thread has already encountered an error.
//
#define STATUS_TPM_SHA_ERROR             ((NTSTATUS)0xC029001BL)

//
// MessageId: STATUS_TPM_FAILEDSELFTEST
//
// MessageText:
//
// TPM 1.2: The TPM hardware device reported a failure during its internal self test. Try restarting the computer to resolve the problem. If the problem continues, you might need to replace your TPM hardware or motherboard.
//
#define STATUS_TPM_FAILEDSELFTEST        ((NTSTATUS)0xC029001CL)

//
// MessageId: STATUS_TPM_AUTH2FAIL
//
// MessageText:
//
// TPM 1.2: The authorization for the second key in a 2 key function failed authorization.
//
#define STATUS_TPM_AUTH2FAIL             ((NTSTATUS)0xC029001DL)

//
// MessageId: STATUS_TPM_BADTAG
//
// MessageText:
//
// TPM 1.2: The tag value sent to for a command is invalid.
//
#define STATUS_TPM_BADTAG                ((NTSTATUS)0xC029001EL)

//
// MessageId: STATUS_TPM_IOERROR
//
// MessageText:
//
// TPM 1.2: An IO error occurred transmitting information to the TPM.
//
#define STATUS_TPM_IOERROR               ((NTSTATUS)0xC029001FL)

//
// MessageId: STATUS_TPM_ENCRYPT_ERROR
//
// MessageText:
//
// TPM 1.2: The encryption process had a problem.
//
#define STATUS_TPM_ENCRYPT_ERROR         ((NTSTATUS)0xC0290020L)

//
// MessageId: STATUS_TPM_DECRYPT_ERROR
//
// MessageText:
//
// TPM 1.2: The decryption process did not complete.
//
#define STATUS_TPM_DECRYPT_ERROR         ((NTSTATUS)0xC0290021L)

//
// MessageId: STATUS_TPM_INVALID_AUTHHANDLE
//
// MessageText:
//
// TPM 1.2: An invalid handle was used.
//
#define STATUS_TPM_INVALID_AUTHHANDLE    ((NTSTATUS)0xC0290022L)

//
// MessageId: STATUS_TPM_NO_ENDORSEMENT
//
// MessageText:
//
// TPM 1.2: The TPM does not have an Endorsement Key (EK) installed.
//
#define STATUS_TPM_NO_ENDORSEMENT        ((NTSTATUS)0xC0290023L)

//
// MessageId: STATUS_TPM_INVALID_KEYUSAGE
//
// MessageText:
//
// TPM 1.2: The usage of a key is not allowed.
//
#define STATUS_TPM_INVALID_KEYUSAGE      ((NTSTATUS)0xC0290024L)

//
// MessageId: STATUS_TPM_WRONG_ENTITYTYPE
//
// MessageText:
//
// TPM 1.2: The submitted entity type is not allowed.
//
#define STATUS_TPM_WRONG_ENTITYTYPE      ((NTSTATUS)0xC0290025L)

//
// MessageId: STATUS_TPM_INVALID_POSTINIT
//
// MessageText:
//
// TPM 1.2: The command was received in the wrong sequence relative to TPM_Init and a subsequent TPM_Startup.
//
#define STATUS_TPM_INVALID_POSTINIT      ((NTSTATUS)0xC0290026L)

//
// MessageId: STATUS_TPM_INAPPROPRIATE_SIG
//
// MessageText:
//
// TPM 1.2: Signed data cannot include additional DER information.
//
#define STATUS_TPM_INAPPROPRIATE_SIG     ((NTSTATUS)0xC0290027L)

//
// MessageId: STATUS_TPM_BAD_KEY_PROPERTY
//
// MessageText:
//
// TPM 1.2: The key properties in TPM_KEY_PARMs are not supported by this TPM.
//
#define STATUS_TPM_BAD_KEY_PROPERTY      ((NTSTATUS)0xC0290028L)

//
// MessageId: STATUS_TPM_BAD_MIGRATION
//
// MessageText:
//
// TPM 1.2: The migration properties of this key are incorrect.
//
#define STATUS_TPM_BAD_MIGRATION         ((NTSTATUS)0xC0290029L)

//
// MessageId: STATUS_TPM_BAD_SCHEME
//
// MessageText:
//
// TPM 1.2: The signature or encryption scheme for this key is incorrect or not permitted in this situation.
//
#define STATUS_TPM_BAD_SCHEME            ((NTSTATUS)0xC029002AL)

//
// MessageId: STATUS_TPM_BAD_DATASIZE
//
// MessageText:
//
// TPM 1.2: The size of the data (or blob) parameter is bad or inconsistent with the referenced key.
//
#define STATUS_TPM_BAD_DATASIZE          ((NTSTATUS)0xC029002BL)

//
// MessageId: STATUS_TPM_BAD_MODE
//
// MessageText:
//
// TPM 1.2: A mode parameter is bad, such as capArea or subCapArea for TPM_GetCapability, phsicalPresence parameter for TPM_PhysicalPresence, or migrationType for TPM_CreateMigrationBlob.
//
#define STATUS_TPM_BAD_MODE              ((NTSTATUS)0xC029002CL)

//
// MessageId: STATUS_TPM_BAD_PRESENCE
//
// MessageText:
//
// TPM 1.2: Either the physicalPresence or physicalPresenceLock bits have the wrong value.
//
#define STATUS_TPM_BAD_PRESENCE          ((NTSTATUS)0xC029002DL)

//
// MessageId: STATUS_TPM_BAD_VERSION
//
// MessageText:
//
// TPM 1.2: The TPM cannot perform this version of the capability.
//
#define STATUS_TPM_BAD_VERSION           ((NTSTATUS)0xC029002EL)

//
// MessageId: STATUS_TPM_NO_WRAP_TRANSPORT
//
// MessageText:
//
// TPM 1.2: The TPM does not allow for wrapped transport sessions.
//
#define STATUS_TPM_NO_WRAP_TRANSPORT     ((NTSTATUS)0xC029002FL)

//
// MessageId: STATUS_TPM_AUDITFAIL_UNSUCCESSFUL
//
// MessageText:
//
// TPM 1.2: TPM audit construction failed and the underlying command was returning a failure code also.
//
#define STATUS_TPM_AUDITFAIL_UNSUCCESSFUL ((NTSTATUS)0xC0290030L)

//
// MessageId: STATUS_TPM_AUDITFAIL_SUCCESSFUL
//
// MessageText:
//
// TPM 1.2: TPM audit construction failed and the underlying command was returning success.
//
#define STATUS_TPM_AUDITFAIL_SUCCESSFUL  ((NTSTATUS)0xC0290031L)

//
// MessageId: STATUS_TPM_NOTRESETABLE
//
// MessageText:
//
// TPM 1.2: Attempt to reset a PCR register that does not have the resettable attribute.
//
#define STATUS_TPM_NOTRESETABLE          ((NTSTATUS)0xC0290032L)

//
// MessageId: STATUS_TPM_NOTLOCAL
//
// MessageText:
//
// TPM 1.2: Attempt to reset a PCR register that requires locality and locality modifier not part of command transport.
//
#define STATUS_TPM_NOTLOCAL              ((NTSTATUS)0xC0290033L)

//
// MessageId: STATUS_TPM_BAD_TYPE
//
// MessageText:
//
// TPM 1.2: Make identity blob not properly typed.
//
#define STATUS_TPM_BAD_TYPE              ((NTSTATUS)0xC0290034L)

//
// MessageId: STATUS_TPM_INVALID_RESOURCE
//
// MessageText:
//
// TPM 1.2: When saving context identified resource type does not match actual resource.
//
#define STATUS_TPM_INVALID_RESOURCE      ((NTSTATUS)0xC0290035L)

//
// MessageId: STATUS_TPM_NOTFIPS
//
// MessageText:
//
// TPM 1.2: The TPM is attempting to execute a command that is not allowed when in FIPS mode.
//
#define STATUS_TPM_NOTFIPS               ((NTSTATUS)0xC0290036L)

//
// MessageId: STATUS_TPM_INVALID_FAMILY
//
// MessageText:
//
// TPM 1.2: The command is attempting to use an invalid family ID.
//
#define STATUS_TPM_INVALID_FAMILY        ((NTSTATUS)0xC0290037L)

//
// MessageId: STATUS_TPM_NO_NV_PERMISSION
//
// MessageText:
//
// TPM 1.2: The permission to manipulate the NV storage is not available.
//
#define STATUS_TPM_NO_NV_PERMISSION      ((NTSTATUS)0xC0290038L)

//
// MessageId: STATUS_TPM_REQUIRES_SIGN
//
// MessageText:
//
// TPM 1.2: The operation requires a signed command.
//
#define STATUS_TPM_REQUIRES_SIGN         ((NTSTATUS)0xC0290039L)

//
// MessageId: STATUS_TPM_KEY_NOTSUPPORTED
//
// MessageText:
//
// TPM 1.2: Wrong operation to load an NV key.
//
#define STATUS_TPM_KEY_NOTSUPPORTED      ((NTSTATUS)0xC029003AL)

//
// MessageId: STATUS_TPM_AUTH_CONFLICT
//
// MessageText:
//
// TPM 1.2: NV_LoadKey blob requires both owner and blob authorization.
//
#define STATUS_TPM_AUTH_CONFLICT         ((NTSTATUS)0xC029003BL)

//
// MessageId: STATUS_TPM_AREA_LOCKED
//
// MessageText:
//
// TPM 1.2: The NV area is locked and not writable.
//
#define STATUS_TPM_AREA_LOCKED           ((NTSTATUS)0xC029003CL)

//
// MessageId: STATUS_TPM_BAD_LOCALITY
//
// MessageText:
//
// TPM 1.2: The locality is incorrect for the attempted operation.
//
#define STATUS_TPM_BAD_LOCALITY          ((NTSTATUS)0xC029003DL)

//
// MessageId: STATUS_TPM_READ_ONLY
//
// MessageText:
//
// TPM 1.2: The NV area is read only and can't be written to.
//
#define STATUS_TPM_READ_ONLY             ((NTSTATUS)0xC029003EL)

//
// MessageId: STATUS_TPM_PER_NOWRITE
//
// MessageText:
//
// TPM 1.2: There is no protection on the write to the NV area.
//
#define STATUS_TPM_PER_NOWRITE           ((NTSTATUS)0xC029003FL)

//
// MessageId: STATUS_TPM_FAMILYCOUNT
//
// MessageText:
//
// TPM 1.2: The family count value does not match.
//
#define STATUS_TPM_FAMILYCOUNT           ((NTSTATUS)0xC0290040L)

//
// MessageId: STATUS_TPM_WRITE_LOCKED
//
// MessageText:
//
// TPM 1.2: The NV area has already been written to.
//
#define STATUS_TPM_WRITE_LOCKED          ((NTSTATUS)0xC0290041L)

//
// MessageId: STATUS_TPM_BAD_ATTRIBUTES
//
// MessageText:
//
// TPM 1.2: The NV area attributes conflict.
//
#define STATUS_TPM_BAD_ATTRIBUTES        ((NTSTATUS)0xC0290042L)

//
// MessageId: STATUS_TPM_INVALID_STRUCTURE
//
// MessageText:
//
// TPM 1.2: The structure tag and version are invalid or inconsistent.
//
#define STATUS_TPM_INVALID_STRUCTURE     ((NTSTATUS)0xC0290043L)

//
// MessageId: STATUS_TPM_KEY_OWNER_CONTROL
//
// MessageText:
//
// TPM 1.2: The key is under control of the TPM Owner and can only be evicted by the TPM Owner.
//
#define STATUS_TPM_KEY_OWNER_CONTROL     ((NTSTATUS)0xC0290044L)

//
// MessageId: STATUS_TPM_BAD_COUNTER
//
// MessageText:
//
// TPM 1.2: The counter handle is incorrect.
//
#define STATUS_TPM_BAD_COUNTER           ((NTSTATUS)0xC0290045L)

//
// MessageId: STATUS_TPM_NOT_FULLWRITE
//
// MessageText:
//
// TPM 1.2: The write is not a complete write of the area.
//
#define STATUS_TPM_NOT_FULLWRITE         ((NTSTATUS)0xC0290046L)

//
// MessageId: STATUS_TPM_CONTEXT_GAP
//
// MessageText:
//
// TPM 1.2: The gap between saved context counts is too large.
//
#define STATUS_TPM_CONTEXT_GAP           ((NTSTATUS)0xC0290047L)

//
// MessageId: STATUS_TPM_MAXNVWRITES
//
// MessageText:
//
// TPM 1.2: The maximum number of NV writes without an owner has been exceeded.
//
#define STATUS_TPM_MAXNVWRITES           ((NTSTATUS)0xC0290048L)

//
// MessageId: STATUS_TPM_NOOPERATOR
//
// MessageText:
//
// TPM 1.2: No operator AuthData value is set.
//
#define STATUS_TPM_NOOPERATOR            ((NTSTATUS)0xC0290049L)

//
// MessageId: STATUS_TPM_RESOURCEMISSING
//
// MessageText:
//
// TPM 1.2: The resource pointed to by context is not loaded.
//
#define STATUS_TPM_RESOURCEMISSING       ((NTSTATUS)0xC029004AL)

//
// MessageId: STATUS_TPM_DELEGATE_LOCK
//
// MessageText:
//
// TPM 1.2: The delegate administration is locked.
//
#define STATUS_TPM_DELEGATE_LOCK         ((NTSTATUS)0xC029004BL)

//
// MessageId: STATUS_TPM_DELEGATE_FAMILY
//
// MessageText:
//
// TPM 1.2: Attempt to manage a family other then the delegated family.
//
#define STATUS_TPM_DELEGATE_FAMILY       ((NTSTATUS)0xC029004CL)

//
// MessageId: STATUS_TPM_DELEGATE_ADMIN
//
// MessageText:
//
// TPM 1.2: Delegation table management not enabled.
//
#define STATUS_TPM_DELEGATE_ADMIN        ((NTSTATUS)0xC029004DL)

//
// MessageId: STATUS_TPM_TRANSPORT_NOTEXCLUSIVE
//
// MessageText:
//
// TPM 1.2: There was a command executed outside of an exclusive transport session.
//
#define STATUS_TPM_TRANSPORT_NOTEXCLUSIVE ((NTSTATUS)0xC029004EL)

//
// MessageId: STATUS_TPM_OWNER_CONTROL
//
// MessageText:
//
// TPM 1.2: Attempt to context save a owner evict controlled key.
//
#define STATUS_TPM_OWNER_CONTROL         ((NTSTATUS)0xC029004FL)

//
// MessageId: STATUS_TPM_DAA_RESOURCES
//
// MessageText:
//
// TPM 1.2: The DAA command has no resources available to execute the command.
//
#define STATUS_TPM_DAA_RESOURCES         ((NTSTATUS)0xC0290050L)

//
// MessageId: STATUS_TPM_DAA_INPUT_DATA0
//
// MessageText:
//
// TPM 1.2: The consistency check on DAA parameter inputData0 has failed.
//
#define STATUS_TPM_DAA_INPUT_DATA0       ((NTSTATUS)0xC0290051L)

//
// MessageId: STATUS_TPM_DAA_INPUT_DATA1
//
// MessageText:
//
// TPM 1.2: The consistency check on DAA parameter inputData1 has failed.
//
#define STATUS_TPM_DAA_INPUT_DATA1       ((NTSTATUS)0xC0290052L)

//
// MessageId: STATUS_TPM_DAA_ISSUER_SETTINGS
//
// MessageText:
//
// TPM 1.2: The consistency check on DAA_issuerSettings has failed.
//
#define STATUS_TPM_DAA_ISSUER_SETTINGS   ((NTSTATUS)0xC0290053L)

//
// MessageId: STATUS_TPM_DAA_TPM_SETTINGS
//
// MessageText:
//
// TPM 1.2: The consistency check on DAA_tpmSpecific has failed.
//
#define STATUS_TPM_DAA_TPM_SETTINGS      ((NTSTATUS)0xC0290054L)

//
// MessageId: STATUS_TPM_DAA_STAGE
//
// MessageText:
//
// TPM 1.2: The atomic process indicated by the submitted DAA command is not the expected process.
//
#define STATUS_TPM_DAA_STAGE             ((NTSTATUS)0xC0290055L)

//
// MessageId: STATUS_TPM_DAA_ISSUER_VALIDITY
//
// MessageText:
//
// TPM 1.2: The issuer's validity check has detected an inconsistency.
//
#define STATUS_TPM_DAA_ISSUER_VALIDITY   ((NTSTATUS)0xC0290056L)

//
// MessageId: STATUS_TPM_DAA_WRONG_W
//
// MessageText:
//
// TPM 1.2: The consistency check on w has failed.
//
#define STATUS_TPM_DAA_WRONG_W           ((NTSTATUS)0xC0290057L)

//
// MessageId: STATUS_TPM_BAD_HANDLE
//
// MessageText:
//
// TPM 1.2: The handle is incorrect.
//
#define STATUS_TPM_BAD_HANDLE            ((NTSTATUS)0xC0290058L)

//
// MessageId: STATUS_TPM_BAD_DELEGATE
//
// MessageText:
//
// TPM 1.2: Delegation is not correct.
//
#define STATUS_TPM_BAD_DELEGATE          ((NTSTATUS)0xC0290059L)

//
// MessageId: STATUS_TPM_BADCONTEXT
//
// MessageText:
//
// TPM 1.2: The context blob is invalid.
//
#define STATUS_TPM_BADCONTEXT            ((NTSTATUS)0xC029005AL)

//
// MessageId: STATUS_TPM_TOOMANYCONTEXTS
//
// MessageText:
//
// TPM 1.2: Too many contexts held by the TPM.
//
#define STATUS_TPM_TOOMANYCONTEXTS       ((NTSTATUS)0xC029005BL)

//
// MessageId: STATUS_TPM_MA_TICKET_SIGNATURE
//
// MessageText:
//
// TPM 1.2: Migration authority signature validation failure.
//
#define STATUS_TPM_MA_TICKET_SIGNATURE   ((NTSTATUS)0xC029005CL)

//
// MessageId: STATUS_TPM_MA_DESTINATION
//
// MessageText:
//
// TPM 1.2: Migration destination not authenticated.
//
#define STATUS_TPM_MA_DESTINATION        ((NTSTATUS)0xC029005DL)

//
// MessageId: STATUS_TPM_MA_SOURCE
//
// MessageText:
//
// TPM 1.2: Migration source incorrect.
//
#define STATUS_TPM_MA_SOURCE             ((NTSTATUS)0xC029005EL)

//
// MessageId: STATUS_TPM_MA_AUTHORITY
//
// MessageText:
//
// TPM 1.2: Incorrect migration authority.
//
#define STATUS_TPM_MA_AUTHORITY          ((NTSTATUS)0xC029005FL)

//
// MessageId: STATUS_TPM_PERMANENTEK
//
// MessageText:
//
// TPM 1.2: Attempt to revoke the EK and the EK is not revocable.
//
#define STATUS_TPM_PERMANENTEK           ((NTSTATUS)0xC0290061L)

//
// MessageId: STATUS_TPM_BAD_SIGNATURE
//
// MessageText:
//
// TPM 1.2: Bad signature of CMK ticket.
//
#define STATUS_TPM_BAD_SIGNATURE         ((NTSTATUS)0xC0290062L)

//
// MessageId: STATUS_TPM_NOCONTEXTSPACE
//
// MessageText:
//
// TPM 1.2: There is no room in the context list for additional contexts.
//
#define STATUS_TPM_NOCONTEXTSPACE        ((NTSTATUS)0xC0290063L)

//
// MessageId: STATUS_TPM_20_E_ASYMMETRIC
//
// MessageText:
//
// TPM 2.0: Asymmetric algorithm not supported or not correct.
//
#define STATUS_TPM_20_E_ASYMMETRIC       ((NTSTATUS)0xC0290081L)

//
// MessageId: STATUS_TPM_20_E_ATTRIBUTES
//
// MessageText:
//
// TPM 2.0: Inconsistent attributes.
//
#define STATUS_TPM_20_E_ATTRIBUTES       ((NTSTATUS)0xC0290082L)

//
// MessageId: STATUS_TPM_20_E_HASH
//
// MessageText:
//
// TPM 2.0: Hash algorithm not supported or not appropriate.
//
#define STATUS_TPM_20_E_HASH             ((NTSTATUS)0xC0290083L)

//
// MessageId: STATUS_TPM_20_E_VALUE
//
// MessageText:
//
// TPM 2.0: Value is out of range or is not correct for the context.
//
#define STATUS_TPM_20_E_VALUE            ((NTSTATUS)0xC0290084L)

//
// MessageId: STATUS_TPM_20_E_HIERARCHY
//
// MessageText:
//
// TPM 2.0: Hierarchy is not enabled or is not correct for the use.
//
#define STATUS_TPM_20_E_HIERARCHY        ((NTSTATUS)0xC0290085L)

//
// MessageId: STATUS_TPM_20_E_KEY_SIZE
//
// MessageText:
//
// TPM 2.0: Key size is not supported.
//
#define STATUS_TPM_20_E_KEY_SIZE         ((NTSTATUS)0xC0290087L)

//
// MessageId: STATUS_TPM_20_E_MGF
//
// MessageText:
//
// TPM 2.0: Mask generation function not supported.
//
#define STATUS_TPM_20_E_MGF              ((NTSTATUS)0xC0290088L)

//
// MessageId: STATUS_TPM_20_E_MODE
//
// MessageText:
//
// TPM 2.0: Mode of operation not supported.
//
#define STATUS_TPM_20_E_MODE             ((NTSTATUS)0xC0290089L)

//
// MessageId: STATUS_TPM_20_E_TYPE
//
// MessageText:
//
// TPM 2.0: The type of the value is not appropriate for the use.
//
#define STATUS_TPM_20_E_TYPE             ((NTSTATUS)0xC029008AL)

//
// MessageId: STATUS_TPM_20_E_HANDLE
//
// MessageText:
//
// TPM 2.0: The Handle is not correct for the use.
//
#define STATUS_TPM_20_E_HANDLE           ((NTSTATUS)0xC029008BL)

//
// MessageId: STATUS_TPM_20_E_KDF
//
// MessageText:
//
// TPM 2.0: Unsupported key derivation function or function not appropriate for use.
//
#define STATUS_TPM_20_E_KDF              ((NTSTATUS)0xC029008CL)

//
// MessageId: STATUS_TPM_20_E_RANGE
//
// MessageText:
//
// TPM 2.0: Value was out of allowed range.
//
#define STATUS_TPM_20_E_RANGE            ((NTSTATUS)0xC029008DL)

//
// MessageId: STATUS_TPM_20_E_AUTH_FAIL
//
// MessageText:
//
// TPM 2.0: The authorization HMAC check failed and DA counter incremented.
//
#define STATUS_TPM_20_E_AUTH_FAIL        ((NTSTATUS)0xC029008EL)

//
// MessageId: STATUS_TPM_20_E_NONCE
//
// MessageText:
//
// TPM 2.0: Invalid nonce size.
//
#define STATUS_TPM_20_E_NONCE            ((NTSTATUS)0xC029008FL)

//
// MessageId: STATUS_TPM_20_E_PP
//
// MessageText:
//
// TPM 2.0: Authorization requires assertion of PP.
//
#define STATUS_TPM_20_E_PP               ((NTSTATUS)0xC0290090L)

//
// MessageId: STATUS_TPM_20_E_SCHEME
//
// MessageText:
//
// TPM 2.0: Unsupported or incompatible scheme.
//
#define STATUS_TPM_20_E_SCHEME           ((NTSTATUS)0xC0290092L)

//
// MessageId: STATUS_TPM_20_E_SIZE
//
// MessageText:
//
// TPM 2.0: Structure is wrong size.
//
#define STATUS_TPM_20_E_SIZE             ((NTSTATUS)0xC0290095L)

//
// MessageId: STATUS_TPM_20_E_SYMMETRIC
//
// MessageText:
//
// TPM 2.0: Unsupported symmetric algorithm or key size, or not appropriate for instance.
//
#define STATUS_TPM_20_E_SYMMETRIC        ((NTSTATUS)0xC0290096L)

//
// MessageId: STATUS_TPM_20_E_TAG
//
// MessageText:
//
// TPM 2.0: Incorrect structure tag.
//
#define STATUS_TPM_20_E_TAG              ((NTSTATUS)0xC0290097L)

//
// MessageId: STATUS_TPM_20_E_SELECTOR
//
// MessageText:
//
// TPM 2.0: Union selector is incorrect.
//
#define STATUS_TPM_20_E_SELECTOR         ((NTSTATUS)0xC0290098L)

//
// MessageId: STATUS_TPM_20_E_INSUFFICIENT
//
// MessageText:
//
// TPM 2.0: The TPM was unable to unmarshal a value because there were not enough octets in the input buffer.
//
#define STATUS_TPM_20_E_INSUFFICIENT     ((NTSTATUS)0xC029009AL)

//
// MessageId: STATUS_TPM_20_E_SIGNATURE
//
// MessageText:
//
// TPM 2.0: The signature is not valid.
//
#define STATUS_TPM_20_E_SIGNATURE        ((NTSTATUS)0xC029009BL)

//
// MessageId: STATUS_TPM_20_E_KEY
//
// MessageText:
//
// TPM 2.0: Key fields are not compatible with the selected use.
//
#define STATUS_TPM_20_E_KEY              ((NTSTATUS)0xC029009CL)

//
// MessageId: STATUS_TPM_20_E_POLICY_FAIL
//
// MessageText:
//
// TPM 2.0: A policy check failed.
//
#define STATUS_TPM_20_E_POLICY_FAIL      ((NTSTATUS)0xC029009DL)

//
// MessageId: STATUS_TPM_20_E_INTEGRITY
//
// MessageText:
//
// TPM 2.0: Integrity check failed.
//
#define STATUS_TPM_20_E_INTEGRITY        ((NTSTATUS)0xC029009FL)

//
// MessageId: STATUS_TPM_20_E_TICKET
//
// MessageText:
//
// TPM 2.0: Invalid ticket.
//
#define STATUS_TPM_20_E_TICKET           ((NTSTATUS)0xC02900A0L)

//
// MessageId: STATUS_TPM_20_E_RESERVED_BITS
//
// MessageText:
//
// TPM 2.0: Reserved bits not set to zero as required.
//
#define STATUS_TPM_20_E_RESERVED_BITS    ((NTSTATUS)0xC02900A1L)

//
// MessageId: STATUS_TPM_20_E_BAD_AUTH
//
// MessageText:
//
// TPM 2.0: Authorization failure without DA implications.
//
#define STATUS_TPM_20_E_BAD_AUTH         ((NTSTATUS)0xC02900A2L)

//
// MessageId: STATUS_TPM_20_E_EXPIRED
//
// MessageText:
//
// TPM 2.0: The policy has expired.
//
#define STATUS_TPM_20_E_EXPIRED          ((NTSTATUS)0xC02900A3L)

//
// MessageId: STATUS_TPM_20_E_POLICY_CC
//
// MessageText:
//
// TPM 2.0: The command code in the policy is not the command code of the command or the command code in a policy command references a command that is not implemented.
//
#define STATUS_TPM_20_E_POLICY_CC        ((NTSTATUS)0xC02900A4L)

//
// MessageId: STATUS_TPM_20_E_BINDING
//
// MessageText:
//
// TPM 2.0: Public and sensitive portions of an object are not cryptographically bound.
//
#define STATUS_TPM_20_E_BINDING          ((NTSTATUS)0xC02900A5L)

//
// MessageId: STATUS_TPM_20_E_CURVE
//
// MessageText:
//
// TPM 2.0: Curve not supported.
//
#define STATUS_TPM_20_E_CURVE            ((NTSTATUS)0xC02900A6L)

//
// MessageId: STATUS_TPM_20_E_ECC_POINT
//
// MessageText:
//
// TPM 2.0: Point is not on the required curve.
//
#define STATUS_TPM_20_E_ECC_POINT        ((NTSTATUS)0xC02900A7L)

//
// MessageId: STATUS_TPM_20_E_INITIALIZE
//
// MessageText:
//
// TPM 2.0: TPM not initialized.
//
#define STATUS_TPM_20_E_INITIALIZE       ((NTSTATUS)0xC0290100L)

//
// MessageId: STATUS_TPM_20_E_FAILURE
//
// MessageText:
//
// TPM 2.0: Commands not being accepted because of a TPM failure.
//
#define STATUS_TPM_20_E_FAILURE          ((NTSTATUS)0xC0290101L)

//
// MessageId: STATUS_TPM_20_E_SEQUENCE
//
// MessageText:
//
// TPM 2.0: Improper use of a sequence handle.
//
#define STATUS_TPM_20_E_SEQUENCE         ((NTSTATUS)0xC0290103L)

//
// MessageId: STATUS_TPM_20_E_PRIVATE
//
// MessageText:
//
// TPM 2.0: TPM_RC_PRIVATE error.
//
#define STATUS_TPM_20_E_PRIVATE          ((NTSTATUS)0xC029010BL)

//
// MessageId: STATUS_TPM_20_E_HMAC
//
// MessageText:
//
// TPM 2.0: TPM_RC_HMAC.
//
#define STATUS_TPM_20_E_HMAC             ((NTSTATUS)0xC0290119L)

//
// MessageId: STATUS_TPM_20_E_DISABLED
//
// MessageText:
//
// TPM 2.0: TPM_RC_DISABLED.
//
#define STATUS_TPM_20_E_DISABLED         ((NTSTATUS)0xC0290120L)

//
// MessageId: STATUS_TPM_20_E_EXCLUSIVE
//
// MessageText:
//
// TPM 2.0: Command failed because audit sequence required exclusivity.
//
#define STATUS_TPM_20_E_EXCLUSIVE        ((NTSTATUS)0xC0290121L)

//
// MessageId: STATUS_TPM_20_E_ECC_CURVE
//
// MessageText:
//
// TPM 2.0: Unsupported ECC curve.
//
#define STATUS_TPM_20_E_ECC_CURVE        ((NTSTATUS)0xC0290123L)

//
// MessageId: STATUS_TPM_20_E_AUTH_TYPE
//
// MessageText:
//
// TPM 2.0: Authorization handle is not correct for command.
//
#define STATUS_TPM_20_E_AUTH_TYPE        ((NTSTATUS)0xC0290124L)

//
// MessageId: STATUS_TPM_20_E_AUTH_MISSING
//
// MessageText:
//
// TPM 2.0: Command requires an authorization session for handle and is not present.
//
#define STATUS_TPM_20_E_AUTH_MISSING     ((NTSTATUS)0xC0290125L)

//
// MessageId: STATUS_TPM_20_E_POLICY
//
// MessageText:
//
// TPM 2.0: Policy failure in Math Operation or an invalid authPolicy value.
//
#define STATUS_TPM_20_E_POLICY           ((NTSTATUS)0xC0290126L)

//
// MessageId: STATUS_TPM_20_E_PCR
//
// MessageText:
//
// TPM 2.0: PCR check fail.
//
#define STATUS_TPM_20_E_PCR              ((NTSTATUS)0xC0290127L)

//
// MessageId: STATUS_TPM_20_E_PCR_CHANGED
//
// MessageText:
//
// TPM 2.0: PCR have changed since checked.
//
#define STATUS_TPM_20_E_PCR_CHANGED      ((NTSTATUS)0xC0290128L)

//
// MessageId: STATUS_TPM_20_E_UPGRADE
//
// MessageText:
//
// TPM 2.0: The TPM is not in the right mode for upgrade.
//
#define STATUS_TPM_20_E_UPGRADE          ((NTSTATUS)0xC029012DL)

//
// MessageId: STATUS_TPM_20_E_TOO_MANY_CONTEXTS
//
// MessageText:
//
// TPM 2.0: Context ID counter is at maximum.
//
#define STATUS_TPM_20_E_TOO_MANY_CONTEXTS ((NTSTATUS)0xC029012EL)

//
// MessageId: STATUS_TPM_20_E_AUTH_UNAVAILABLE
//
// MessageText:
//
// TPM 2.0: authValue or authPolicy is not available for selected entity.
//
#define STATUS_TPM_20_E_AUTH_UNAVAILABLE ((NTSTATUS)0xC029012FL)

//
// MessageId: STATUS_TPM_20_E_REBOOT
//
// MessageText:
//
// TPM 2.0: A _TPM_Init and Startup(CLEAR) is required before the TPM can resume operation.
//
#define STATUS_TPM_20_E_REBOOT           ((NTSTATUS)0xC0290130L)

//
// MessageId: STATUS_TPM_20_E_UNBALANCED
//
// MessageText:
//
// TPM 2.0: The protection algorithms (hash and symmetric) are not reasonably balanced. The digest size of the hash must be larger than the key size of the symmetric algorithm.
//
#define STATUS_TPM_20_E_UNBALANCED       ((NTSTATUS)0xC0290131L)

//
// MessageId: STATUS_TPM_20_E_COMMAND_SIZE
//
// MessageText:
//
// TPM 2.0: The TPM command's commandSize value is inconsistent with contents of the command buffer; either the size is not the same as the bytes loaded by the hardware interface layer or the value is not large enough to hold a command header.
//
#define STATUS_TPM_20_E_COMMAND_SIZE     ((NTSTATUS)0xC0290142L)

//
// MessageId: STATUS_TPM_20_E_COMMAND_CODE
//
// MessageText:
//
// TPM 2.0: Command code not supported.
//
#define STATUS_TPM_20_E_COMMAND_CODE     ((NTSTATUS)0xC0290143L)

//
// MessageId: STATUS_TPM_20_E_AUTHSIZE
//
// MessageText:
//
// TPM 2.0: The value of authorizationSize is out of range or the number of octets in the authorization Area is greater than required.
//
#define STATUS_TPM_20_E_AUTHSIZE         ((NTSTATUS)0xC0290144L)

//
// MessageId: STATUS_TPM_20_E_AUTH_CONTEXT
//
// MessageText:
//
// TPM 2.0: Use of an authorization session with a context command or another command that cannot have an authorization session.
//
#define STATUS_TPM_20_E_AUTH_CONTEXT     ((NTSTATUS)0xC0290145L)

//
// MessageId: STATUS_TPM_20_E_NV_RANGE
//
// MessageText:
//
// TPM 2.0: NV offset+size is out of range.
//
#define STATUS_TPM_20_E_NV_RANGE         ((NTSTATUS)0xC0290146L)

//
// MessageId: STATUS_TPM_20_E_NV_SIZE
//
// MessageText:
//
// TPM 2.0: Requested allocation size is larger than allowed.
//
#define STATUS_TPM_20_E_NV_SIZE          ((NTSTATUS)0xC0290147L)

//
// MessageId: STATUS_TPM_20_E_NV_LOCKED
//
// MessageText:
//
// TPM 2.0: NV access locked.
//
#define STATUS_TPM_20_E_NV_LOCKED        ((NTSTATUS)0xC0290148L)

//
// MessageId: STATUS_TPM_20_E_NV_AUTHORIZATION
//
// MessageText:
//
// TPM 2.0: NV access authorization fails in command actions
//
#define STATUS_TPM_20_E_NV_AUTHORIZATION ((NTSTATUS)0xC0290149L)

//
// MessageId: STATUS_TPM_20_E_NV_UNINITIALIZED
//
// MessageText:
//
// TPM 2.0: An NV index is used before being initialized or the state saved by TPM2_Shutdown(STATE) could not be restored.
//
#define STATUS_TPM_20_E_NV_UNINITIALIZED ((NTSTATUS)0xC029014AL)

//
// MessageId: STATUS_TPM_20_E_NV_SPACE
//
// MessageText:
//
// TPM 2.0: Insufficient space for NV allocation.
//
#define STATUS_TPM_20_E_NV_SPACE         ((NTSTATUS)0xC029014BL)

//
// MessageId: STATUS_TPM_20_E_NV_DEFINED
//
// MessageText:
//
// TPM 2.0: NV index or persistent object already defined.
//
#define STATUS_TPM_20_E_NV_DEFINED       ((NTSTATUS)0xC029014CL)

//
// MessageId: STATUS_TPM_20_E_BAD_CONTEXT
//
// MessageText:
//
// TPM 2.0: Context in TPM2_ContextLoad() is not valid.
//
#define STATUS_TPM_20_E_BAD_CONTEXT      ((NTSTATUS)0xC0290150L)

//
// MessageId: STATUS_TPM_20_E_CPHASH
//
// MessageText:
//
// TPM 2.0: chHash value already set or not correct for use.
//
#define STATUS_TPM_20_E_CPHASH           ((NTSTATUS)0xC0290151L)

//
// MessageId: STATUS_TPM_20_E_PARENT
//
// MessageText:
//
// TPM 2.0: Handle for parent is not a valid parent.
//
#define STATUS_TPM_20_E_PARENT           ((NTSTATUS)0xC0290152L)

//
// MessageId: STATUS_TPM_20_E_NEEDS_TEST
//
// MessageText:
//
// TPM 2.0: Some function needs testing.
//
#define STATUS_TPM_20_E_NEEDS_TEST       ((NTSTATUS)0xC0290153L)

//
// MessageId: STATUS_TPM_20_E_NO_RESULT
//
// MessageText:
//
// TPM 2.0: returned when an internal function cannot process a request due to an unspecified problem. This code is usually related to invalid parameters that are not properly filtered by the input unmarshaling code.
//
#define STATUS_TPM_20_E_NO_RESULT        ((NTSTATUS)0xC0290154L)

//
// MessageId: STATUS_TPM_20_E_SENSITIVE
//
// MessageText:
//
// TPM 2.0: The sensitive area did not unmarshal correctly after decryption - this code is used in lieu of the other unmarshaling errors so that an attacker cannot determine where the unmarshaling error occurred.
//
#define STATUS_TPM_20_E_SENSITIVE        ((NTSTATUS)0xC0290155L)

//
// TPM vendor specific hardware errors {0x0400..0x04ff}
//
//
// MessageId: STATUS_TPM_COMMAND_BLOCKED
//
// MessageText:
//
// The command was blocked.
//
#define STATUS_TPM_COMMAND_BLOCKED       ((NTSTATUS)0xC0290400L)

//
// MessageId: STATUS_TPM_INVALID_HANDLE
//
// MessageText:
//
// The specified handle was not found.
//
#define STATUS_TPM_INVALID_HANDLE        ((NTSTATUS)0xC0290401L)

//
// MessageId: STATUS_TPM_DUPLICATE_VHANDLE
//
// MessageText:
//
// The TPM returned a duplicate handle and the command needs to be resubmitted.
//
#define STATUS_TPM_DUPLICATE_VHANDLE     ((NTSTATUS)0xC0290402L)

//
// MessageId: STATUS_TPM_EMBEDDED_COMMAND_BLOCKED
//
// MessageText:
//
// The command within the transport was blocked.
//
#define STATUS_TPM_EMBEDDED_COMMAND_BLOCKED ((NTSTATUS)0xC0290403L)

//
// MessageId: STATUS_TPM_EMBEDDED_COMMAND_UNSUPPORTED
//
// MessageText:
//
// The command within the transport is not supported.
//
#define STATUS_TPM_EMBEDDED_COMMAND_UNSUPPORTED ((NTSTATUS)0xC0290404L)

//
// TPM non-fatal hardware errors {0x0800..0x08ff}
//
//
// MessageId: STATUS_TPM_RETRY
//
// MessageText:
//
// The TPM is too busy to respond to the command immediately, but the command could be resubmitted at a later time.
//
#define STATUS_TPM_RETRY                 ((NTSTATUS)0xC0290800L)

//
// MessageId: STATUS_TPM_NEEDS_SELFTEST
//
// MessageText:
//
// SelfTestFull has not been run.
//
#define STATUS_TPM_NEEDS_SELFTEST        ((NTSTATUS)0xC0290801L)

//
// MessageId: STATUS_TPM_DOING_SELFTEST
//
// MessageText:
//
// The TPM is currently executing a full selftest.
//
#define STATUS_TPM_DOING_SELFTEST        ((NTSTATUS)0xC0290802L)

//
// MessageId: STATUS_TPM_DEFEND_LOCK_RUNNING
//
// MessageText:
//
// The TPM is defending against dictionary attacks and is in a time-out period.
//
#define STATUS_TPM_DEFEND_LOCK_RUNNING   ((NTSTATUS)0xC0290803L)


//
// TPM software Error codes (tpm.sys)
//

//
// MessageId: STATUS_TPM_COMMAND_CANCELED
//
// MessageText:
//
// The command was cancelled.
//
#define STATUS_TPM_COMMAND_CANCELED      ((NTSTATUS)0xC0291001L)

//
// MessageId: STATUS_TPM_TOO_MANY_CONTEXTS
//
// MessageText:
//
// A new TPM context could not be created because there are too many open contexts.
//
#define STATUS_TPM_TOO_MANY_CONTEXTS     ((NTSTATUS)0xC0291002L)

//
// MessageId: STATUS_TPM_NOT_FOUND
//
// MessageText:
//
// TPM driver is not compatible with the version of TPM found on the system.
//
#define STATUS_TPM_NOT_FOUND             ((NTSTATUS)0xC0291003L)

//
// MessageId: STATUS_TPM_ACCESS_DENIED
//
// MessageText:
//
// The caller does not have the appropriate rights to perform the requested operation.
//
#define STATUS_TPM_ACCESS_DENIED         ((NTSTATUS)0xC0291004L)

//
// MessageId: STATUS_TPM_INSUFFICIENT_BUFFER
//
// MessageText:
//
// The caller does not have the appropriate rights to perform the requested operation.
//
#define STATUS_TPM_INSUFFICIENT_BUFFER   ((NTSTATUS)0xC0291005L)

//
// MessageId: STATUS_TPM_PPI_FUNCTION_UNSUPPORTED
//
// MessageText:
//
// The Physical Presence Interface of this firmware does not support the requested method.
//
#define STATUS_TPM_PPI_FUNCTION_UNSUPPORTED ((NTSTATUS)0xC0291006L)


//
// Platform Crypto Provider Error Codes (PCPKSP.dll and future platform crypto providers)
//

//
// MessageId: STATUS_PCP_ERROR_MASK
//
// MessageText:
//
// This is an error mask to convert Platform Crypto Provider errors to win errors.
//
#define STATUS_PCP_ERROR_MASK            ((NTSTATUS)0xC0292000L)

//
// MessageId: STATUS_PCP_DEVICE_NOT_READY
//
// MessageText:
//
// The Platform Crypto Device is currently not ready. It needs to be fully provisioned to be operational.
//
#define STATUS_PCP_DEVICE_NOT_READY      ((NTSTATUS)0xC0292001L)

//
// MessageId: STATUS_PCP_INVALID_HANDLE
//
// MessageText:
//
// The handle provided to the Platform Crypto Provider is invalid.
//
#define STATUS_PCP_INVALID_HANDLE        ((NTSTATUS)0xC0292002L)

//
// MessageId: STATUS_PCP_INVALID_PARAMETER
//
// MessageText:
//
// A parameter provided to the Platform Crypto Provider is invalid.
//
#define STATUS_PCP_INVALID_PARAMETER     ((NTSTATUS)0xC0292003L)

//
// MessageId: STATUS_PCP_FLAG_NOT_SUPPORTED
//
// MessageText:
//
// A provided flag to the Platform Crypto Provider is not supported.
//
#define STATUS_PCP_FLAG_NOT_SUPPORTED    ((NTSTATUS)0xC0292004L)

//
// MessageId: STATUS_PCP_NOT_SUPPORTED
//
// MessageText:
//
// The requested operation is not supported by this Platform Crypto Provider.
//
#define STATUS_PCP_NOT_SUPPORTED         ((NTSTATUS)0xC0292005L)

//
// MessageId: STATUS_PCP_BUFFER_TOO_SMALL
//
// MessageText:
//
// The buffer is too small to contain all data. No information has been written to the buffer.
//
#define STATUS_PCP_BUFFER_TOO_SMALL      ((NTSTATUS)0xC0292006L)

//
// MessageId: STATUS_PCP_INTERNAL_ERROR
//
// MessageText:
//
// An unexpected internal error has occurred in the Platform Crypto Provider.
//
#define STATUS_PCP_INTERNAL_ERROR        ((NTSTATUS)0xC0292007L)

//
// MessageId: STATUS_PCP_AUTHENTICATION_FAILED
//
// MessageText:
//
// The authorization to use a provider object has failed.
//
#define STATUS_PCP_AUTHENTICATION_FAILED ((NTSTATUS)0xC0292008L)

//
// MessageId: STATUS_PCP_AUTHENTICATION_IGNORED
//
// MessageText:
//
// The Platform Crypto Device has ignored the authorization for the provider object, to mitigate against a dictionary attack.
//
#define STATUS_PCP_AUTHENTICATION_IGNORED ((NTSTATUS)0xC0292009L)

//
// MessageId: STATUS_PCP_POLICY_NOT_FOUND
//
// MessageText:
//
// The referenced policy was not found.
//
#define STATUS_PCP_POLICY_NOT_FOUND      ((NTSTATUS)0xC029200AL)

//
// MessageId: STATUS_PCP_PROFILE_NOT_FOUND
//
// MessageText:
//
// The referenced profile was not found.
//
#define STATUS_PCP_PROFILE_NOT_FOUND     ((NTSTATUS)0xC029200BL)

//
// MessageId: STATUS_PCP_VALIDATION_FAILED
//
// MessageText:
//
// The validation was not successful.
//
#define STATUS_PCP_VALIDATION_FAILED     ((NTSTATUS)0xC029200CL)

//
// MessageId: STATUS_PCP_DEVICE_NOT_FOUND
//
// MessageText:
//
// A Platform Crypto Device was not found.  Operations that require a Platform Crypto Device will not be submitted.
//
#define STATUS_PCP_DEVICE_NOT_FOUND      ((NTSTATUS)0xC029200DL)

//
// MessageId: STATUS_PCP_WRONG_PARENT
//
// MessageText:
//
// An attempt was made to import or load a key under an incorrect storage parent.
//
#define STATUS_PCP_WRONG_PARENT          ((NTSTATUS)0xC029200EL)

//
// MessageId: STATUS_PCP_KEY_NOT_LOADED
//
// MessageText:
//
// The TPM key is not loaded.
//
#define STATUS_PCP_KEY_NOT_LOADED        ((NTSTATUS)0xC029200FL)

//
// MessageId: STATUS_PCP_NO_KEY_CERTIFICATION
//
// MessageText:
//
// The TPM key certification has not been generated.
//
#define STATUS_PCP_NO_KEY_CERTIFICATION  ((NTSTATUS)0xC0292010L)

//
// MessageId: STATUS_PCP_KEY_NOT_FINALIZED
//
// MessageText:
//
// The TPM key is not yet finalized.
//
#define STATUS_PCP_KEY_NOT_FINALIZED     ((NTSTATUS)0xC0292011L)

//
// MessageId: STATUS_PCP_ATTESTATION_CHALLENGE_NOT_SET
//
// MessageText:
//
// The TPM attestation challenge is not set.
//
#define STATUS_PCP_ATTESTATION_CHALLENGE_NOT_SET ((NTSTATUS)0xC0292012L)

//
// MessageId: STATUS_PCP_NOT_PCR_BOUND
//
// MessageText:
//
// The TPM key is not bound to PCR info.
//
#define STATUS_PCP_NOT_PCR_BOUND         ((NTSTATUS)0xC0292013L)

//
// MessageId: STATUS_PCP_KEY_ALREADY_FINALIZED
//
// MessageText:
//
// The TPM key is already finalized.
//
#define STATUS_PCP_KEY_ALREADY_FINALIZED ((NTSTATUS)0xC0292014L)

//
// MessageId: STATUS_PCP_KEY_USAGE_POLICY_NOT_SUPPORTED
//
// MessageText:
//
// The TPM key usage policy is not supported.
//
#define STATUS_PCP_KEY_USAGE_POLICY_NOT_SUPPORTED ((NTSTATUS)0xC0292015L)

//
// MessageId: STATUS_PCP_KEY_USAGE_POLICY_INVALID
//
// MessageText:
//
// The TPM key usage policy is invalid.
//
#define STATUS_PCP_KEY_USAGE_POLICY_INVALID ((NTSTATUS)0xC0292016L)

//
// MessageId: STATUS_PCP_SOFT_KEY_ERROR
//
// MessageText:
//
// There was a problem with the software key being imported into the TPM.
//
#define STATUS_PCP_SOFT_KEY_ERROR        ((NTSTATUS)0xC0292017L)

//
// MessageId: STATUS_PCP_KEY_NOT_AUTHENTICATED
//
// MessageText:
//
// The TPM key is not authenticated.
//
#define STATUS_PCP_KEY_NOT_AUTHENTICATED ((NTSTATUS)0xC0292018L)

//
// MessageId: STATUS_PCP_KEY_NOT_AIK
//
// MessageText:
//
// The TPM key is not an AIK.
//
#define STATUS_PCP_KEY_NOT_AIK           ((NTSTATUS)0xC0292019L)

//
// MessageId: STATUS_PCP_KEY_NOT_SIGNING_KEY
//
// MessageText:
//
// The TPM key is not a signing key.
//
#define STATUS_PCP_KEY_NOT_SIGNING_KEY   ((NTSTATUS)0xC029201AL)

//
// MessageId: STATUS_PCP_LOCKED_OUT
//
// MessageText:
//
// The TPM is locked out.
//
#define STATUS_PCP_LOCKED_OUT            ((NTSTATUS)0xC029201BL)

//
// MessageId: STATUS_PCP_CLAIM_TYPE_NOT_SUPPORTED
//
// MessageText:
//
// The claim type requested is not supported.
//
#define STATUS_PCP_CLAIM_TYPE_NOT_SUPPORTED ((NTSTATUS)0xC029201CL)

//
// MessageId: STATUS_PCP_TPM_VERSION_NOT_SUPPORTED
//
// MessageText:
//
// The current TPM version is not supported.
//
#define STATUS_PCP_TPM_VERSION_NOT_SUPPORTED ((NTSTATUS)0xC029201DL)

//
// MessageId: STATUS_PCP_BUFFER_LENGTH_MISMATCH
//
// MessageText:
//
// The buffer lengths do not match.
//
#define STATUS_PCP_BUFFER_LENGTH_MISMATCH ((NTSTATUS)0xC029201EL)

//
// MessageId: STATUS_PCP_IFX_RSA_KEY_CREATION_BLOCKED
//
// MessageText:
//
// The RSA key creation is blocked on this TPM due to known security vulnerabilities.
//
#define STATUS_PCP_IFX_RSA_KEY_CREATION_BLOCKED ((NTSTATUS)0xC029201FL)

//
// MessageId: STATUS_PCP_TICKET_MISSING
//
// MessageText:
//
// A ticket required to use a key was not provided.
//
#define STATUS_PCP_TICKET_MISSING        ((NTSTATUS)0xC0292020L)

//
// MessageId: STATUS_PCP_RAW_POLICY_NOT_SUPPORTED
//
// MessageText:
//
// This key has a raw policy so the KSP can't authenticate against it.
//
#define STATUS_PCP_RAW_POLICY_NOT_SUPPORTED ((NTSTATUS)0xC0292021L)

//
// MessageId: STATUS_PCP_KEY_HANDLE_INVALIDATED
//
// MessageText:
//
// The TPM key's handle was unexpectedly invalidated due to a hardware or firmware issue.
//
#define STATUS_PCP_KEY_HANDLE_INVALIDATED ((NTSTATUS)0xC0292022L)

//
// MessageId: STATUS_PCP_UNSUPPORTED_PSS_SALT
//
// MessageText:
//
// The requested salt size for signing with RSAPSS does not match what the TPM uses.
//
#define STATUS_PCP_UNSUPPORTED_PSS_SALT  ((NTSTATUS)0x40292023L)


//
// Remote TPM Error Codes
//

//
// MessageId: STATUS_RTPM_CONTEXT_CONTINUE
//
// MessageText:
//
// The remote TPM context exchange is not complete. The context should be transported to the target and continued.
//
#define STATUS_RTPM_CONTEXT_CONTINUE     ((NTSTATUS)0x00293000L)

//
// MessageId: STATUS_RTPM_CONTEXT_COMPLETE
//
// MessageText:
//
// The remote TPM operation is complete.
//
#define STATUS_RTPM_CONTEXT_COMPLETE     ((NTSTATUS)0x00293001L)

//
// MessageId: STATUS_RTPM_NO_RESULT
//
// MessageText:
//
// No result associated with this instance exists.
//
#define STATUS_RTPM_NO_RESULT            ((NTSTATUS)0xC0293002L)

//
// MessageId: STATUS_RTPM_PCR_READ_INCOMPLETE
//
// MessageText:
//
// The TPM returned incomplete PCR results. This maybe due to an unsupported selection set. Attempt the read again with a different selection set.
//
#define STATUS_RTPM_PCR_READ_INCOMPLETE  ((NTSTATUS)0xC0293003L)

//
// MessageId: STATUS_RTPM_INVALID_CONTEXT
//
// MessageText:
//
// The rTPM context has been corrupted. The rTPM operation must be restarted.
//
#define STATUS_RTPM_INVALID_CONTEXT      ((NTSTATUS)0xC0293004L)

//
// MessageId: STATUS_RTPM_UNSUPPORTED_CMD
//
// MessageText:
//
// The rTPM target does not support remote processing of the specified TPM command.
//
#define STATUS_RTPM_UNSUPPORTED_CMD      ((NTSTATUS)0xC0293005L)


//
// Misc TPM Error Codes
//

//
// MessageId: STATUS_TPM_ZERO_EXHAUST_ENABLED
//
// MessageText:
//
// TPM related network operations are blocked as Zero Exhaust mode is enabled on client.
//
#define STATUS_TPM_ZERO_EXHAUST_ENABLED  ((NTSTATUS)0xC0294000L)

//
// Hypervisor error codes - changes to these codes must be reflected in HvStatus.h
//

//
// MessageId: STATUS_HV_INVALID_HYPERCALL_CODE
//
// MessageText:
//
// The hypervisor does not support the operation because the specified hypercall code is not supported.
//
#define STATUS_HV_INVALID_HYPERCALL_CODE ((NTSTATUS)0xC0350002L)

//
// MessageId: STATUS_HV_INVALID_HYPERCALL_INPUT
//
// MessageText:
//
// The hypervisor does not support the operation because the encoding for the hypercall input register is not supported.
//
#define STATUS_HV_INVALID_HYPERCALL_INPUT ((NTSTATUS)0xC0350003L)

//
// MessageId: STATUS_HV_INVALID_ALIGNMENT
//
// MessageText:
//
// The hypervisor could not perform the operation because a parameter has an invalid alignment.
//
#define STATUS_HV_INVALID_ALIGNMENT      ((NTSTATUS)0xC0350004L)

//
// MessageId: STATUS_HV_INVALID_PARAMETER
//
// MessageText:
//
// The hypervisor could not perform the operation because an invalid parameter was specified.
//
#define STATUS_HV_INVALID_PARAMETER      ((NTSTATUS)0xC0350005L)

//
// MessageId: STATUS_HV_ACCESS_DENIED
//
// MessageText:
//
// Access to the specified object was denied.
//
#define STATUS_HV_ACCESS_DENIED          ((NTSTATUS)0xC0350006L)

//
// MessageId: STATUS_HV_INVALID_PARTITION_STATE
//
// MessageText:
//
// The hypervisor could not perform the operation because the partition is entering or in an invalid state.
//
#define STATUS_HV_INVALID_PARTITION_STATE ((NTSTATUS)0xC0350007L)

//
// MessageId: STATUS_HV_OPERATION_DENIED
//
// MessageText:
//
// The operation is not allowed in the current state.
//
#define STATUS_HV_OPERATION_DENIED       ((NTSTATUS)0xC0350008L)

//
// MessageId: STATUS_HV_UNKNOWN_PROPERTY
//
// MessageText:
//
// The hypervisor does not recognize the specified partition property.
//
#define STATUS_HV_UNKNOWN_PROPERTY       ((NTSTATUS)0xC0350009L)

//
// MessageId: STATUS_HV_PROPERTY_VALUE_OUT_OF_RANGE
//
// MessageText:
//
// The specified value of a partition property is out of range or violates an invariant.
//
#define STATUS_HV_PROPERTY_VALUE_OUT_OF_RANGE ((NTSTATUS)0xC035000AL)

//
// MessageId: STATUS_HV_INSUFFICIENT_MEMORY
//
// MessageText:
//
// There is not enough memory in the hypervisor pool to complete the operation.
//
#define STATUS_HV_INSUFFICIENT_MEMORY    ((NTSTATUS)0xC035000BL)

//
// MessageId: STATUS_HV_PARTITION_TOO_DEEP
//
// MessageText:
//
// The maximum partition depth has been exceeded for the partition hierarchy.
//
#define STATUS_HV_PARTITION_TOO_DEEP     ((NTSTATUS)0xC035000CL)

//
// MessageId: STATUS_HV_INVALID_PARTITION_ID
//
// MessageText:
//
// A partition with the specified partition Id does not exist.
//
#define STATUS_HV_INVALID_PARTITION_ID   ((NTSTATUS)0xC035000DL)

//
// MessageId: STATUS_HV_INVALID_VP_INDEX
//
// MessageText:
//
// The hypervisor could not perform the operation because the specified VP index is invalid.
//
#define STATUS_HV_INVALID_VP_INDEX       ((NTSTATUS)0xC035000EL)

//
// MessageId: STATUS_HV_INVALID_PORT_ID
//
// MessageText:
//
// The hypervisor could not perform the operation because the specified port identifier is invalid.
//
#define STATUS_HV_INVALID_PORT_ID        ((NTSTATUS)0xC0350011L)

//
// MessageId: STATUS_HV_INVALID_CONNECTION_ID
//
// MessageText:
//
// The hypervisor could not perform the operation because the specified connection identifier is invalid.
//
#define STATUS_HV_INVALID_CONNECTION_ID  ((NTSTATUS)0xC0350012L)

//
// MessageId: STATUS_HV_INSUFFICIENT_BUFFERS
//
// MessageText:
//
// Not enough buffers were supplied to send a message.
//
#define STATUS_HV_INSUFFICIENT_BUFFERS   ((NTSTATUS)0xC0350013L)

//
// MessageId: STATUS_HV_NOT_ACKNOWLEDGED
//
// MessageText:
//
// The previous virtual interrupt has not been acknowledged.
//
#define STATUS_HV_NOT_ACKNOWLEDGED       ((NTSTATUS)0xC0350014L)

//
// MessageId: STATUS_HV_INVALID_VP_STATE
//
// MessageText:
//
// A virtual processor is not in the correct state for the indicated operation.
//
#define STATUS_HV_INVALID_VP_STATE       ((NTSTATUS)0xC0350015L)

//
// MessageId: STATUS_HV_ACKNOWLEDGED
//
// MessageText:
//
// The previous virtual interrupt has already been acknowledged.
//
#define STATUS_HV_ACKNOWLEDGED           ((NTSTATUS)0xC0350016L)

//
// MessageId: STATUS_HV_INVALID_SAVE_RESTORE_STATE
//
// MessageText:
//
// The indicated partition is not in a valid state for saving or restoring.
//
#define STATUS_HV_INVALID_SAVE_RESTORE_STATE ((NTSTATUS)0xC0350017L)

//
// MessageId: STATUS_HV_INVALID_SYNIC_STATE
//
// MessageText:
//
// The hypervisor could not complete the operation because a required feature of the synthetic interrupt controller (SynIC) was disabled.
//
#define STATUS_HV_INVALID_SYNIC_STATE    ((NTSTATUS)0xC0350018L)

//
// MessageId: STATUS_HV_OBJECT_IN_USE
//
// MessageText:
//
// The hypervisor could not perform the operation because the object or value was either already in use or being used for a purpose that would not permit completing the operation.
//
#define STATUS_HV_OBJECT_IN_USE          ((NTSTATUS)0xC0350019L)

//
// MessageId: STATUS_HV_INVALID_PROXIMITY_DOMAIN_INFO
//
// MessageText:
//
// The proximity domain information is invalid.
//
#define STATUS_HV_INVALID_PROXIMITY_DOMAIN_INFO ((NTSTATUS)0xC035001AL)

//
// MessageId: STATUS_HV_NO_DATA
//
// MessageText:
//
// An attempt to retrieve debugging data failed because none was available.
//
#define STATUS_HV_NO_DATA                ((NTSTATUS)0xC035001BL)

//
// MessageId: STATUS_HV_INACTIVE
//
// MessageText:
//
// The physical connection being used for debugging has not recorded any receive activity since the last operation.
//
#define STATUS_HV_INACTIVE               ((NTSTATUS)0xC035001CL)

//
// MessageId: STATUS_HV_NO_RESOURCES
//
// MessageText:
//
// There are not enough resources to complete the operation.
//
#define STATUS_HV_NO_RESOURCES           ((NTSTATUS)0xC035001DL)

//
// MessageId: STATUS_HV_FEATURE_UNAVAILABLE
//
// MessageText:
//
// A hypervisor feature is not available to the user.
//
#define STATUS_HV_FEATURE_UNAVAILABLE    ((NTSTATUS)0xC035001EL)

//
// MessageId: STATUS_HV_INSUFFICIENT_BUFFER
//
// MessageText:
//
// The specified buffer was too small to contain all of the requested data.
//
#define STATUS_HV_INSUFFICIENT_BUFFER    ((NTSTATUS)0xC0350033L)

//
// MessageId: STATUS_HV_INSUFFICIENT_DEVICE_DOMAINS
//
// MessageText:
//
// The maximum number of domains supported by the platform I/O remapping hardware is currently in use. No domains are available to assign this device to this partition.
//
#define STATUS_HV_INSUFFICIENT_DEVICE_DOMAINS ((NTSTATUS)0xC0350038L)

//
// MessageId: STATUS_HV_CPUID_FEATURE_VALIDATION_ERROR
//
// MessageText:
//
// Validation of CPUID data of the processor failed.
//
#define STATUS_HV_CPUID_FEATURE_VALIDATION_ERROR ((NTSTATUS)0xC035003CL)

//
// MessageId: STATUS_HV_CPUID_XSAVE_FEATURE_VALIDATION_ERROR
//
// MessageText:
//
// Validation of XSAVE CPUID data of the processor failed.
//
#define STATUS_HV_CPUID_XSAVE_FEATURE_VALIDATION_ERROR ((NTSTATUS)0xC035003DL)

//
// MessageId: STATUS_HV_PROCESSOR_STARTUP_TIMEOUT
//
// MessageText:
//
// Processor did not respond within the timeout period.
//
#define STATUS_HV_PROCESSOR_STARTUP_TIMEOUT ((NTSTATUS)0xC035003EL)

//
// MessageId: STATUS_HV_SMX_ENABLED
//
// MessageText:
//
// SMX has been enabled in the BIOS.
//
#define STATUS_HV_SMX_ENABLED            ((NTSTATUS)0xC035003FL)

//
// MessageId: STATUS_HV_INVALID_LP_INDEX
//
// MessageText:
//
// The hypervisor could not perform the operation because the specified LP index is invalid.
//
#define STATUS_HV_INVALID_LP_INDEX       ((NTSTATUS)0xC0350041L)

//
// MessageId: STATUS_HV_INVALID_REGISTER_VALUE
//
// MessageText:
//
// The supplied register value is invalid.
//
#define STATUS_HV_INVALID_REGISTER_VALUE ((NTSTATUS)0xC0350050L)

//
// MessageId: STATUS_HV_INVALID_VTL_STATE
//
// MessageText:
//
// The supplied virtual trust level is not in the correct state to perform the requested operation.
//
#define STATUS_HV_INVALID_VTL_STATE      ((NTSTATUS)0xC0350051L)

//
// MessageId: STATUS_HV_NX_NOT_DETECTED
//
// MessageText:
//
// No execute feature (NX) is not present or not enabled in the BIOS.
//
#define STATUS_HV_NX_NOT_DETECTED        ((NTSTATUS)0xC0350055L)

//
// MessageId: STATUS_HV_INVALID_DEVICE_ID
//
// MessageText:
//
// The supplied device ID is invalid.
//
#define STATUS_HV_INVALID_DEVICE_ID      ((NTSTATUS)0xC0350057L)

//
// MessageId: STATUS_HV_INVALID_DEVICE_STATE
//
// MessageText:
//
// The operation is not allowed in the current device state.
//
#define STATUS_HV_INVALID_DEVICE_STATE   ((NTSTATUS)0xC0350058L)

//
// MessageId: STATUS_HV_PENDING_PAGE_REQUESTS
//
// MessageText:
//
// The device had pending page requests which were discarded.
//
#define STATUS_HV_PENDING_PAGE_REQUESTS  ((NTSTATUS)0x00350059L)

//
// MessageId: STATUS_HV_PAGE_REQUEST_INVALID
//
// MessageText:
//
// The supplied page request specifies a memory access that the guest does not have permissions to perform.
//
#define STATUS_HV_PAGE_REQUEST_INVALID   ((NTSTATUS)0xC0350060L)

//
// MessageId: STATUS_HV_INVALID_CPU_GROUP_ID
//
// MessageText:
//
// A CPU group with the specified CPU group Id does not exist.
//
#define STATUS_HV_INVALID_CPU_GROUP_ID   ((NTSTATUS)0xC035006FL)

//
// MessageId: STATUS_HV_INVALID_CPU_GROUP_STATE
//
// MessageText:
//
// The hypervisor could not perform the operation because the CPU group is entering or in an invalid state.
//
#define STATUS_HV_INVALID_CPU_GROUP_STATE ((NTSTATUS)0xC0350070L)

//
// MessageId: STATUS_HV_OPERATION_FAILED
//
// MessageText:
//
// The requested operation failed.
//
#define STATUS_HV_OPERATION_FAILED       ((NTSTATUS)0xC0350071L)

//
// MessageId: STATUS_HV_NOT_ALLOWED_WITH_NESTED_VIRT_ACTIVE
//
// MessageText:
//
// The hypervisor could not perform the operation because it is not allowed with nested virtualization active.
//
#define STATUS_HV_NOT_ALLOWED_WITH_NESTED_VIRT_ACTIVE ((NTSTATUS)0xC0350072L)

//
// MessageId: STATUS_HV_INSUFFICIENT_ROOT_MEMORY
//
// MessageText:
//
// There is not enough memory in the root partition's pool to complete the operation.
//
#define STATUS_HV_INSUFFICIENT_ROOT_MEMORY ((NTSTATUS)0xC0350073L)

//
// MessageId: STATUS_HV_EVENT_BUFFER_ALREADY_FREED
//
// MessageText:
//
// The provided event log buffer was already marked as freed.
//
#define STATUS_HV_EVENT_BUFFER_ALREADY_FREED ((NTSTATUS)0xC0350074L)

//
// MessageId: STATUS_HV_INSUFFICIENT_CONTIGUOUS_MEMORY
//
// MessageText:
//
// There is not enough contiguous memory in the partition's pool to complete the operation.
//
#define STATUS_HV_INSUFFICIENT_CONTIGUOUS_MEMORY ((NTSTATUS)0xC0350075L)

//
// MessageId: STATUS_HV_DEVICE_NOT_IN_DOMAIN
//
// MessageText:
//
// The device is not in a device domain.
//
#define STATUS_HV_DEVICE_NOT_IN_DOMAIN   ((NTSTATUS)0xC0350076L)

//
// MessageId: STATUS_HV_NESTED_VM_EXIT
//
// MessageText:
//
// The requested operation would result in a nested vm-exit.
//
#define STATUS_HV_NESTED_VM_EXIT         ((NTSTATUS)0xC0350077L)

//
// MessageId: STATUS_HV_CALL_PENDING
//
// MessageText:
//
// The operation that was requested is pending completion.
//
#define STATUS_HV_CALL_PENDING           ((NTSTATUS)0xC0350079L)

//
// MessageId: STATUS_HV_MSR_ACCESS_FAILED
//
// MessageText:
//
// The requested access to the model specific register failed.
//
#define STATUS_HV_MSR_ACCESS_FAILED      ((NTSTATUS)0xC0350080L)

//
// MessageId: STATUS_HV_NOT_PRESENT
//
// MessageText:
//
// No hypervisor is present on this system.
//
#define STATUS_HV_NOT_PRESENT            ((NTSTATUS)0xC0351000L)

//
// Virtualization status codes - these codes are used by the Virtualization Infrastructure Driver (VID) and other components
//                               of the virtualization stack.
//
//
// Errors:
//

//
// MessageId: STATUS_VID_DUPLICATE_HANDLER
//
// MessageText:
//
// The handler for the virtualization infrastructure driver is already registered. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_DUPLICATE_HANDLER     ((NTSTATUS)0xC0370001L)

//
// MessageId: STATUS_VID_TOO_MANY_HANDLERS
//
// MessageText:
//
// The number of registered handlers for the virtualization infrastructure driver exceeded the maximum. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_TOO_MANY_HANDLERS     ((NTSTATUS)0xC0370002L)

//
// MessageId: STATUS_VID_QUEUE_FULL
//
// MessageText:
//
// The message queue for the virtualization infrastructure driver is full and cannot accept new messages. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_QUEUE_FULL            ((NTSTATUS)0xC0370003L)

//
// MessageId: STATUS_VID_HANDLER_NOT_PRESENT
//
// MessageText:
//
// No handler exists to handle the message for the virtualization infrastructure driver. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_HANDLER_NOT_PRESENT   ((NTSTATUS)0xC0370004L)

//
// MessageId: STATUS_VID_INVALID_OBJECT_NAME
//
// MessageText:
//
// The name of the partition or message queue for the virtualization infrastructure driver is invalid. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_INVALID_OBJECT_NAME   ((NTSTATUS)0xC0370005L)

//
// MessageId: STATUS_VID_PARTITION_NAME_TOO_LONG
//
// MessageText:
//
// The partition name of the virtualization infrastructure driver exceeds the maximum.
//
#define STATUS_VID_PARTITION_NAME_TOO_LONG ((NTSTATUS)0xC0370006L)

//
// MessageId: STATUS_VID_MESSAGE_QUEUE_NAME_TOO_LONG
//
// MessageText:
//
// The message queue name of the virtualization infrastructure driver exceeds the maximum.
//
#define STATUS_VID_MESSAGE_QUEUE_NAME_TOO_LONG ((NTSTATUS)0xC0370007L)

//
// MessageId: STATUS_VID_PARTITION_ALREADY_EXISTS
//
// MessageText:
//
// Cannot create the partition for the virtualization infrastructure driver because another partition with the same name already exists.
//
#define STATUS_VID_PARTITION_ALREADY_EXISTS ((NTSTATUS)0xC0370008L)

//
// MessageId: STATUS_VID_PARTITION_DOES_NOT_EXIST
//
// MessageText:
//
// The virtualization infrastructure driver has encountered an error. The requested partition does not exist. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_PARTITION_DOES_NOT_EXIST ((NTSTATUS)0xC0370009L)

//
// MessageId: STATUS_VID_PARTITION_NAME_NOT_FOUND
//
// MessageText:
//
// The virtualization infrastructure driver has encountered an error. Could not find the requested partition. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_PARTITION_NAME_NOT_FOUND ((NTSTATUS)0xC037000AL)

//
// MessageId: STATUS_VID_MESSAGE_QUEUE_ALREADY_EXISTS
//
// MessageText:
//
// A message queue with the same name already exists for the virtualization infrastructure driver.
//
#define STATUS_VID_MESSAGE_QUEUE_ALREADY_EXISTS ((NTSTATUS)0xC037000BL)

//
// MessageId: STATUS_VID_EXCEEDED_MBP_ENTRY_MAP_LIMIT
//
// MessageText:
//
// The memory block page for the virtualization infrastructure driver cannot be mapped because the page map limit has been reached. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_EXCEEDED_MBP_ENTRY_MAP_LIMIT ((NTSTATUS)0xC037000CL)

//
// MessageId: STATUS_VID_MB_STILL_REFERENCED
//
// MessageText:
//
// The memory block for the virtualization infrastructure driver is still being used and cannot be destroyed.
//
#define STATUS_VID_MB_STILL_REFERENCED   ((NTSTATUS)0xC037000DL)

//
// MessageId: STATUS_VID_CHILD_GPA_PAGE_SET_CORRUPTED
//
// MessageText:
//
// Cannot unlock the page array for the guest operating system memory address because it does not match a previous lock request. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_CHILD_GPA_PAGE_SET_CORRUPTED ((NTSTATUS)0xC037000EL)

//
// MessageId: STATUS_VID_INVALID_NUMA_SETTINGS
//
// MessageText:
//
// The non-uniform memory access (NUMA) node settings do not match the system NUMA topology. In order to start the virtual machine, you will need to modify the NUMA configuration.
//
#define STATUS_VID_INVALID_NUMA_SETTINGS ((NTSTATUS)0xC037000FL)

//
// MessageId: STATUS_VID_INVALID_NUMA_NODE_INDEX
//
// MessageText:
//
// The non-uniform memory access (NUMA) node index does not match a valid index in the system NUMA topology.
//
#define STATUS_VID_INVALID_NUMA_NODE_INDEX ((NTSTATUS)0xC0370010L)

//
// MessageId: STATUS_VID_NOTIFICATION_QUEUE_ALREADY_ASSOCIATED
//
// MessageText:
//
// The memory block for the virtualization infrastructure driver is already associated with a message queue.
//
#define STATUS_VID_NOTIFICATION_QUEUE_ALREADY_ASSOCIATED ((NTSTATUS)0xC0370011L)

//
// MessageId: STATUS_VID_INVALID_MEMORY_BLOCK_HANDLE
//
// MessageText:
//
// The handle is not a valid memory block handle for the virtualization infrastructure driver.
//
#define STATUS_VID_INVALID_MEMORY_BLOCK_HANDLE ((NTSTATUS)0xC0370012L)

//
// MessageId: STATUS_VID_PAGE_RANGE_OVERFLOW
//
// MessageText:
//
// The request exceeded the memory block page limit for the virtualization infrastructure driver. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_PAGE_RANGE_OVERFLOW   ((NTSTATUS)0xC0370013L)

//
// MessageId: STATUS_VID_INVALID_MESSAGE_QUEUE_HANDLE
//
// MessageText:
//
// The handle is not a valid message queue handle for the virtualization infrastructure driver.
//
#define STATUS_VID_INVALID_MESSAGE_QUEUE_HANDLE ((NTSTATUS)0xC0370014L)

//
// MessageId: STATUS_VID_INVALID_GPA_RANGE_HANDLE
//
// MessageText:
//
// The handle is not a valid page range handle for the virtualization infrastructure driver.
//
#define STATUS_VID_INVALID_GPA_RANGE_HANDLE ((NTSTATUS)0xC0370015L)

//
// MessageId: STATUS_VID_NO_MEMORY_BLOCK_NOTIFICATION_QUEUE
//
// MessageText:
//
// Cannot install client notifications because no message queue for the virtualization infrastructure driver is associated with the memory block.
//
#define STATUS_VID_NO_MEMORY_BLOCK_NOTIFICATION_QUEUE ((NTSTATUS)0xC0370016L)

//
// MessageId: STATUS_VID_MEMORY_BLOCK_LOCK_COUNT_EXCEEDED
//
// MessageText:
//
// The request to lock or map a memory block page failed because the virtualization infrastructure driver memory block limit has been reached. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
// 
// 
//
#define STATUS_VID_MEMORY_BLOCK_LOCK_COUNT_EXCEEDED ((NTSTATUS)0xC0370017L)

//
// MessageId: STATUS_VID_INVALID_PPM_HANDLE
//
// MessageText:
//
// The handle is not a valid parent partition mapping handle for the virtualization infrastructure driver.
//
#define STATUS_VID_INVALID_PPM_HANDLE    ((NTSTATUS)0xC0370018L)

//
// MessageId: STATUS_VID_MBPS_ARE_LOCKED
//
// MessageText:
//
// Notifications cannot be created on the memory block because it is use.
//
#define STATUS_VID_MBPS_ARE_LOCKED       ((NTSTATUS)0xC0370019L)

//
// MessageId: STATUS_VID_MESSAGE_QUEUE_CLOSED
//
// MessageText:
//
// The message queue for the virtualization infrastructure driver has been closed. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_MESSAGE_QUEUE_CLOSED  ((NTSTATUS)0xC037001AL)

//
// MessageId: STATUS_VID_VIRTUAL_PROCESSOR_LIMIT_EXCEEDED
//
// MessageText:
//
// Cannot add a virtual processor to the partition because the maximum has been reached.
//
#define STATUS_VID_VIRTUAL_PROCESSOR_LIMIT_EXCEEDED ((NTSTATUS)0xC037001BL)

//
// MessageId: STATUS_VID_STOP_PENDING
//
// MessageText:
//
// Cannot stop the virtual processor immediately because of a pending intercept.
//
#define STATUS_VID_STOP_PENDING          ((NTSTATUS)0xC037001CL)

//
// MessageId: STATUS_VID_INVALID_PROCESSOR_STATE
//
// MessageText:
//
// Invalid state for the virtual processor. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_INVALID_PROCESSOR_STATE ((NTSTATUS)0xC037001DL)

//
// MessageId: STATUS_VID_EXCEEDED_KM_CONTEXT_COUNT_LIMIT
//
// MessageText:
//
// The maximum number of kernel mode clients for the virtualization infrastructure driver has been reached. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_EXCEEDED_KM_CONTEXT_COUNT_LIMIT ((NTSTATUS)0xC037001EL)

//
// MessageId: STATUS_VID_KM_INTERFACE_ALREADY_INITIALIZED
//
// MessageText:
//
// This kernel mode interface for the virtualization infrastructure driver has already been initialized. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_KM_INTERFACE_ALREADY_INITIALIZED ((NTSTATUS)0xC037001FL)

//
// MessageId: STATUS_VID_MB_PROPERTY_ALREADY_SET_RESET
//
// MessageText:
//
// Cannot set or reset the memory block property more than once for the virtualization infrastructure driver. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_MB_PROPERTY_ALREADY_SET_RESET ((NTSTATUS)0xC0370020L)

//
// MessageId: STATUS_VID_MMIO_RANGE_DESTROYED
//
// MessageText:
//
// The memory mapped I/O for this page range no longer exists. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_MMIO_RANGE_DESTROYED  ((NTSTATUS)0xC0370021L)

//
// MessageId: STATUS_VID_INVALID_CHILD_GPA_PAGE_SET
//
// MessageText:
//
// The lock or unlock request uses an invalid guest operating system memory address. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_INVALID_CHILD_GPA_PAGE_SET ((NTSTATUS)0xC0370022L)

//
// MessageId: STATUS_VID_RESERVE_PAGE_SET_IS_BEING_USED
//
// MessageText:
//
// Cannot destroy or reuse the reserve page set for the virtualization infrastructure driver because it is in use. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_RESERVE_PAGE_SET_IS_BEING_USED ((NTSTATUS)0xC0370023L)

//
// MessageId: STATUS_VID_RESERVE_PAGE_SET_TOO_SMALL
//
// MessageText:
//
// The reserve page set for the virtualization infrastructure driver is too small to use in the lock request. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_RESERVE_PAGE_SET_TOO_SMALL ((NTSTATUS)0xC0370024L)

//
// MessageId: STATUS_VID_MBP_ALREADY_LOCKED_USING_RESERVED_PAGE
//
// MessageText:
//
// Cannot lock or map the memory block page for the virtualization infrastructure driver because it has already been locked using a reserve page set page. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_MBP_ALREADY_LOCKED_USING_RESERVED_PAGE ((NTSTATUS)0xC0370025L)

//
// MessageId: STATUS_VID_MBP_COUNT_EXCEEDED_LIMIT
//
// MessageText:
//
// Cannot create the memory block for the virtualization infrastructure driver because the requested number of pages exceeded the limit. Restarting the virtual machine may fix the problem. If the problem persists, try restarting the physical computer.
//
#define STATUS_VID_MBP_COUNT_EXCEEDED_LIMIT ((NTSTATUS)0xC0370026L)

//
// MessageId: STATUS_VID_SAVED_STATE_CORRUPT
//
// MessageText:
//
// Cannot restore this virtual machine because the saved state data cannot be read. Delete the saved state data and then try to start the virtual machine.
//
#define STATUS_VID_SAVED_STATE_CORRUPT   ((NTSTATUS)0xC0370027L)

//
// MessageId: STATUS_VID_SAVED_STATE_UNRECOGNIZED_ITEM
//
// MessageText:
//
// Cannot restore this virtual machine because an item read from the saved state data is not recognized. Delete the saved state data and then try to start the virtual machine.
//
#define STATUS_VID_SAVED_STATE_UNRECOGNIZED_ITEM ((NTSTATUS)0xC0370028L)

//
// MessageId: STATUS_VID_SAVED_STATE_INCOMPATIBLE
//
// MessageText:
//
// Cannot restore this virtual machine to the saved state because of hypervisor incompatibility. Delete the saved state data and then try to start the virtual machine.
//
#define STATUS_VID_SAVED_STATE_INCOMPATIBLE ((NTSTATUS)0xC0370029L)

//
// MessageId: STATUS_VID_VTL_ACCESS_DENIED
//
// MessageText:
//
// The specified VTL does not have the permission to access the resource.
//
#define STATUS_VID_VTL_ACCESS_DENIED     ((NTSTATUS)0xC037002AL)

//
// Warnings:
//
//
// MessageId: STATUS_VID_REMOTE_NODE_PARENT_GPA_PAGES_USED
//
// MessageText:
//
// A virtual machine is running with its memory allocated across multiple NUMA nodes. This does not indicate a problem unless the performance of your virtual machine is unusually slow. If you are experiencing performance problems, you may need to modify the NUMA configuration.
//
#define STATUS_VID_REMOTE_NODE_PARENT_GPA_PAGES_USED ((NTSTATUS)0x80370001L)


//
// IPSEC error codes (tcpip.sys)
//

//
// MessageId: STATUS_IPSEC_BAD_SPI
//
// MessageText:
//
// The SPI in the packet does not match a valid IPsec SA.
//
#define STATUS_IPSEC_BAD_SPI             ((NTSTATUS)0xC0360001L)

//
// MessageId: STATUS_IPSEC_SA_LIFETIME_EXPIRED
//
// MessageText:
//
// Packet was received on an IPsec SA whose lifetime has expired.
//
#define STATUS_IPSEC_SA_LIFETIME_EXPIRED ((NTSTATUS)0xC0360002L)

//
// MessageId: STATUS_IPSEC_WRONG_SA
//
// MessageText:
//
// Packet was received on an IPsec SA that does not match the packet characteristics.
//
#define STATUS_IPSEC_WRONG_SA            ((NTSTATUS)0xC0360003L)

//
// MessageId: STATUS_IPSEC_REPLAY_CHECK_FAILED
//
// MessageText:
//
// Packet sequence number replay check failed.
//
#define STATUS_IPSEC_REPLAY_CHECK_FAILED ((NTSTATUS)0xC0360004L)

//
// MessageId: STATUS_IPSEC_INVALID_PACKET
//
// MessageText:
//
// IPsec header and/or trailer in the packet is invalid.
//
#define STATUS_IPSEC_INVALID_PACKET      ((NTSTATUS)0xC0360005L)

//
// MessageId: STATUS_IPSEC_INTEGRITY_CHECK_FAILED
//
// MessageText:
//
// IPsec integrity check failed.
//
#define STATUS_IPSEC_INTEGRITY_CHECK_FAILED ((NTSTATUS)0xC0360006L)

//
// MessageId: STATUS_IPSEC_CLEAR_TEXT_DROP
//
// MessageText:
//
// IPsec dropped a clear text packet.
//
#define STATUS_IPSEC_CLEAR_TEXT_DROP     ((NTSTATUS)0xC0360007L)

//
// MessageId: STATUS_IPSEC_AUTH_FIREWALL_DROP
//
// MessageText:
//
// IPsec dropped an incoming ESP packet in authenticated firewall mode. This drop is benign.
//
#define STATUS_IPSEC_AUTH_FIREWALL_DROP  ((NTSTATUS)0xC0360008L)

//
// MessageId: STATUS_IPSEC_THROTTLE_DROP
//
// MessageText:
//
// IPsec dropped a packet due to DoS throttling.
//
#define STATUS_IPSEC_THROTTLE_DROP       ((NTSTATUS)0xC0360009L)

//
// MessageId: STATUS_IPSEC_DOSP_BLOCK
//
// MessageText:
//
// IPsec DoS Protection matched an explicit block rule.
//
#define STATUS_IPSEC_DOSP_BLOCK          ((NTSTATUS)0xC0368000L)

//
// MessageId: STATUS_IPSEC_DOSP_RECEIVED_MULTICAST
//
// MessageText:
//
// IPsec DoS Protection received an IPsec specific multicast packet which is not allowed.
//
#define STATUS_IPSEC_DOSP_RECEIVED_MULTICAST ((NTSTATUS)0xC0368001L)

//
// MessageId: STATUS_IPSEC_DOSP_INVALID_PACKET
//
// MessageText:
//
// IPsec DoS Protection received an incorrectly formatted packet.
//
#define STATUS_IPSEC_DOSP_INVALID_PACKET ((NTSTATUS)0xC0368002L)

//
// MessageId: STATUS_IPSEC_DOSP_STATE_LOOKUP_FAILED
//
// MessageText:
//
// IPsec DoS Protection failed to look up state.
//
#define STATUS_IPSEC_DOSP_STATE_LOOKUP_FAILED ((NTSTATUS)0xC0368003L)

//
// MessageId: STATUS_IPSEC_DOSP_MAX_ENTRIES
//
// MessageText:
//
// IPsec DoS Protection failed to create state because the maximum number of entries allowed by policy has been reached.
//
#define STATUS_IPSEC_DOSP_MAX_ENTRIES    ((NTSTATUS)0xC0368004L)

//
// MessageId: STATUS_IPSEC_DOSP_KEYMOD_NOT_ALLOWED
//
// MessageText:
//
// IPsec DoS Protection received an IPsec negotiation packet for a keying module which is not allowed by policy.
//
#define STATUS_IPSEC_DOSP_KEYMOD_NOT_ALLOWED ((NTSTATUS)0xC0368005L)

//
// MessageId: STATUS_IPSEC_DOSP_MAX_PER_IP_RATELIMIT_QUEUES
//
// MessageText:
//
// IPsec DoS Protection failed to create a per internal IP rate limit queue because the maximum number of queues allowed by policy has been reached.
//
#define STATUS_IPSEC_DOSP_MAX_PER_IP_RATELIMIT_QUEUES ((NTSTATUS)0xC0368006L)


//
// Volume manager status codes (volmgr.sys and volmgrx.sys)
//

//
// WARNINGS
//
//
// MessageId: STATUS_VOLMGR_INCOMPLETE_REGENERATION
//
// MessageText:
//
// The regeneration operation was not able to copy all data from the active plexes due to bad sectors.
//
#define STATUS_VOLMGR_INCOMPLETE_REGENERATION ((NTSTATUS)0x80380001L)

//
// MessageId: STATUS_VOLMGR_INCOMPLETE_DISK_MIGRATION
//
// MessageText:
//
// One or more disks were not fully migrated to the target pack. They may or may not require reimport after fixing the hardware problems.
//
#define STATUS_VOLMGR_INCOMPLETE_DISK_MIGRATION ((NTSTATUS)0x80380002L)

//
// ERRORS
//
//
// MessageId: STATUS_VOLMGR_DATABASE_FULL
//
// MessageText:
//
// The configuration database is full.
//
#define STATUS_VOLMGR_DATABASE_FULL      ((NTSTATUS)0xC0380001L)

//
// MessageId: STATUS_VOLMGR_DISK_CONFIGURATION_CORRUPTED
//
// MessageText:
//
// The configuration data on the disk is corrupted.
//
#define STATUS_VOLMGR_DISK_CONFIGURATION_CORRUPTED ((NTSTATUS)0xC0380002L)

//
// MessageId: STATUS_VOLMGR_DISK_CONFIGURATION_NOT_IN_SYNC
//
// MessageText:
//
// The configuration on the disk is not insync with the in-memory configuration.
//
#define STATUS_VOLMGR_DISK_CONFIGURATION_NOT_IN_SYNC ((NTSTATUS)0xC0380003L)

//
// MessageId: STATUS_VOLMGR_PACK_CONFIG_UPDATE_FAILED
//
// MessageText:
//
// A majority of disks failed to be updated with the new configuration.
//
#define STATUS_VOLMGR_PACK_CONFIG_UPDATE_FAILED ((NTSTATUS)0xC0380004L)

//
// MessageId: STATUS_VOLMGR_DISK_CONTAINS_NON_SIMPLE_VOLUME
//
// MessageText:
//
// The disk contains non-simple volumes.
//
#define STATUS_VOLMGR_DISK_CONTAINS_NON_SIMPLE_VOLUME ((NTSTATUS)0xC0380005L)

//
// MessageId: STATUS_VOLMGR_DISK_DUPLICATE
//
// MessageText:
//
// The same disk was specified more than once in the migration list.
//
#define STATUS_VOLMGR_DISK_DUPLICATE     ((NTSTATUS)0xC0380006L)

//
// MessageId: STATUS_VOLMGR_DISK_DYNAMIC
//
// MessageText:
//
// The disk is already dynamic.
//
#define STATUS_VOLMGR_DISK_DYNAMIC       ((NTSTATUS)0xC0380007L)

//
// MessageId: STATUS_VOLMGR_DISK_ID_INVALID
//
// MessageText:
//
// The specified disk id is invalid. There are no disks with the specified disk id.
//
#define STATUS_VOLMGR_DISK_ID_INVALID    ((NTSTATUS)0xC0380008L)

//
// MessageId: STATUS_VOLMGR_DISK_INVALID
//
// MessageText:
//
// The specified disk is an invalid disk. Operation cannot complete on an invalid disk.
//
#define STATUS_VOLMGR_DISK_INVALID       ((NTSTATUS)0xC0380009L)

//
// MessageId: STATUS_VOLMGR_DISK_LAST_VOTER
//
// MessageText:
//
// The specified disk(s) cannot be removed since it is the last remaining voter.
//
#define STATUS_VOLMGR_DISK_LAST_VOTER    ((NTSTATUS)0xC038000AL)

//
// MessageId: STATUS_VOLMGR_DISK_LAYOUT_INVALID
//
// MessageText:
//
// The specified disk has an invalid disk layout.
//
#define STATUS_VOLMGR_DISK_LAYOUT_INVALID ((NTSTATUS)0xC038000BL)

//
// MessageId: STATUS_VOLMGR_DISK_LAYOUT_NON_BASIC_BETWEEN_BASIC_PARTITIONS
//
// MessageText:
//
// The disk layout contains non-basic partitions which appear after basic partitions. This is an invalid disk layout.
//
#define STATUS_VOLMGR_DISK_LAYOUT_NON_BASIC_BETWEEN_BASIC_PARTITIONS ((NTSTATUS)0xC038000CL)

//
// MessageId: STATUS_VOLMGR_DISK_LAYOUT_NOT_CYLINDER_ALIGNED
//
// MessageText:
//
// The disk layout contains partitions which are not cylinder aligned.
//
#define STATUS_VOLMGR_DISK_LAYOUT_NOT_CYLINDER_ALIGNED ((NTSTATUS)0xC038000DL)

//
// MessageId: STATUS_VOLMGR_DISK_LAYOUT_PARTITIONS_TOO_SMALL
//
// MessageText:
//
// The disk layout contains partitions which are smaller than the minimum size.
//
#define STATUS_VOLMGR_DISK_LAYOUT_PARTITIONS_TOO_SMALL ((NTSTATUS)0xC038000EL)

//
// MessageId: STATUS_VOLMGR_DISK_LAYOUT_PRIMARY_BETWEEN_LOGICAL_PARTITIONS
//
// MessageText:
//
// The disk layout contains primary partitions in between logical drives. This is an invalid disk layout.
//
#define STATUS_VOLMGR_DISK_LAYOUT_PRIMARY_BETWEEN_LOGICAL_PARTITIONS ((NTSTATUS)0xC038000FL)

//
// MessageId: STATUS_VOLMGR_DISK_LAYOUT_TOO_MANY_PARTITIONS
//
// MessageText:
//
// The disk layout contains more than the maximum number of supported partitions.
//
#define STATUS_VOLMGR_DISK_LAYOUT_TOO_MANY_PARTITIONS ((NTSTATUS)0xC0380010L)

//
// MessageId: STATUS_VOLMGR_DISK_MISSING
//
// MessageText:
//
// The specified disk is missing. The operation cannot complete on a missing disk.
//
#define STATUS_VOLMGR_DISK_MISSING       ((NTSTATUS)0xC0380011L)

//
// MessageId: STATUS_VOLMGR_DISK_NOT_EMPTY
//
// MessageText:
//
// The specified disk is not empty.
//
#define STATUS_VOLMGR_DISK_NOT_EMPTY     ((NTSTATUS)0xC0380012L)

//
// MessageId: STATUS_VOLMGR_DISK_NOT_ENOUGH_SPACE
//
// MessageText:
//
// There is not enough usable space for this operation.
//
#define STATUS_VOLMGR_DISK_NOT_ENOUGH_SPACE ((NTSTATUS)0xC0380013L)

//
// MessageId: STATUS_VOLMGR_DISK_REVECTORING_FAILED
//
// MessageText:
//
// The force revectoring of bad sectors failed.
//
#define STATUS_VOLMGR_DISK_REVECTORING_FAILED ((NTSTATUS)0xC0380014L)

//
// MessageId: STATUS_VOLMGR_DISK_SECTOR_SIZE_INVALID
//
// MessageText:
//
// The specified disk has an invalid sector size.
//
#define STATUS_VOLMGR_DISK_SECTOR_SIZE_INVALID ((NTSTATUS)0xC0380015L)

//
// MessageId: STATUS_VOLMGR_DISK_SET_NOT_CONTAINED
//
// MessageText:
//
// The specified disk set contains volumes which exist on disks outside of the set.
//
#define STATUS_VOLMGR_DISK_SET_NOT_CONTAINED ((NTSTATUS)0xC0380016L)

//
// MessageId: STATUS_VOLMGR_DISK_USED_BY_MULTIPLE_MEMBERS
//
// MessageText:
//
// A disk in the volume layout provides extents to more than one member of a plex.
//
#define STATUS_VOLMGR_DISK_USED_BY_MULTIPLE_MEMBERS ((NTSTATUS)0xC0380017L)

//
// MessageId: STATUS_VOLMGR_DISK_USED_BY_MULTIPLE_PLEXES
//
// MessageText:
//
// A disk in the volume layout provides extents to more than one plex.
//
#define STATUS_VOLMGR_DISK_USED_BY_MULTIPLE_PLEXES ((NTSTATUS)0xC0380018L)

//
// MessageId: STATUS_VOLMGR_DYNAMIC_DISK_NOT_SUPPORTED
//
// MessageText:
//
// Dynamic disks are not supported on this system.
//
#define STATUS_VOLMGR_DYNAMIC_DISK_NOT_SUPPORTED ((NTSTATUS)0xC0380019L)

//
// MessageId: STATUS_VOLMGR_EXTENT_ALREADY_USED
//
// MessageText:
//
// The specified extent is already used by other volumes.
//
#define STATUS_VOLMGR_EXTENT_ALREADY_USED ((NTSTATUS)0xC038001AL)

//
// MessageId: STATUS_VOLMGR_EXTENT_NOT_CONTIGUOUS
//
// MessageText:
//
// The specified volume is retained and can only be extended into a contiguous extent. The specified extent to grow the volume is not contiguous with the specified volume.
//
#define STATUS_VOLMGR_EXTENT_NOT_CONTIGUOUS ((NTSTATUS)0xC038001BL)

//
// MessageId: STATUS_VOLMGR_EXTENT_NOT_IN_PUBLIC_REGION
//
// MessageText:
//
// The specified volume extent is not within the public region of the disk.
//
#define STATUS_VOLMGR_EXTENT_NOT_IN_PUBLIC_REGION ((NTSTATUS)0xC038001CL)

//
// MessageId: STATUS_VOLMGR_EXTENT_NOT_SECTOR_ALIGNED
//
// MessageText:
//
// The specified volume extent is not sector aligned.
//
#define STATUS_VOLMGR_EXTENT_NOT_SECTOR_ALIGNED ((NTSTATUS)0xC038001DL)

//
// MessageId: STATUS_VOLMGR_EXTENT_OVERLAPS_EBR_PARTITION
//
// MessageText:
//
// The specified partition overlaps an EBR (the first track of an extended partition on a MBR disks).
//
#define STATUS_VOLMGR_EXTENT_OVERLAPS_EBR_PARTITION ((NTSTATUS)0xC038001EL)

//
// MessageId: STATUS_VOLMGR_EXTENT_VOLUME_LENGTHS_DO_NOT_MATCH
//
// MessageText:
//
// The specified extent lengths cannot be used to construct a volume with specified length.
//
#define STATUS_VOLMGR_EXTENT_VOLUME_LENGTHS_DO_NOT_MATCH ((NTSTATUS)0xC038001FL)

//
// MessageId: STATUS_VOLMGR_FAULT_TOLERANT_NOT_SUPPORTED
//
// MessageText:
//
// The system does not support fault tolerant volumes.
//
#define STATUS_VOLMGR_FAULT_TOLERANT_NOT_SUPPORTED ((NTSTATUS)0xC0380020L)

//
// MessageId: STATUS_VOLMGR_INTERLEAVE_LENGTH_INVALID
//
// MessageText:
//
// The specified interleave length is invalid.
//
#define STATUS_VOLMGR_INTERLEAVE_LENGTH_INVALID ((NTSTATUS)0xC0380021L)

//
// MessageId: STATUS_VOLMGR_MAXIMUM_REGISTERED_USERS
//
// MessageText:
//
// There is already a maximum number of registered users.
//
#define STATUS_VOLMGR_MAXIMUM_REGISTERED_USERS ((NTSTATUS)0xC0380022L)

//
// MessageId: STATUS_VOLMGR_MEMBER_IN_SYNC
//
// MessageText:
//
// The specified member is already in-sync with the other active members. It does not need to be regenerated.
//
#define STATUS_VOLMGR_MEMBER_IN_SYNC     ((NTSTATUS)0xC0380023L)

//
// MessageId: STATUS_VOLMGR_MEMBER_INDEX_DUPLICATE
//
// MessageText:
//
// The same member index was specified more than once.
//
#define STATUS_VOLMGR_MEMBER_INDEX_DUPLICATE ((NTSTATUS)0xC0380024L)

//
// MessageId: STATUS_VOLMGR_MEMBER_INDEX_INVALID
//
// MessageText:
//
// The specified member index is greater or equal than the number of members in the volume plex.
//
#define STATUS_VOLMGR_MEMBER_INDEX_INVALID ((NTSTATUS)0xC0380025L)

//
// MessageId: STATUS_VOLMGR_MEMBER_MISSING
//
// MessageText:
//
// The specified member is missing. It cannot be regenerated.
//
#define STATUS_VOLMGR_MEMBER_MISSING     ((NTSTATUS)0xC0380026L)

//
// MessageId: STATUS_VOLMGR_MEMBER_NOT_DETACHED
//
// MessageText:
//
// The specified member is not detached. Cannot replace a member which is not detached.
//
#define STATUS_VOLMGR_MEMBER_NOT_DETACHED ((NTSTATUS)0xC0380027L)

//
// MessageId: STATUS_VOLMGR_MEMBER_REGENERATING
//
// MessageText:
//
// The specified member is already regenerating.
//
#define STATUS_VOLMGR_MEMBER_REGENERATING ((NTSTATUS)0xC0380028L)

//
// MessageId: STATUS_VOLMGR_ALL_DISKS_FAILED
//
// MessageText:
//
// All disks belonging to the pack failed.
//
#define STATUS_VOLMGR_ALL_DISKS_FAILED   ((NTSTATUS)0xC0380029L)

//
// MessageId: STATUS_VOLMGR_NO_REGISTERED_USERS
//
// MessageText:
//
// There are currently no registered users for notifications. The task number is irrelevant unless there are registered users.
//
#define STATUS_VOLMGR_NO_REGISTERED_USERS ((NTSTATUS)0xC038002AL)

//
// MessageId: STATUS_VOLMGR_NO_SUCH_USER
//
// MessageText:
//
// The specified notification user does not exist. Failed to unregister user for notifications.
//
#define STATUS_VOLMGR_NO_SUCH_USER       ((NTSTATUS)0xC038002BL)

//
// MessageId: STATUS_VOLMGR_NOTIFICATION_RESET
//
// MessageText:
//
// The notifications have been reset. Notifications for the current user are invalid. Unregister and re-register for notifications.
//
#define STATUS_VOLMGR_NOTIFICATION_RESET ((NTSTATUS)0xC038002CL)

//
// MessageId: STATUS_VOLMGR_NUMBER_OF_MEMBERS_INVALID
//
// MessageText:
//
// The specified number of members is invalid.
//
#define STATUS_VOLMGR_NUMBER_OF_MEMBERS_INVALID ((NTSTATUS)0xC038002DL)

//
// MessageId: STATUS_VOLMGR_NUMBER_OF_PLEXES_INVALID
//
// MessageText:
//
// The specified number of plexes is invalid.
//
#define STATUS_VOLMGR_NUMBER_OF_PLEXES_INVALID ((NTSTATUS)0xC038002EL)

//
// MessageId: STATUS_VOLMGR_PACK_DUPLICATE
//
// MessageText:
//
// The specified source and target packs are identical.
//
#define STATUS_VOLMGR_PACK_DUPLICATE     ((NTSTATUS)0xC038002FL)

//
// MessageId: STATUS_VOLMGR_PACK_ID_INVALID
//
// MessageText:
//
// The specified pack id is invalid. There are no packs with the specified pack id.
//
#define STATUS_VOLMGR_PACK_ID_INVALID    ((NTSTATUS)0xC0380030L)

//
// MessageId: STATUS_VOLMGR_PACK_INVALID
//
// MessageText:
//
// The specified pack is the invalid pack. The operation cannot complete with the invalid pack.
//
#define STATUS_VOLMGR_PACK_INVALID       ((NTSTATUS)0xC0380031L)

//
// MessageId: STATUS_VOLMGR_PACK_NAME_INVALID
//
// MessageText:
//
// The specified pack name is invalid.
//
#define STATUS_VOLMGR_PACK_NAME_INVALID  ((NTSTATUS)0xC0380032L)

//
// MessageId: STATUS_VOLMGR_PACK_OFFLINE
//
// MessageText:
//
// The specified pack is offline.
//
#define STATUS_VOLMGR_PACK_OFFLINE       ((NTSTATUS)0xC0380033L)

//
// MessageId: STATUS_VOLMGR_PACK_HAS_QUORUM
//
// MessageText:
//
// The specified pack already has a quorum of healthy disks.
//
#define STATUS_VOLMGR_PACK_HAS_QUORUM    ((NTSTATUS)0xC0380034L)

//
// MessageId: STATUS_VOLMGR_PACK_WITHOUT_QUORUM
//
// MessageText:
//
// The pack does not have a quorum of healthy disks.
//
#define STATUS_VOLMGR_PACK_WITHOUT_QUORUM ((NTSTATUS)0xC0380035L)

//
// MessageId: STATUS_VOLMGR_PARTITION_STYLE_INVALID
//
// MessageText:
//
// The specified disk has an unsupported partition style. Only MBR and GPT partition styles are supported.
//
#define STATUS_VOLMGR_PARTITION_STYLE_INVALID ((NTSTATUS)0xC0380036L)

//
// MessageId: STATUS_VOLMGR_PARTITION_UPDATE_FAILED
//
// MessageText:
//
// Failed to update the disk's partition layout.
//
#define STATUS_VOLMGR_PARTITION_UPDATE_FAILED ((NTSTATUS)0xC0380037L)

//
// MessageId: STATUS_VOLMGR_PLEX_IN_SYNC
//
// MessageText:
//
// The specified plex is already in-sync with the other active plexes. It does not need to be regenerated.
//
#define STATUS_VOLMGR_PLEX_IN_SYNC       ((NTSTATUS)0xC0380038L)

//
// MessageId: STATUS_VOLMGR_PLEX_INDEX_DUPLICATE
//
// MessageText:
//
// The same plex index was specified more than once.
//
#define STATUS_VOLMGR_PLEX_INDEX_DUPLICATE ((NTSTATUS)0xC0380039L)

//
// MessageId: STATUS_VOLMGR_PLEX_INDEX_INVALID
//
// MessageText:
//
// The specified plex index is greater or equal than the number of plexes in the volume.
//
#define STATUS_VOLMGR_PLEX_INDEX_INVALID ((NTSTATUS)0xC038003AL)

//
// MessageId: STATUS_VOLMGR_PLEX_LAST_ACTIVE
//
// MessageText:
//
// The specified plex is the last active plex in the volume. The plex cannot be removed or else the volume will go offline.
//
#define STATUS_VOLMGR_PLEX_LAST_ACTIVE   ((NTSTATUS)0xC038003BL)

//
// MessageId: STATUS_VOLMGR_PLEX_MISSING
//
// MessageText:
//
// The specified plex is missing.
//
#define STATUS_VOLMGR_PLEX_MISSING       ((NTSTATUS)0xC038003CL)

//
// MessageId: STATUS_VOLMGR_PLEX_REGENERATING
//
// MessageText:
//
// The specified plex is currently regenerating.
//
#define STATUS_VOLMGR_PLEX_REGENERATING  ((NTSTATUS)0xC038003DL)

//
// MessageId: STATUS_VOLMGR_PLEX_TYPE_INVALID
//
// MessageText:
//
// The specified plex type is invalid.
//
#define STATUS_VOLMGR_PLEX_TYPE_INVALID  ((NTSTATUS)0xC038003EL)

//
// MessageId: STATUS_VOLMGR_PLEX_NOT_RAID5
//
// MessageText:
//
// The operation is only supported on RAID-5 plexes.
//
#define STATUS_VOLMGR_PLEX_NOT_RAID5     ((NTSTATUS)0xC038003FL)

//
// MessageId: STATUS_VOLMGR_PLEX_NOT_SIMPLE
//
// MessageText:
//
// The operation is only supported on simple plexes.
//
#define STATUS_VOLMGR_PLEX_NOT_SIMPLE    ((NTSTATUS)0xC0380040L)

//
// MessageId: STATUS_VOLMGR_STRUCTURE_SIZE_INVALID
//
// MessageText:
//
// The Size fields in the VM_VOLUME_LAYOUT input structure are incorrectly set.
//
#define STATUS_VOLMGR_STRUCTURE_SIZE_INVALID ((NTSTATUS)0xC0380041L)

//
// MessageId: STATUS_VOLMGR_TOO_MANY_NOTIFICATION_REQUESTS
//
// MessageText:
//
// There is already a pending request for notifications. Wait for the existing request to return before requesting for more notifications.
//
#define STATUS_VOLMGR_TOO_MANY_NOTIFICATION_REQUESTS ((NTSTATUS)0xC0380042L)

//
// MessageId: STATUS_VOLMGR_TRANSACTION_IN_PROGRESS
//
// MessageText:
//
// There is currently a transaction in process.
//
#define STATUS_VOLMGR_TRANSACTION_IN_PROGRESS ((NTSTATUS)0xC0380043L)

//
// MessageId: STATUS_VOLMGR_UNEXPECTED_DISK_LAYOUT_CHANGE
//
// MessageText:
//
// An unexpected layout change occurred outside of the volume manager.
//
#define STATUS_VOLMGR_UNEXPECTED_DISK_LAYOUT_CHANGE ((NTSTATUS)0xC0380044L)

//
// MessageId: STATUS_VOLMGR_VOLUME_CONTAINS_MISSING_DISK
//
// MessageText:
//
// The specified volume contains a missing disk.
//
#define STATUS_VOLMGR_VOLUME_CONTAINS_MISSING_DISK ((NTSTATUS)0xC0380045L)

//
// MessageId: STATUS_VOLMGR_VOLUME_ID_INVALID
//
// MessageText:
//
// The specified volume id is invalid. There are no volumes with the specified volume id.
//
#define STATUS_VOLMGR_VOLUME_ID_INVALID  ((NTSTATUS)0xC0380046L)

//
// MessageId: STATUS_VOLMGR_VOLUME_LENGTH_INVALID
//
// MessageText:
//
// The specified volume length is invalid.
//
#define STATUS_VOLMGR_VOLUME_LENGTH_INVALID ((NTSTATUS)0xC0380047L)

//
// MessageId: STATUS_VOLMGR_VOLUME_LENGTH_NOT_SECTOR_SIZE_MULTIPLE
//
// MessageText:
//
// The specified size for the volume is not a multiple of the sector size.
//
#define STATUS_VOLMGR_VOLUME_LENGTH_NOT_SECTOR_SIZE_MULTIPLE ((NTSTATUS)0xC0380048L)

//
// MessageId: STATUS_VOLMGR_VOLUME_NOT_MIRRORED
//
// MessageText:
//
// The operation is only supported on mirrored volumes.
//
#define STATUS_VOLMGR_VOLUME_NOT_MIRRORED ((NTSTATUS)0xC0380049L)

//
// MessageId: STATUS_VOLMGR_VOLUME_NOT_RETAINED
//
// MessageText:
//
// The specified volume does not have a retain partition.
//
#define STATUS_VOLMGR_VOLUME_NOT_RETAINED ((NTSTATUS)0xC038004AL)

//
// MessageId: STATUS_VOLMGR_VOLUME_OFFLINE
//
// MessageText:
//
// The specified volume is offline.
//
#define STATUS_VOLMGR_VOLUME_OFFLINE     ((NTSTATUS)0xC038004BL)

//
// MessageId: STATUS_VOLMGR_VOLUME_RETAINED
//
// MessageText:
//
// The specified volume already has a retain partition.
//
#define STATUS_VOLMGR_VOLUME_RETAINED    ((NTSTATUS)0xC038004CL)

//
// MessageId: STATUS_VOLMGR_NUMBER_OF_EXTENTS_INVALID
//
// MessageText:
//
// The specified number of extents is invalid.
//
#define STATUS_VOLMGR_NUMBER_OF_EXTENTS_INVALID ((NTSTATUS)0xC038004DL)

//
// MessageId: STATUS_VOLMGR_DIFFERENT_SECTOR_SIZE
//
// MessageText:
//
// All disks participating to the volume must have the same sector size.
//
#define STATUS_VOLMGR_DIFFERENT_SECTOR_SIZE ((NTSTATUS)0xC038004EL)

//
// MessageId: STATUS_VOLMGR_BAD_BOOT_DISK
//
// MessageText:
//
// The boot disk experienced failures.
//
#define STATUS_VOLMGR_BAD_BOOT_DISK      ((NTSTATUS)0xC038004FL)

//
// MessageId: STATUS_VOLMGR_PACK_CONFIG_OFFLINE
//
// MessageText:
//
// The configuration of the pack is offline.
//
#define STATUS_VOLMGR_PACK_CONFIG_OFFLINE ((NTSTATUS)0xC0380050L)

//
// MessageId: STATUS_VOLMGR_PACK_CONFIG_ONLINE
//
// MessageText:
//
// The configuration of the pack is online.
//
#define STATUS_VOLMGR_PACK_CONFIG_ONLINE ((NTSTATUS)0xC0380051L)

//
// MessageId: STATUS_VOLMGR_NOT_PRIMARY_PACK
//
// MessageText:
//
// The specified pack is not the primary pack.
//
#define STATUS_VOLMGR_NOT_PRIMARY_PACK   ((NTSTATUS)0xC0380052L)

//
// MessageId: STATUS_VOLMGR_PACK_LOG_UPDATE_FAILED
//
// MessageText:
//
// All disks failed to be updated with the new content of the log.
//
#define STATUS_VOLMGR_PACK_LOG_UPDATE_FAILED ((NTSTATUS)0xC0380053L)

//
// MessageId: STATUS_VOLMGR_NUMBER_OF_DISKS_IN_PLEX_INVALID
//
// MessageText:
//
// The specified number of disks in a plex is invalid.
//
#define STATUS_VOLMGR_NUMBER_OF_DISKS_IN_PLEX_INVALID ((NTSTATUS)0xC0380054L)

//
// MessageId: STATUS_VOLMGR_NUMBER_OF_DISKS_IN_MEMBER_INVALID
//
// MessageText:
//
// The specified number of disks in a plex member is invalid.
//
#define STATUS_VOLMGR_NUMBER_OF_DISKS_IN_MEMBER_INVALID ((NTSTATUS)0xC0380055L)

//
// MessageId: STATUS_VOLMGR_VOLUME_MIRRORED
//
// MessageText:
//
// The operation is not supported on mirrored volumes.
//
#define STATUS_VOLMGR_VOLUME_MIRRORED    ((NTSTATUS)0xC0380056L)

//
// MessageId: STATUS_VOLMGR_PLEX_NOT_SIMPLE_SPANNED
//
// MessageText:
//
// The operation is only supported on simple and spanned plexes.
//
#define STATUS_VOLMGR_PLEX_NOT_SIMPLE_SPANNED ((NTSTATUS)0xC0380057L)

//
// MessageId: STATUS_VOLMGR_NO_VALID_LOG_COPIES
//
// MessageText:
//
// The pack has no valid log copies.
//
#define STATUS_VOLMGR_NO_VALID_LOG_COPIES ((NTSTATUS)0xC0380058L)

//
// MessageId: STATUS_VOLMGR_PRIMARY_PACK_PRESENT
//
// MessageText:
//
// A primary pack is already present.
//
#define STATUS_VOLMGR_PRIMARY_PACK_PRESENT ((NTSTATUS)0xC0380059L)

//
// MessageId: STATUS_VOLMGR_NUMBER_OF_DISKS_INVALID
//
// MessageText:
//
// The specified number of disks is invalid.
//
#define STATUS_VOLMGR_NUMBER_OF_DISKS_INVALID ((NTSTATUS)0xC038005AL)

//
// MessageId: STATUS_VOLMGR_MIRROR_NOT_SUPPORTED
//
// MessageText:
//
// The system does not support mirrored volumes.
//
#define STATUS_VOLMGR_MIRROR_NOT_SUPPORTED ((NTSTATUS)0xC038005BL)

//
// MessageId: STATUS_VOLMGR_RAID5_NOT_SUPPORTED
//
// MessageText:
//
// The system does not support RAID-5 volumes.
//
#define STATUS_VOLMGR_RAID5_NOT_SUPPORTED ((NTSTATUS)0xC038005CL)

//
// Boot Code Data (BCD) status codes
//

//
// MessageId: STATUS_BCD_NOT_ALL_ENTRIES_IMPORTED
//
// MessageText:
//
// Some BCD entries were not imported correctly from the BCD store.
//
#define STATUS_BCD_NOT_ALL_ENTRIES_IMPORTED ((NTSTATUS)0x80390001L)

//
// MessageId: STATUS_BCD_TOO_MANY_ELEMENTS
//
// MessageText:
//
// Entries enumerated have exceeded the allowed threshold.
//
#define STATUS_BCD_TOO_MANY_ELEMENTS     ((NTSTATUS)0xC0390002L)

//
// MessageId: STATUS_BCD_NOT_ALL_ENTRIES_SYNCHRONIZED
//
// MessageText:
//
// Some BCD entries were not synchronized correctly with the firmware.
//
#define STATUS_BCD_NOT_ALL_ENTRIES_SYNCHRONIZED ((NTSTATUS)0x80390003L)


//
// vhdparser error codes (vhdmp.sys)
//

//
// MessageId: STATUS_VHD_DRIVE_FOOTER_MISSING
//
// MessageText:
//
// The virtual hard disk is corrupted. The virtual hard disk drive footer is missing.
//
#define STATUS_VHD_DRIVE_FOOTER_MISSING  ((NTSTATUS)0xC03A0001L)

//
// MessageId: STATUS_VHD_DRIVE_FOOTER_CHECKSUM_MISMATCH
//
// MessageText:
//
// The virtual hard disk is corrupted. The virtual hard disk drive footer checksum does not match the on-disk checksum.
//
#define STATUS_VHD_DRIVE_FOOTER_CHECKSUM_MISMATCH ((NTSTATUS)0xC03A0002L)

//
// MessageId: STATUS_VHD_DRIVE_FOOTER_CORRUPT
//
// MessageText:
//
// The virtual hard disk is corrupted. The virtual hard disk drive footer in the virtual hard disk is corrupted.
//
#define STATUS_VHD_DRIVE_FOOTER_CORRUPT  ((NTSTATUS)0xC03A0003L)

//
// MessageId: STATUS_VHD_FORMAT_UNKNOWN
//
// MessageText:
//
// The system does not recognize the file format of this virtual hard disk.
//
#define STATUS_VHD_FORMAT_UNKNOWN        ((NTSTATUS)0xC03A0004L)

//
// MessageId: STATUS_VHD_FORMAT_UNSUPPORTED_VERSION
//
// MessageText:
//
// The version does not support this version of the file format.
//
#define STATUS_VHD_FORMAT_UNSUPPORTED_VERSION ((NTSTATUS)0xC03A0005L)

//
// MessageId: STATUS_VHD_SPARSE_HEADER_CHECKSUM_MISMATCH
//
// MessageText:
//
// The virtual hard disk is corrupted. The sparse header checksum does not match the on-disk checksum.
//
#define STATUS_VHD_SPARSE_HEADER_CHECKSUM_MISMATCH ((NTSTATUS)0xC03A0006L)

//
// MessageId: STATUS_VHD_SPARSE_HEADER_UNSUPPORTED_VERSION
//
// MessageText:
//
// The system does not support this version of the virtual hard disk.This version of the sparse header is not supported.
//
#define STATUS_VHD_SPARSE_HEADER_UNSUPPORTED_VERSION ((NTSTATUS)0xC03A0007L)

//
// MessageId: STATUS_VHD_SPARSE_HEADER_CORRUPT
//
// MessageText:
//
// The virtual hard disk is corrupted. The sparse header in the virtual hard disk is corrupt.
//
#define STATUS_VHD_SPARSE_HEADER_CORRUPT ((NTSTATUS)0xC03A0008L)

//
// MessageId: STATUS_VHD_BLOCK_ALLOCATION_FAILURE
//
// MessageText:
//
// Failed to write to the virtual hard disk failed because the system failed to allocate a new block in the virtual hard disk.
//
#define STATUS_VHD_BLOCK_ALLOCATION_FAILURE ((NTSTATUS)0xC03A0009L)

//
// MessageId: STATUS_VHD_BLOCK_ALLOCATION_TABLE_CORRUPT
//
// MessageText:
//
// The virtual hard disk is corrupted. The block allocation table in the virtual hard disk is corrupt.
//
#define STATUS_VHD_BLOCK_ALLOCATION_TABLE_CORRUPT ((NTSTATUS)0xC03A000AL)

//
// MessageId: STATUS_VHD_INVALID_BLOCK_SIZE
//
// MessageText:
//
// The system does not support this version of the virtual hard disk. The block size is invalid.
//
#define STATUS_VHD_INVALID_BLOCK_SIZE    ((NTSTATUS)0xC03A000BL)

//
// MessageId: STATUS_VHD_BITMAP_MISMATCH
//
// MessageText:
//
// The virtual hard disk is corrupted. The block bitmap does not match with the block data present in the virtual hard disk.
//
#define STATUS_VHD_BITMAP_MISMATCH       ((NTSTATUS)0xC03A000CL)

//
// MessageId: STATUS_VHD_PARENT_VHD_NOT_FOUND
//
// MessageText:
//
// The chain of virtual hard disks is broken. The system cannot locate the parent virtual hard disk for the differencing disk.
//
#define STATUS_VHD_PARENT_VHD_NOT_FOUND  ((NTSTATUS)0xC03A000DL)

//
// MessageId: STATUS_VHD_CHILD_PARENT_ID_MISMATCH
//
// MessageText:
//
// The chain of virtual hard disks is corrupted. There is a mismatch in the identifiers of the parent virtual hard disk and differencing disk.
//
#define STATUS_VHD_CHILD_PARENT_ID_MISMATCH ((NTSTATUS)0xC03A000EL)

//
// MessageId: STATUS_VHD_CHILD_PARENT_TIMESTAMP_MISMATCH
//
// MessageText:
//
// The chain of virtual hard disks is corrupted. The time stamp of the parent virtual hard disk does not match the time stamp of the differencing disk.
//
#define STATUS_VHD_CHILD_PARENT_TIMESTAMP_MISMATCH ((NTSTATUS)0xC03A000FL)

//
// MessageId: STATUS_VHD_METADATA_READ_FAILURE
//
// MessageText:
//
// Failed to read the metadata of the virtual hard disk.
//
#define STATUS_VHD_METADATA_READ_FAILURE ((NTSTATUS)0xC03A0010L)

//
// MessageId: STATUS_VHD_METADATA_WRITE_FAILURE
//
// MessageText:
//
// Failed to write to the metadata of the virtual hard disk.
//
#define STATUS_VHD_METADATA_WRITE_FAILURE ((NTSTATUS)0xC03A0011L)

//
// MessageId: STATUS_VHD_INVALID_SIZE
//
// MessageText:
//
// The size of the virtual hard disk is not valid.
//
#define STATUS_VHD_INVALID_SIZE          ((NTSTATUS)0xC03A0012L)

//
// MessageId: STATUS_VHD_INVALID_FILE_SIZE
//
// MessageText:
//
// The file size of this virtual hard disk is not valid.
//
#define STATUS_VHD_INVALID_FILE_SIZE     ((NTSTATUS)0xC03A0013L)

//
// MessageId: STATUS_VIRTDISK_PROVIDER_NOT_FOUND
//
// MessageText:
//
// A virtual disk support provider for the specified file was not found.
//
#define STATUS_VIRTDISK_PROVIDER_NOT_FOUND ((NTSTATUS)0xC03A0014L)

//
// MessageId: STATUS_VIRTDISK_NOT_VIRTUAL_DISK
//
// MessageText:
//
// The specified disk is not a virtual disk.
//
#define STATUS_VIRTDISK_NOT_VIRTUAL_DISK ((NTSTATUS)0xC03A0015L)

//
// MessageId: STATUS_VHD_PARENT_VHD_ACCESS_DENIED
//
// MessageText:
//
// The chain of virtual hard disks is inaccessible. The process has not been granted access rights to the parent virtual hard disk for the differencing disk.
//
#define STATUS_VHD_PARENT_VHD_ACCESS_DENIED ((NTSTATUS)0xC03A0016L)

//
// MessageId: STATUS_VHD_CHILD_PARENT_SIZE_MISMATCH
//
// MessageText:
//
// The chain of virtual hard disks is corrupted. There is a mismatch in the virtual sizes of the parent virtual hard disk and differencing disk.
//
#define STATUS_VHD_CHILD_PARENT_SIZE_MISMATCH ((NTSTATUS)0xC03A0017L)

//
// MessageId: STATUS_VHD_DIFFERENCING_CHAIN_CYCLE_DETECTED
//
// MessageText:
//
// The chain of virtual hard disks is corrupted. A differencing disk is indicated in its own parent chain.
//
#define STATUS_VHD_DIFFERENCING_CHAIN_CYCLE_DETECTED ((NTSTATUS)0xC03A0018L)

//
// MessageId: STATUS_VHD_DIFFERENCING_CHAIN_ERROR_IN_PARENT
//
// MessageText:
//
// The chain of virtual hard disks is inaccessible. There was an error opening a virtual hard disk further up the chain.
//
#define STATUS_VHD_DIFFERENCING_CHAIN_ERROR_IN_PARENT ((NTSTATUS)0xC03A0019L)

//
// MessageId: STATUS_VIRTUAL_DISK_LIMITATION
//
// MessageText:
//
// The requested operation could not be completed due to a virtual disk system limitation.  Virtual hard disk files must be uncompressed and unencrypted and must not be sparse.
//
#define STATUS_VIRTUAL_DISK_LIMITATION   ((NTSTATUS)0xC03A001AL)

//
// MessageId: STATUS_VHD_INVALID_TYPE
//
// MessageText:
//
// The requested operation cannot be performed on a virtual disk of this type.
//
#define STATUS_VHD_INVALID_TYPE          ((NTSTATUS)0xC03A001BL)

//
// MessageId: STATUS_VHD_INVALID_STATE
//
// MessageText:
//
// The requested operation cannot be performed on the virtual disk in its current state.
//
#define STATUS_VHD_INVALID_STATE         ((NTSTATUS)0xC03A001CL)

//
// MessageId: STATUS_VIRTDISK_UNSUPPORTED_DISK_SECTOR_SIZE
//
// MessageText:
//
// The sector size of the physical disk on which the virtual disk resides is not supported.
//
#define STATUS_VIRTDISK_UNSUPPORTED_DISK_SECTOR_SIZE ((NTSTATUS)0xC03A001DL)

//
// MessageId: STATUS_VIRTDISK_DISK_ALREADY_OWNED
//
// MessageText:
//
// The disk is already owned by a different owner.
//
#define STATUS_VIRTDISK_DISK_ALREADY_OWNED ((NTSTATUS)0xC03A001EL)

//
// MessageId: STATUS_VIRTDISK_DISK_ONLINE_AND_WRITABLE
//
// MessageText:
//
// The disk must be offline or read-only.
//
#define STATUS_VIRTDISK_DISK_ONLINE_AND_WRITABLE ((NTSTATUS)0xC03A001FL)

//
// MessageId: STATUS_CTLOG_TRACKING_NOT_INITIALIZED
//
// MessageText:
//
// Change Tracking is not initialized for this virtual disk.
//
#define STATUS_CTLOG_TRACKING_NOT_INITIALIZED ((NTSTATUS)0xC03A0020L)

//
// MessageId: STATUS_CTLOG_LOGFILE_SIZE_EXCEEDED_MAXSIZE
//
// MessageText:
//
// Size of change tracking file exceeded the maximum size limit.
//
#define STATUS_CTLOG_LOGFILE_SIZE_EXCEEDED_MAXSIZE ((NTSTATUS)0xC03A0021L)

//
// MessageId: STATUS_CTLOG_VHD_CHANGED_OFFLINE
//
// MessageText:
//
// VHD file is changed due to compaction, expansion, or offline updates.
//
#define STATUS_CTLOG_VHD_CHANGED_OFFLINE ((NTSTATUS)0xC03A0022L)

//
// MessageId: STATUS_CTLOG_INVALID_TRACKING_STATE
//
// MessageText:
//
// Change Tracking for the virtual disk is not in a valid state to perform this request.  Change tracking could be discontinued or already in the requested state.
//
#define STATUS_CTLOG_INVALID_TRACKING_STATE ((NTSTATUS)0xC03A0023L)

//
// MessageId: STATUS_CTLOG_INCONSISTENT_TRACKING_FILE
//
// MessageText:
//
// Change Tracking file for the virtual disk is not in a valid state.
//
#define STATUS_CTLOG_INCONSISTENT_TRACKING_FILE ((NTSTATUS)0xC03A0024L)

//
// MessageId: STATUS_VHD_METADATA_FULL
//
// MessageText:
//
// There is not enough space in the virtual disk file for the provided metadata item.
//
#define STATUS_VHD_METADATA_FULL         ((NTSTATUS)0xC03A0028L)

//
// MessageId: STATUS_VHD_INVALID_CHANGE_TRACKING_ID
//
// MessageText:
//
// The specified change tracking identifier is not valid.
//
#define STATUS_VHD_INVALID_CHANGE_TRACKING_ID ((NTSTATUS)0xC03A0029L)

//
// MessageId: STATUS_VHD_CHANGE_TRACKING_DISABLED
//
// MessageText:
//
// Change tracking is disabled for the specified virtual hard disk, so no change tracking information is available.
//
#define STATUS_VHD_CHANGE_TRACKING_DISABLED ((NTSTATUS)0xC03A002AL)

//
// MessageId: STATUS_VHD_MISSING_CHANGE_TRACKING_INFORMATION
//
// MessageText:
//
// There is no change tracking data available associated with the specified change tracking identifier.
//
#define STATUS_VHD_MISSING_CHANGE_TRACKING_INFORMATION ((NTSTATUS)0xC03A0030L)

//
// MessageId: STATUS_VHD_RESIZE_WOULD_TRUNCATE_DATA
//
// MessageText:
//
// The requested resize operation might truncate user data residing on the virtual disk.
//
#define STATUS_VHD_RESIZE_WOULD_TRUNCATE_DATA ((NTSTATUS)0xC03A0031L)

//
// MessageId: STATUS_VHD_COULD_NOT_COMPUTE_MINIMUM_VIRTUAL_SIZE
//
// MessageText:
//
// The minimum safe size of the virtual disk could not be determined. This may be due to a missing or corrupt partition table.
//
#define STATUS_VHD_COULD_NOT_COMPUTE_MINIMUM_VIRTUAL_SIZE ((NTSTATUS)0xC03A0032L)

//
// MessageId: STATUS_VHD_ALREADY_AT_OR_BELOW_MINIMUM_VIRTUAL_SIZE
//
// MessageText:
//
// The size of the virtual disk cannot be safely reduced further.
//
#define STATUS_VHD_ALREADY_AT_OR_BELOW_MINIMUM_VIRTUAL_SIZE ((NTSTATUS)0xC03A0033L)


//
// Vhd warnings.
//

//
// MessageId: STATUS_QUERY_STORAGE_ERROR
//
// MessageText:
//
// The virtualization storage subsystem has generated an error.
//
#define STATUS_QUERY_STORAGE_ERROR       ((NTSTATUS)0x803A0001L)


//
// NtGdi warnings.
//

//
// MessageId: STATUS_GDI_HANDLE_LEAK
//
// MessageText:
//
// GDI handles were potentially leaked by the application.
//
#define STATUS_GDI_HANDLE_LEAK           ((NTSTATUS)0x803F0001L)


//
// Resume Key Filter (RKF) error codes.
//
//
// MessageId: STATUS_RKF_KEY_NOT_FOUND
//
// MessageText:
//
// The Resume Key Filter could not find the resume key supplied for the operation.
//
#define STATUS_RKF_KEY_NOT_FOUND         ((NTSTATUS)0xC0400001L)

//
// MessageId: STATUS_RKF_DUPLICATE_KEY
//
// MessageText:
//
// The Resume Key Filter found an existing resume key that matches the one supplied for the handle.
//
#define STATUS_RKF_DUPLICATE_KEY         ((NTSTATUS)0xC0400002L)

//
// MessageId: STATUS_RKF_BLOB_FULL
//
// MessageText:
//
// The Resume Key Filter data blob attached to the handle is full. No more space is available.
//
#define STATUS_RKF_BLOB_FULL             ((NTSTATUS)0xC0400003L)

//
// MessageId: STATUS_RKF_STORE_FULL
//
// MessageText:
//
// The Resume Key Filter handle store is full. No more resume handles can be accepted.
//
#define STATUS_RKF_STORE_FULL            ((NTSTATUS)0xC0400004L)

//
// MessageId: STATUS_RKF_FILE_BLOCKED
//
// MessageText:
//
// The Resume Key Filter failed the operation because the file is temporarily blocked pending the resume of existing handles on the file.
//
#define STATUS_RKF_FILE_BLOCKED          ((NTSTATUS)0xC0400005L)

//
// MessageId: STATUS_RKF_ACTIVE_KEY
//
// MessageText:
//
// The Resume Key Filter found an existing resume key that matches the one supplied on a handle that's active/open. The operation requires an inactive/closed handle.
//
#define STATUS_RKF_ACTIVE_KEY            ((NTSTATUS)0xC0400006L)


//
// RDBSS / MiniRdr internal error codes.
//
//
// MessageId: STATUS_RDBSS_RESTART_OPERATION
//
// MessageText:
//
// The operation must be restarted by RDBSS.
//
#define STATUS_RDBSS_RESTART_OPERATION   ((NTSTATUS)0xC0410001L)

//
// MessageId: STATUS_RDBSS_CONTINUE_OPERATION
//
// MessageText:
//
// The operation must continue processing.
//
#define STATUS_RDBSS_CONTINUE_OPERATION  ((NTSTATUS)0xC0410002L)

//
// MessageId: STATUS_RDBSS_POST_OPERATION
//
// MessageText:
//
// The operation must be posted to a thread to be retried at passive IRQL.
//
#define STATUS_RDBSS_POST_OPERATION      ((NTSTATUS)0xC0410003L)

//
// MessageId: STATUS_RDBSS_RETRY_LOOKUP
//
// MessageText:
//
// The caller must retry by looking up the object in the name table.
//
#define STATUS_RDBSS_RETRY_LOOKUP        ((NTSTATUS)0xC0410004L)

//
// Bluetooth Attribute Protocol Warnings
//

//
// MessageId: STATUS_BTH_ATT_INVALID_HANDLE
//
// MessageText:
//
// The attribute handle given was not valid on this server.
//
#define STATUS_BTH_ATT_INVALID_HANDLE    ((NTSTATUS)0xC0420001L)

//
// MessageId: STATUS_BTH_ATT_READ_NOT_PERMITTED
//
// MessageText:
//
// The attribute cannot be read.
//
#define STATUS_BTH_ATT_READ_NOT_PERMITTED ((NTSTATUS)0xC0420002L)

//
// MessageId: STATUS_BTH_ATT_WRITE_NOT_PERMITTED
//
// MessageText:
//
// The attribute cannot be written.
//
#define STATUS_BTH_ATT_WRITE_NOT_PERMITTED ((NTSTATUS)0xC0420003L)

//
// MessageId: STATUS_BTH_ATT_INVALID_PDU
//
// MessageText:
//
// The attribute PDU was invalid.
//
#define STATUS_BTH_ATT_INVALID_PDU       ((NTSTATUS)0xC0420004L)

//
// MessageId: STATUS_BTH_ATT_INSUFFICIENT_AUTHENTICATION
//
// MessageText:
//
// The attribute requires authentication before it can be read or written.
//
#define STATUS_BTH_ATT_INSUFFICIENT_AUTHENTICATION ((NTSTATUS)0xC0420005L)

//
// MessageId: STATUS_BTH_ATT_REQUEST_NOT_SUPPORTED
//
// MessageText:
//
// Attribute server does not support the request received from the client.
//
#define STATUS_BTH_ATT_REQUEST_NOT_SUPPORTED ((NTSTATUS)0xC0420006L)

//
// MessageId: STATUS_BTH_ATT_INVALID_OFFSET
//
// MessageText:
//
// Offset specified was past the end of the attribute.
//
#define STATUS_BTH_ATT_INVALID_OFFSET    ((NTSTATUS)0xC0420007L)

//
// MessageId: STATUS_BTH_ATT_INSUFFICIENT_AUTHORIZATION
//
// MessageText:
//
// The attribute requires authorization before it can be read or written.
//
#define STATUS_BTH_ATT_INSUFFICIENT_AUTHORIZATION ((NTSTATUS)0xC0420008L)

//
// MessageId: STATUS_BTH_ATT_PREPARE_QUEUE_FULL
//
// MessageText:
//
// Too many prepare writes have been queued.
//
#define STATUS_BTH_ATT_PREPARE_QUEUE_FULL ((NTSTATUS)0xC0420009L)

//
// MessageId: STATUS_BTH_ATT_ATTRIBUTE_NOT_FOUND
//
// MessageText:
//
// No attribute found within the given attribute handle range.
//
#define STATUS_BTH_ATT_ATTRIBUTE_NOT_FOUND ((NTSTATUS)0xC042000AL)

//
// MessageId: STATUS_BTH_ATT_ATTRIBUTE_NOT_LONG
//
// MessageText:
//
// The attribute cannot be read or written using the Read Blob Request.
//
#define STATUS_BTH_ATT_ATTRIBUTE_NOT_LONG ((NTSTATUS)0xC042000BL)

//
// MessageId: STATUS_BTH_ATT_INSUFFICIENT_ENCRYPTION_KEY_SIZE
//
// MessageText:
//
// The Encryption Key Size used for encrypting this link is insufficient.
//
#define STATUS_BTH_ATT_INSUFFICIENT_ENCRYPTION_KEY_SIZE ((NTSTATUS)0xC042000CL)

//
// MessageId: STATUS_BTH_ATT_INVALID_ATTRIBUTE_VALUE_LENGTH
//
// MessageText:
//
// The attribute value length is invalid for the operation.
//
#define STATUS_BTH_ATT_INVALID_ATTRIBUTE_VALUE_LENGTH ((NTSTATUS)0xC042000DL)

//
// MessageId: STATUS_BTH_ATT_UNLIKELY
//
// MessageText:
//
// The attribute request that was requested has encountered an error that was unlikely, and therefore could not be completed as requested.
//
#define STATUS_BTH_ATT_UNLIKELY          ((NTSTATUS)0xC042000EL)

//
// MessageId: STATUS_BTH_ATT_INSUFFICIENT_ENCRYPTION
//
// MessageText:
//
// The attribute requires encryption before it can be read or written.
//
#define STATUS_BTH_ATT_INSUFFICIENT_ENCRYPTION ((NTSTATUS)0xC042000FL)

//
// MessageId: STATUS_BTH_ATT_UNSUPPORTED_GROUP_TYPE
//
// MessageText:
//
// The attribute type is not a supported grouping attribute as defined by a higher layer specification.
//
#define STATUS_BTH_ATT_UNSUPPORTED_GROUP_TYPE ((NTSTATUS)0xC0420010L)

//
// MessageId: STATUS_BTH_ATT_INSUFFICIENT_RESOURCES
//
// MessageText:
//
// Insufficient Resources to complete the request.
//
#define STATUS_BTH_ATT_INSUFFICIENT_RESOURCES ((NTSTATUS)0xC0420011L)

//
// MessageId: STATUS_BTH_ATT_UNKNOWN_ERROR
//
// MessageText:
//
// An error that lies in the reserved range has been received.
//
#define STATUS_BTH_ATT_UNKNOWN_ERROR     ((NTSTATUS)0xC0421000L)

//
// Secure Boot error messages.
//
//
// MessageId: STATUS_SECUREBOOT_ROLLBACK_DETECTED
//
// MessageText:
//
// Secure Boot detected that rollback of protected data has been attempted.
//
#define STATUS_SECUREBOOT_ROLLBACK_DETECTED ((NTSTATUS)0xC0430001L)

//
// MessageId: STATUS_SECUREBOOT_POLICY_VIOLATION
//
// MessageText:
//
// The value is protected by Secure Boot policy and cannot be modified or deleted.
//
#define STATUS_SECUREBOOT_POLICY_VIOLATION ((NTSTATUS)0xC0430002L)

//
// MessageId: STATUS_SECUREBOOT_INVALID_POLICY
//
// MessageText:
//
// The Secure Boot policy is invalid.
//
#define STATUS_SECUREBOOT_INVALID_POLICY ((NTSTATUS)0xC0430003L)

//
// MessageId: STATUS_SECUREBOOT_POLICY_PUBLISHER_NOT_FOUND
//
// MessageText:
//
// A new Secure Boot policy did not contain the current publisher on its update list.
//
#define STATUS_SECUREBOOT_POLICY_PUBLISHER_NOT_FOUND ((NTSTATUS)0xC0430004L)

//
// MessageId: STATUS_SECUREBOOT_POLICY_NOT_SIGNED
//
// MessageText:
//
// The Secure Boot policy is either not signed or is signed by a non-trusted signer.
//
#define STATUS_SECUREBOOT_POLICY_NOT_SIGNED ((NTSTATUS)0xC0430005L)

//
// MessageId: STATUS_SECUREBOOT_NOT_ENABLED
//
// MessageText:
//
// Secure Boot is not enabled on this machine.
//
#define STATUS_SECUREBOOT_NOT_ENABLED    ((NTSTATUS)0x80430006L)

//
// MessageId: STATUS_SECUREBOOT_FILE_REPLACED
//
// MessageText:
//
// Secure Boot requires that certain files and drivers are not replaced by other files or drivers.
//
#define STATUS_SECUREBOOT_FILE_REPLACED  ((NTSTATUS)0xC0430007L)

//
// MessageId: STATUS_SECUREBOOT_POLICY_NOT_AUTHORIZED
//
// MessageText:
//
// The Secure Boot Supplemental Policy file was not authorized on this machine.
//
#define STATUS_SECUREBOOT_POLICY_NOT_AUTHORIZED ((NTSTATUS)0xC0430008L)

//
// MessageId: STATUS_SECUREBOOT_POLICY_UNKNOWN
//
// MessageText:
//
// The Supplemental Policy is not recognized on this device.
//
#define STATUS_SECUREBOOT_POLICY_UNKNOWN ((NTSTATUS)0xC0430009L)

//
// MessageId: STATUS_SECUREBOOT_POLICY_MISSING_ANTIROLLBACKVERSION
//
// MessageText:
//
// The Antirollback version was not found in the Secure Boot Policy.
//
#define STATUS_SECUREBOOT_POLICY_MISSING_ANTIROLLBACKVERSION ((NTSTATUS)0xC043000AL)

//
// MessageId: STATUS_SECUREBOOT_PLATFORM_ID_MISMATCH
//
// MessageText:
//
// The Platform ID specified in the Secure Boot policy does not match the Platform ID on this device.
//
#define STATUS_SECUREBOOT_PLATFORM_ID_MISMATCH ((NTSTATUS)0xC043000BL)

//
// MessageId: STATUS_SECUREBOOT_POLICY_ROLLBACK_DETECTED
//
// MessageText:
//
// The Secure Boot policy file has an older Antirollback Version than this device.
//
#define STATUS_SECUREBOOT_POLICY_ROLLBACK_DETECTED ((NTSTATUS)0xC043000CL)

//
// MessageId: STATUS_SECUREBOOT_POLICY_UPGRADE_MISMATCH
//
// MessageText:
//
// The Secure Boot policy file does not match the upgraded legacy policy.
//
#define STATUS_SECUREBOOT_POLICY_UPGRADE_MISMATCH ((NTSTATUS)0xC043000DL)

//
// MessageId: STATUS_SECUREBOOT_REQUIRED_POLICY_FILE_MISSING
//
// MessageText:
//
// The Secure Boot policy file is required but could not be found.
//
#define STATUS_SECUREBOOT_REQUIRED_POLICY_FILE_MISSING ((NTSTATUS)0xC043000EL)

//
// MessageId: STATUS_SECUREBOOT_NOT_BASE_POLICY
//
// MessageText:
//
// Supplemental Secure Boot policy file can not be loaded as a base Secure Boot policy.
//
#define STATUS_SECUREBOOT_NOT_BASE_POLICY ((NTSTATUS)0xC043000FL)

//
// MessageId: STATUS_SECUREBOOT_NOT_SUPPLEMENTAL_POLICY
//
// MessageText:
//
// Base Secure Boot policy file can not be loaded as a Supplemental Secure Boot policy.
//
#define STATUS_SECUREBOOT_NOT_SUPPLEMENTAL_POLICY ((NTSTATUS)0xC0430010L)

//
// Platform Manifest Error Messages
//
//
// MessageId: STATUS_PLATFORM_MANIFEST_NOT_AUTHORIZED
//
// MessageText:
//
// The Platform Manifest file was not authorized on this machine.
//
#define STATUS_PLATFORM_MANIFEST_NOT_AUTHORIZED ((NTSTATUS)0xC0EB0001L)

//
// MessageId: STATUS_PLATFORM_MANIFEST_INVALID
//
// MessageText:
//
// The Platform Manifest file was not valid.
//
#define STATUS_PLATFORM_MANIFEST_INVALID ((NTSTATUS)0xC0EB0002L)

//
// MessageId: STATUS_PLATFORM_MANIFEST_FILE_NOT_AUTHORIZED
//
// MessageText:
//
// The file is not authorized on this platform because an entry was not found in the Platform Manifest.
//
#define STATUS_PLATFORM_MANIFEST_FILE_NOT_AUTHORIZED ((NTSTATUS)0xC0EB0003L)

//
// MessageId: STATUS_PLATFORM_MANIFEST_CATALOG_NOT_AUTHORIZED
//
// MessageText:
//
// The catalog is not authorized on this platform because an entry was not found in the Platform Manifest.
//
#define STATUS_PLATFORM_MANIFEST_CATALOG_NOT_AUTHORIZED ((NTSTATUS)0xC0EB0004L)

//
// MessageId: STATUS_PLATFORM_MANIFEST_BINARY_ID_NOT_FOUND
//
// MessageText:
//
// The file is not authorized on this platform because a Binary ID was not found in the embedded signature.
//
#define STATUS_PLATFORM_MANIFEST_BINARY_ID_NOT_FOUND ((NTSTATUS)0xC0EB0005L)

//
// MessageId: STATUS_PLATFORM_MANIFEST_NOT_ACTIVE
//
// MessageText:
//
// No active Platform Manifest exists on this system.
//
#define STATUS_PLATFORM_MANIFEST_NOT_ACTIVE ((NTSTATUS)0xC0EB0006L)

//
// MessageId: STATUS_PLATFORM_MANIFEST_NOT_SIGNED
//
// MessageText:
//
// The Platform Manifest file was not properly signed.
//
#define STATUS_PLATFORM_MANIFEST_NOT_SIGNED ((NTSTATUS)0xC0EB0007L)

//
// System Integrity Policy error messages.
//
//
// MessageId: STATUS_SYSTEM_INTEGRITY_ROLLBACK_DETECTED
//
// MessageText:
//
// System Integrity detected that policy rollback has been attempted.
//
#define STATUS_SYSTEM_INTEGRITY_ROLLBACK_DETECTED ((NTSTATUS)0xC0E90001L)

//
// MessageId: STATUS_SYSTEM_INTEGRITY_POLICY_VIOLATION
//
// MessageText:
//
// System Integrity policy has been violated.
//
#define STATUS_SYSTEM_INTEGRITY_POLICY_VIOLATION ((NTSTATUS)0xC0E90002L)

//
// MessageId: STATUS_SYSTEM_INTEGRITY_INVALID_POLICY
//
// MessageText:
//
// The System Integrity policy is invalid.
//
#define STATUS_SYSTEM_INTEGRITY_INVALID_POLICY ((NTSTATUS)0xC0E90003L)

//
// MessageId: STATUS_SYSTEM_INTEGRITY_POLICY_NOT_SIGNED
//
// MessageText:
//
// The System Integrity policy is either not signed or is signed by a non-trusted signer.
//
#define STATUS_SYSTEM_INTEGRITY_POLICY_NOT_SIGNED ((NTSTATUS)0xC0E90004L)

//
// MessageId: STATUS_SYSTEM_INTEGRITY_TOO_MANY_POLICIES
//
// MessageText:
//
// The number of System Integrity policies is out of limit.
//
#define STATUS_SYSTEM_INTEGRITY_TOO_MANY_POLICIES ((NTSTATUS)0xC0E90005L)

//
// MessageId: STATUS_SYSTEM_INTEGRITY_SUPPLEMENTAL_POLICY_NOT_AUTHORIZED
//
// MessageText:
//
// The Code Integrity supplemental policy is not authorized by a Code Integrity base policy.
//
#define STATUS_SYSTEM_INTEGRITY_SUPPLEMENTAL_POLICY_NOT_AUTHORIZED ((NTSTATUS)0xC0E90006L)

//
// MessageId: STATUS_SYSTEM_INTEGRITY_REPUTATION_MALICIOUS
//
// MessageText:
//
// System Integrity policy has been violated.  Malicious binary reputation.
//
#define STATUS_SYSTEM_INTEGRITY_REPUTATION_MALICIOUS ((NTSTATUS)0xC0E90007L)

//
// MessageId: STATUS_SYSTEM_INTEGRITY_REPUTATION_PUA
//
// MessageText:
//
// System Integrity policy has been violated.  Potentially unwanted application.
//
#define STATUS_SYSTEM_INTEGRITY_REPUTATION_PUA ((NTSTATUS)0xC0E90008L)

//
// MessageId: STATUS_SYSTEM_INTEGRITY_REPUTATION_DANGEROUS_EXT
//
// MessageText:
//
// System Integrity policy has been violated.  Dangerous file extension from the web.
//
#define STATUS_SYSTEM_INTEGRITY_REPUTATION_DANGEROUS_EXT ((NTSTATUS)0xC0E90009L)

//
// MessageId: STATUS_SYSTEM_INTEGRITY_REPUTATION_OFFLINE
//
// MessageText:
//
// System Integrity policy has been violated.  Unable to contact reputation service for unknown file.
//
#define STATUS_SYSTEM_INTEGRITY_REPUTATION_OFFLINE ((NTSTATUS)0xC0E9000AL)

//
// Clip modern app and windows licensing error messages.
//
//
// MessageId: STATUS_NO_APPLICABLE_APP_LICENSES_FOUND
//
// MessageText:
//
// No applicable app licenses found.
//
#define STATUS_NO_APPLICABLE_APP_LICENSES_FOUND ((NTSTATUS)0xC0EA0001L)

//
// MessageId: STATUS_CLIP_LICENSE_NOT_FOUND
//
// MessageText:
//
// CLiP license not found.
//
#define STATUS_CLIP_LICENSE_NOT_FOUND    ((NTSTATUS)0xC0EA0002L)

//
// MessageId: STATUS_CLIP_DEVICE_LICENSE_MISSING
//
// MessageText:
//
// CLiP device license not found.
//
#define STATUS_CLIP_DEVICE_LICENSE_MISSING ((NTSTATUS)0xC0EA0003L)

//
// MessageId: STATUS_CLIP_LICENSE_INVALID_SIGNATURE
//
// MessageText:
//
// CLiP license has an invalid signature.
//
#define STATUS_CLIP_LICENSE_INVALID_SIGNATURE ((NTSTATUS)0xC0EA0004L)

//
// MessageId: STATUS_CLIP_KEYHOLDER_LICENSE_MISSING_OR_INVALID
//
// MessageText:
//
// CLiP keyholder license is invalid or missing.
//
#define STATUS_CLIP_KEYHOLDER_LICENSE_MISSING_OR_INVALID ((NTSTATUS)0xC0EA0005L)

//
// MessageId: STATUS_CLIP_LICENSE_EXPIRED
//
// MessageText:
//
// CLiP license has expired.
//
#define STATUS_CLIP_LICENSE_EXPIRED      ((NTSTATUS)0xC0EA0006L)

//
// MessageId: STATUS_CLIP_LICENSE_SIGNED_BY_UNKNOWN_SOURCE
//
// MessageText:
//
// CLiP license is signed by an unknown source.
//
#define STATUS_CLIP_LICENSE_SIGNED_BY_UNKNOWN_SOURCE ((NTSTATUS)0xC0EA0007L)

//
// MessageId: STATUS_CLIP_LICENSE_NOT_SIGNED
//
// MessageText:
//
// CLiP license is not signed.
//
#define STATUS_CLIP_LICENSE_NOT_SIGNED   ((NTSTATUS)0xC0EA0008L)

//
// MessageId: STATUS_CLIP_LICENSE_HARDWARE_ID_OUT_OF_TOLERANCE
//
// MessageText:
//
// CLiP license hardware ID is out of tolerance.
//
#define STATUS_CLIP_LICENSE_HARDWARE_ID_OUT_OF_TOLERANCE ((NTSTATUS)0xC0EA0009L)

//
// MessageId: STATUS_CLIP_LICENSE_DEVICE_ID_MISMATCH
//
// MessageText:
//
// CLiP license device ID does not match the device ID in the bound device license.
//
#define STATUS_CLIP_LICENSE_DEVICE_ID_MISMATCH ((NTSTATUS)0xC0EA000AL)

//
// Audio error messages.
//
//
// MessageId: STATUS_AUDIO_ENGINE_NODE_NOT_FOUND
//
// MessageText:
//
// PortCls could not find an audio engine node exposed by a miniport driver claiming support for IMiniportAudioEngineNode.
//
#define STATUS_AUDIO_ENGINE_NODE_NOT_FOUND ((NTSTATUS)0xC0440001L)

//
// MessageId: STATUS_HDAUDIO_EMPTY_CONNECTION_LIST
//
// MessageText:
//
// HD Audio widget encountered an unexpected empty connection list.
//
#define STATUS_HDAUDIO_EMPTY_CONNECTION_LIST ((NTSTATUS)0xC0440002L)

//
// MessageId: STATUS_HDAUDIO_CONNECTION_LIST_NOT_SUPPORTED
//
// MessageText:
//
// HD Audio widget does not support the connection list parameter.
//
#define STATUS_HDAUDIO_CONNECTION_LIST_NOT_SUPPORTED ((NTSTATUS)0xC0440003L)

//
// MessageId: STATUS_HDAUDIO_NO_LOGICAL_DEVICES_CREATED
//
// MessageText:
//
// No HD Audio subdevices were successfully created.
//
#define STATUS_HDAUDIO_NO_LOGICAL_DEVICES_CREATED ((NTSTATUS)0xC0440004L)

//
// MessageId: STATUS_HDAUDIO_NULL_LINKED_LIST_ENTRY
//
// MessageText:
//
// An unexpected NULL pointer was encountered in a linked list.
//
#define STATUS_HDAUDIO_NULL_LINKED_LIST_ENTRY ((NTSTATUS)0xC0440005L)

//
// Spaceport success codes (spaceport.sys)
//
//
// MessageId: STATUS_SPACES_REPAIRED
//
// MessageText:
//
// The repair was successful.
//
#define STATUS_SPACES_REPAIRED           ((NTSTATUS)0x00E70000L)

//
// MessageId: STATUS_SPACES_PAUSE
//
// MessageText:
//
// The operation has been paused.
//
#define STATUS_SPACES_PAUSE              ((NTSTATUS)0x00E70001L)

//
// MessageId: STATUS_SPACES_COMPLETE
//
// MessageText:
//
// The operation is complete.
//
#define STATUS_SPACES_COMPLETE           ((NTSTATUS)0x00E70002L)

//
// MessageId: STATUS_SPACES_REDIRECT
//
// MessageText:
//
// The operation should be redirected to another node.
//
#define STATUS_SPACES_REDIRECT           ((NTSTATUS)0x00E70003L)

//
// Spaceport error codes (spaceport.sys)
//
//
// MessageId: STATUS_SPACES_FAULT_DOMAIN_TYPE_INVALID
//
// MessageText:
//
// The specified fault domain type or combination of minimum / maximum fault domain type is not valid.
//
#define STATUS_SPACES_FAULT_DOMAIN_TYPE_INVALID ((NTSTATUS)0xC0E70001L)

//
// MessageId: STATUS_SPACES_RESILIENCY_TYPE_INVALID
//
// MessageText:
//
// The specified resiliency type is not valid.
//
#define STATUS_SPACES_RESILIENCY_TYPE_INVALID ((NTSTATUS)0xC0E70003L)

//
// MessageId: STATUS_SPACES_DRIVE_SECTOR_SIZE_INVALID
//
// MessageText:
//
// The sector size of the physical disk is not supported by the storage pool.
//
#define STATUS_SPACES_DRIVE_SECTOR_SIZE_INVALID ((NTSTATUS)0xC0E70004L)

//
// MessageId: STATUS_SPACES_DRIVE_REDUNDANCY_INVALID
//
// MessageText:
//
// The value for fault tolerance is outside of the supported range of values.
//
#define STATUS_SPACES_DRIVE_REDUNDANCY_INVALID ((NTSTATUS)0xC0E70006L)

//
// MessageId: STATUS_SPACES_NUMBER_OF_DATA_COPIES_INVALID
//
// MessageText:
//
// The number of data copies requested is outside of the supported range of values.
//
#define STATUS_SPACES_NUMBER_OF_DATA_COPIES_INVALID ((NTSTATUS)0xC0E70007L)

//
// MessageId: STATUS_SPACES_INTERLEAVE_LENGTH_INVALID
//
// MessageText:
//
// The value for interleave length is outside of the supported range of values or is not a power of 2.
//
#define STATUS_SPACES_INTERLEAVE_LENGTH_INVALID ((NTSTATUS)0xC0E70009L)

//
// MessageId: STATUS_SPACES_NUMBER_OF_COLUMNS_INVALID
//
// MessageText:
//
// The number of columns specified is outside of the supported range of values.
//
#define STATUS_SPACES_NUMBER_OF_COLUMNS_INVALID ((NTSTATUS)0xC0E7000AL)

//
// MessageId: STATUS_SPACES_NOT_ENOUGH_DRIVES
//
// MessageText:
//
// There were not enough physical disks to complete the requested operation.
//
#define STATUS_SPACES_NOT_ENOUGH_DRIVES  ((NTSTATUS)0xC0E7000BL)

//
// MessageId: STATUS_SPACES_EXTENDED_ERROR
//
// MessageText:
//
// Extended error information is available.
//
#define STATUS_SPACES_EXTENDED_ERROR     ((NTSTATUS)0xC0E7000CL)

//
// MessageId: STATUS_SPACES_PROVISIONING_TYPE_INVALID
//
// MessageText:
//
// The specified provisioning type is not valid.
//
#define STATUS_SPACES_PROVISIONING_TYPE_INVALID ((NTSTATUS)0xC0E7000DL)

//
// MessageId: STATUS_SPACES_ALLOCATION_SIZE_INVALID
//
// MessageText:
//
// The allocation size is outside of the supported range of values.
//
#define STATUS_SPACES_ALLOCATION_SIZE_INVALID ((NTSTATUS)0xC0E7000EL)

//
// MessageId: STATUS_SPACES_ENCLOSURE_AWARE_INVALID
//
// MessageText:
//
// Enclosure awareness is not supported for this virtual disk.
//
#define STATUS_SPACES_ENCLOSURE_AWARE_INVALID ((NTSTATUS)0xC0E7000FL)

//
// MessageId: STATUS_SPACES_WRITE_CACHE_SIZE_INVALID
//
// MessageText:
//
// The write cache size is outside of the supported range of values.
//
#define STATUS_SPACES_WRITE_CACHE_SIZE_INVALID ((NTSTATUS)0xC0E70010L)

//
// MessageId: STATUS_SPACES_NUMBER_OF_GROUPS_INVALID
//
// MessageText:
//
// The value for number of groups is outside of the supported range of values.
//
#define STATUS_SPACES_NUMBER_OF_GROUPS_INVALID ((NTSTATUS)0xC0E70011L)

//
// MessageId: STATUS_SPACES_DRIVE_OPERATIONAL_STATE_INVALID
//
// MessageText:
//
// The OperationalState of the physical disk is invalid for this operation.
//
#define STATUS_SPACES_DRIVE_OPERATIONAL_STATE_INVALID ((NTSTATUS)0xC0E70012L)

//
// MessageId: STATUS_SPACES_UPDATE_COLUMN_STATE
//
// MessageText:
//
// A column's state needs to be updated.
//
#define STATUS_SPACES_UPDATE_COLUMN_STATE ((NTSTATUS)0xC0E70013L)

//
// MessageId: STATUS_SPACES_MAP_REQUIRED
//
// MessageText:
//
// An extent needs to be allocated.
//
#define STATUS_SPACES_MAP_REQUIRED       ((NTSTATUS)0xC0E70014L)

//
// MessageId: STATUS_SPACES_UNSUPPORTED_VERSION
//
// MessageText:
//
// The metadata version is unsupported.
//
#define STATUS_SPACES_UNSUPPORTED_VERSION ((NTSTATUS)0xC0E70015L)

//
// MessageId: STATUS_SPACES_CORRUPT_METADATA
//
// MessageText:
//
// The metadata read was corrupt.
//
#define STATUS_SPACES_CORRUPT_METADATA   ((NTSTATUS)0xC0E70016L)

//
// MessageId: STATUS_SPACES_DRT_FULL
//
// MessageText:
//
// The DRT is full.
//
#define STATUS_SPACES_DRT_FULL           ((NTSTATUS)0xC0E70017L)

//
// MessageId: STATUS_SPACES_INCONSISTENCY
//
// MessageText:
//
// An inconsistency was found.
//
#define STATUS_SPACES_INCONSISTENCY      ((NTSTATUS)0xC0E70018L)

//
// MessageId: STATUS_SPACES_LOG_NOT_READY
//
// MessageText:
//
// The log is not ready.
//
#define STATUS_SPACES_LOG_NOT_READY      ((NTSTATUS)0xC0E70019L)

//
// MessageId: STATUS_SPACES_NO_REDUNDANCY
//
// MessageText:
//
// No good copy of data was available.
//
#define STATUS_SPACES_NO_REDUNDANCY      ((NTSTATUS)0xC0E7001AL)

//
// MessageId: STATUS_SPACES_DRIVE_NOT_READY
//
// MessageText:
//
// The drive is not ready.
//
#define STATUS_SPACES_DRIVE_NOT_READY    ((NTSTATUS)0xC0E7001BL)

//
// MessageId: STATUS_SPACES_DRIVE_SPLIT
//
// MessageText:
//
// The data on this drive is stale.
//
#define STATUS_SPACES_DRIVE_SPLIT        ((NTSTATUS)0xC0E7001CL)

//
// MessageId: STATUS_SPACES_DRIVE_LOST_DATA
//
// MessageText:
//
// The data on this drive has been lost.
//
#define STATUS_SPACES_DRIVE_LOST_DATA    ((NTSTATUS)0xC0E7001DL)

//
// MessageId: STATUS_SPACES_ENTRY_INCOMPLETE
//
// MessageText:
//
// The specified log entry is not complete.
//
#define STATUS_SPACES_ENTRY_INCOMPLETE   ((NTSTATUS)0xC0E7001EL)

//
// MessageId: STATUS_SPACES_ENTRY_INVALID
//
// MessageText:
//
// The specified log entry is not valid.
//
#define STATUS_SPACES_ENTRY_INVALID      ((NTSTATUS)0xC0E7001FL)

//
// MessageId: STATUS_SPACES_MARK_DIRTY
//
// MessageText:
//
// A slab needs to be marked dirty.
//
#define STATUS_SPACES_MARK_DIRTY         ((NTSTATUS)0xC0E70020L)

//
// MessageId: STATUS_SPACES_PD_NOT_FOUND
//
// MessageText:
//
// A persisted memory buffer was not found.
//
#define STATUS_SPACES_PD_NOT_FOUND       ((NTSTATUS)0xC0E70021L)

//
// MessageId: STATUS_SPACES_PD_LENGTH_MISMATCH
//
// MessageText:
//
// A persisted memory buffer is too small.
//
#define STATUS_SPACES_PD_LENGTH_MISMATCH ((NTSTATUS)0xC0E70022L)

//
// MessageId: STATUS_SPACES_PD_UNSUPPORTED_VERSION
//
// MessageText:
//
// A persisted memory buffer has an unsupported version.
//
#define STATUS_SPACES_PD_UNSUPPORTED_VERSION ((NTSTATUS)0xC0E70023L)

//
// MessageId: STATUS_SPACES_PD_INVALID_DATA
//
// MessageText:
//
// A persisted memory buffer contains invalid data.
//
#define STATUS_SPACES_PD_INVALID_DATA    ((NTSTATUS)0xC0E70024L)

//
// MessageId: STATUS_SPACES_FLUSH_METADATA
//
// MessageText:
//
// The cache metadata needs to be written and flushed.
//
#define STATUS_SPACES_FLUSH_METADATA     ((NTSTATUS)0xC0E70025L)

//
// MessageId: STATUS_SPACES_CACHE_FULL
//
// MessageText:
//
// The cache is full.
//
#define STATUS_SPACES_CACHE_FULL         ((NTSTATUS)0xC0E70026L)

//
// Volsnap status codes (volsnap.sys)
//
//
// MessageId: STATUS_VOLSNAP_BOOTFILE_NOT_VALID
//
// MessageText:
//
// The bootfile is too small to support persistent snapshots.
//
#define STATUS_VOLSNAP_BOOTFILE_NOT_VALID ((NTSTATUS)0xC0500003L)

//
// MessageId: STATUS_VOLSNAP_ACTIVATION_TIMEOUT
//
// MessageText:
//
// Activation of persistent snapshots on this volume took longer than was allowed.
//
#define STATUS_VOLSNAP_ACTIVATION_TIMEOUT ((NTSTATUS)0xC0500004L)

//
// MessageId: STATUS_VOLSNAP_NO_BYPASSIO_WITH_SNAPSHOT
//
// MessageText:
//
// BypassIO cannot be enabled while a volume snapshot exists.
//
#define STATUS_VOLSNAP_NO_BYPASSIO_WITH_SNAPSHOT ((NTSTATUS)0xC0500005L)

//
// Sdbus status codes (sdbus.sys)
//
//
// MessageId: STATUS_IO_PREEMPTED
//
// MessageText:
//
// The operation was preempted by a higher priority operation. It must be resumed later.
//
#define STATUS_IO_PREEMPTED              ((NTSTATUS)0xC0510001L)

//
// Shared VHDX status codes (svhdxflt.sys)
//
//
// MessageId: STATUS_SVHDX_ERROR_STORED
//
// MessageText:
//
// The proper error code with sense data was stored on server side.
//
#define STATUS_SVHDX_ERROR_STORED        ((NTSTATUS)0xC05C0000L)

//
// MessageId: STATUS_SVHDX_ERROR_NOT_AVAILABLE
//
// MessageText:
//
// The requested error data is not available on the server.
//
#define STATUS_SVHDX_ERROR_NOT_AVAILABLE ((NTSTATUS)0xC05CFF00L)

//
// MessageId: STATUS_SVHDX_UNIT_ATTENTION_AVAILABLE
//
// MessageText:
//
// Unit Attention data is available for the initiator to query.
//
#define STATUS_SVHDX_UNIT_ATTENTION_AVAILABLE ((NTSTATUS)0xC05CFF01L)

//
// MessageId: STATUS_SVHDX_UNIT_ATTENTION_CAPACITY_DATA_CHANGED
//
// MessageText:
//
// The data capacity of the device has changed, resulting in a Unit Attention condition.
//
#define STATUS_SVHDX_UNIT_ATTENTION_CAPACITY_DATA_CHANGED ((NTSTATUS)0xC05CFF02L)

//
// MessageId: STATUS_SVHDX_UNIT_ATTENTION_RESERVATIONS_PREEMPTED
//
// MessageText:
//
// A previous operation resulted in this initiator's reservations being preempted, resulting in a Unit Attention condition.
//
#define STATUS_SVHDX_UNIT_ATTENTION_RESERVATIONS_PREEMPTED ((NTSTATUS)0xC05CFF03L)

//
// MessageId: STATUS_SVHDX_UNIT_ATTENTION_RESERVATIONS_RELEASED
//
// MessageText:
//
// A previous operation resulted in this initiator's reservations being released, resulting in a Unit Attention condition.
//
#define STATUS_SVHDX_UNIT_ATTENTION_RESERVATIONS_RELEASED ((NTSTATUS)0xC05CFF04L)

//
// MessageId: STATUS_SVHDX_UNIT_ATTENTION_REGISTRATIONS_PREEMPTED
//
// MessageText:
//
// A previous operation resulted in this initiator's registrations being preempted, resulting in a Unit Attention condition.
//
#define STATUS_SVHDX_UNIT_ATTENTION_REGISTRATIONS_PREEMPTED ((NTSTATUS)0xC05CFF05L)

//
// MessageId: STATUS_SVHDX_UNIT_ATTENTION_OPERATING_DEFINITION_CHANGED
//
// MessageText:
//
// The data storage format of the device has changed, resulting in a Unit Attention condition.
//
#define STATUS_SVHDX_UNIT_ATTENTION_OPERATING_DEFINITION_CHANGED ((NTSTATUS)0xC05CFF06L)

//
// MessageId: STATUS_SVHDX_RESERVATION_CONFLICT
//
// MessageText:
//
// The current initiator is not allowed to perform the SCSI command because of a reservation conflict.
//
#define STATUS_SVHDX_RESERVATION_CONFLICT ((NTSTATUS)0xC05CFF07L)

//
// MessageId: STATUS_SVHDX_WRONG_FILE_TYPE
//
// MessageText:
//
// Multiple virtual machines sharing a virtual hard disk is supported only on Fixed or Dynamic VHDX format virtual hard disks.
//
#define STATUS_SVHDX_WRONG_FILE_TYPE     ((NTSTATUS)0xC05CFF08L)

//
// MessageId: STATUS_SVHDX_VERSION_MISMATCH
//
// MessageText:
//
// The server version does not match the requested version.
//
#define STATUS_SVHDX_VERSION_MISMATCH    ((NTSTATUS)0xC05CFF09L)

//
// MessageId: STATUS_VHD_SHARED
//
// MessageText:
//
// The requested operation cannot be performed on the virtual disk as it is currently used in shared mode.
//
#define STATUS_VHD_SHARED                ((NTSTATUS)0xC05CFF0AL)

//
// MessageId: STATUS_SVHDX_NO_INITIATOR
//
// MessageText:
//
// Invalid Shared VHDX open due to lack of initiator ID. Check for related Continuous Availability failures.
//
#define STATUS_SVHDX_NO_INITIATOR        ((NTSTATUS)0xC05CFF0BL)

//
// MessageId: STATUS_VHDSET_BACKING_STORAGE_NOT_FOUND
//
// MessageText:
//
// The requested operation failed due to a missing backing storage file.
//
#define STATUS_VHDSET_BACKING_STORAGE_NOT_FOUND ((NTSTATUS)0xC05CFF0CL)

//
// SMB status codes
//
//
// MessageId: STATUS_SMB_NO_PREAUTH_INTEGRITY_HASH_OVERLAP
//
// MessageText:
//
// Failed to negotiate a preauthentication integrity hash function.
//
#define STATUS_SMB_NO_PREAUTH_INTEGRITY_HASH_OVERLAP ((NTSTATUS)0xC05D0000L)

//
// MessageId: STATUS_SMB_BAD_CLUSTER_DIALECT
//
// MessageText:
//
// The current cluster functional level does not support this SMB dialect.
//
#define STATUS_SMB_BAD_CLUSTER_DIALECT   ((NTSTATUS)0xC05D0001L)

//
// MessageId: STATUS_SMB_GUEST_LOGON_BLOCKED
//
// MessageText:
//
// You can't access this shared folder because your organization's security policies block unauthenticated guest access. These policies help protect your PC from unsafe or malicious devices on the network.
//
#define STATUS_SMB_GUEST_LOGON_BLOCKED   ((NTSTATUS)0xC05D0002L)

//
// MessageId: STATUS_SMB_NO_SIGNING_ALGORITHM_OVERLAP
//
// MessageText:
//
// Failed to negotiate a signing hash function.
//
#define STATUS_SMB_NO_SIGNING_ALGORITHM_OVERLAP ((NTSTATUS)0xC05D0003L)

//
// Embedded Security Core
//
// Reserved id values 0x0001 - 0x00FF
//                    0x8xxx
//                    0x4xxx
//
// MessageId: STATUS_SECCORE_INVALID_COMMAND
//
// MessageText:
//
// The command was not recognized by the security core
//
#define STATUS_SECCORE_INVALID_COMMAND   ((NTSTATUS)0xC0E80000L)

//
// Virtual Secure Mode (VSM)
//
//
// MessageId: STATUS_VSM_NOT_INITIALIZED
//
// MessageText:
//
// Virtual Secure Mode (VSM) is not initialized. The hypervisor or VSM may not be present or enabled.
//
#define STATUS_VSM_NOT_INITIALIZED       ((NTSTATUS)0xC0450000L)

//
// MessageId: STATUS_VSM_DMA_PROTECTION_NOT_IN_USE
//
// MessageText:
//
// The hypervisor is not protecting DMA because an IOMMU is not present or not enabled in the BIOS.
//
#define STATUS_VSM_DMA_PROTECTION_NOT_IN_USE ((NTSTATUS)0xC0450001L)

//
// Application Execution (AppExec)
//
//
// MessageId: STATUS_APPEXEC_CONDITION_NOT_SATISFIED
//
// MessageText:
//
// The condition supplied for the app execution request was not satisfied, so the request was not performed.
//
#define STATUS_APPEXEC_CONDITION_NOT_SATISFIED ((NTSTATUS)0xC0EC0000L)

//
// MessageId: STATUS_APPEXEC_HANDLE_INVALIDATED
//
// MessageText:
//
// The supplied handle has been invalidated and may not be used for the requested operation.
//
#define STATUS_APPEXEC_HANDLE_INVALIDATED ((NTSTATUS)0xC0EC0001L)

//
// MessageId: STATUS_APPEXEC_INVALID_HOST_GENERATION
//
// MessageText:
//
// The supplied host generation has been invalidated and may not be used for the requested operation.
//
#define STATUS_APPEXEC_INVALID_HOST_GENERATION ((NTSTATUS)0xC0EC0002L)

//
// MessageId: STATUS_APPEXEC_UNEXPECTED_PROCESS_REGISTRATION
//
// MessageText:
//
// An attempt to register a process failed because the target host was not in a valid state to receive process registrations.
//
#define STATUS_APPEXEC_UNEXPECTED_PROCESS_REGISTRATION ((NTSTATUS)0xC0EC0003L)

//
// MessageId: STATUS_APPEXEC_INVALID_HOST_STATE
//
// MessageText:
//
// The host is not in a valid state to support the execution request.
//
#define STATUS_APPEXEC_INVALID_HOST_STATE ((NTSTATUS)0xC0EC0004L)

//
// MessageId: STATUS_APPEXEC_NO_DONOR
//
// MessageText:
//
// The operation was not completed because a required resource donor was not found for the host.
//
#define STATUS_APPEXEC_NO_DONOR          ((NTSTATUS)0xC0EC0005L)

//
// MessageId: STATUS_APPEXEC_HOST_ID_MISMATCH
//
// MessageText:
//
// The operation was not completed because an unexpected host ID was encountered.
//
#define STATUS_APPEXEC_HOST_ID_MISMATCH  ((NTSTATUS)0xC0EC0006L)

//
// MessageId: STATUS_APPEXEC_UNKNOWN_USER
//
// MessageText:
//
// The operation was not completed because the specified user was not known to the service.
//
#define STATUS_APPEXEC_UNKNOWN_USER      ((NTSTATUS)0xC0EC0007L)

//
// MessageId: STATUS_APPEXEC_APP_COMPAT_BLOCK
//
// MessageText:
//
// The application is blocked by app compat policy.
//
#define STATUS_APPEXEC_APP_COMPAT_BLOCK  ((NTSTATUS)0xC0EC0008L)

//
// MessageId: STATUS_APPEXEC_CALLER_WAIT_TIMEOUT
//
// MessageText:
//
// The caller specified wait timed out before the operation completed.
//
#define STATUS_APPEXEC_CALLER_WAIT_TIMEOUT ((NTSTATUS)0xC0EC0009L)

//
// MessageId: STATUS_APPEXEC_CALLER_WAIT_TIMEOUT_TERMINATION
//
// MessageText:
//
// The caller specified wait timed out before the operation completed because a host termination is in queued.
//
#define STATUS_APPEXEC_CALLER_WAIT_TIMEOUT_TERMINATION ((NTSTATUS)0xC0EC000AL)

//
// MessageId: STATUS_APPEXEC_CALLER_WAIT_TIMEOUT_LICENSING
//
// MessageText:
//
// The caller specified wait timed out before the operation completed because a licensing operation is being performed.
//
#define STATUS_APPEXEC_CALLER_WAIT_TIMEOUT_LICENSING ((NTSTATUS)0xC0EC000BL)

//
// MessageId: STATUS_APPEXEC_CALLER_WAIT_TIMEOUT_RESOURCES
//
// MessageText:
//
// The caller specified wait timed out before the operation completed because resources are being acquired.
//
#define STATUS_APPEXEC_CALLER_WAIT_TIMEOUT_RESOURCES ((NTSTATUS)0xC0EC000CL)


//
// QUIC
//

//
// MessageId: STATUS_QUIC_HANDSHAKE_FAILURE
//
// MessageText:
//
// The QUIC connection handshake failed.
//
#define STATUS_QUIC_HANDSHAKE_FAILURE    ((NTSTATUS)0xC0240000L)

//
// MessageId: STATUS_QUIC_VER_NEG_FAILURE
//
// MessageText:
//
// The QUIC connection failed to negotiate a compatible protocol version.
//
#define STATUS_QUIC_VER_NEG_FAILURE      ((NTSTATUS)0xC0240001L)

//
// MessageId: STATUS_QUIC_USER_CANCELED
//
// MessageText:
//
// The QUIC connection was canceled by the user.
//
#define STATUS_QUIC_USER_CANCELED        ((NTSTATUS)0xC0240002L)

//
// MessageId: STATUS_QUIC_INTERNAL_ERROR
//
// MessageText:
//
// The QUIC connection encountered an internal error.
//
#define STATUS_QUIC_INTERNAL_ERROR       ((NTSTATUS)0xC0240003L)

//
// MessageId: STATUS_QUIC_PROTOCOL_VIOLATION
//
// MessageText:
//
// The QUIC connection encountered a protocol violation.
//
#define STATUS_QUIC_PROTOCOL_VIOLATION   ((NTSTATUS)0xC0240004L)

//
// MessageId: STATUS_QUIC_CONNECTION_IDLE
//
// MessageText:
//
// The QUIC connection was idle.
//
#define STATUS_QUIC_CONNECTION_IDLE      ((NTSTATUS)0xC0240005L)

//
// MessageId: STATUS_QUIC_CONNECTION_TIMEOUT
//
// MessageText:
//
// The QUIC connection timed out while trying to contact the peer.
//
#define STATUS_QUIC_CONNECTION_TIMEOUT   ((NTSTATUS)0xC0240006L)

//
// MessageId: STATUS_QUIC_ALPN_NEG_FAILURE
//
// MessageText:
//
// The QUIC connection failed to negotiate a compatible ALPN.
//
#define STATUS_QUIC_ALPN_NEG_FAILURE     ((NTSTATUS)0xC0240007L)


//
// IORING NTSTATUS codes
//

//
// MessageId: STATUS_IORING_REQUIRED_FLAG_NOT_SUPPORTED
//
// MessageText:
//
// One or more of the required flags provided is unknown by the implementation.
//
#define STATUS_IORING_REQUIRED_FLAG_NOT_SUPPORTED ((NTSTATUS)0xC0460001L)

//
// MessageId: STATUS_IORING_SUBMISSION_QUEUE_FULL
//
// MessageText:
//
// The submission queue is full.
//
#define STATUS_IORING_SUBMISSION_QUEUE_FULL ((NTSTATUS)0xC0460002L)

//
// MessageId: STATUS_IORING_VERSION_NOT_SUPPORTED
//
// MessageText:
//
// The version specified is not known or supported.
//
#define STATUS_IORING_VERSION_NOT_SUPPORTED ((NTSTATUS)0xC0460003L)

//
// MessageId: STATUS_IORING_SUBMISSION_QUEUE_TOO_BIG
//
// MessageText:
//
// The submission queue size specified for the IoRing is too big.
//
#define STATUS_IORING_SUBMISSION_QUEUE_TOO_BIG ((NTSTATUS)0xC0460004L)

//
// MessageId: STATUS_IORING_COMPLETION_QUEUE_TOO_BIG
//
// MessageText:
//
// The completion queue size specified for the IoRing is too big.
//
#define STATUS_IORING_COMPLETION_QUEUE_TOO_BIG ((NTSTATUS)0xC0460005L)

//
// MessageId: STATUS_IORING_SUBMIT_IN_PROGRESS
//
// MessageText:
//
// A submit operation is already in progress for this IoRing on another thread.
//
#define STATUS_IORING_SUBMIT_IN_PROGRESS ((NTSTATUS)0xC0460006L)

//
// MessageId: STATUS_IORING_CORRUPT
//
// MessageText:
//
// The shared ring buffers of the IoRing are corrupt.
//
#define STATUS_IORING_CORRUPT            ((NTSTATUS)0xC0460007L)

//
// Map a WIN32 error value into an NTSTATUS
// Note: This assumes that WIN32 errors fall in the range -32k to 32k.
//

#define __NTSTATUS_FROM_WIN32(x) ((NTSTATUS)(x) <= 0 ? ((NTSTATUS)(x)) : ((NTSTATUS) (((x) & 0x0000FFFF) | (FACILITY_NTWIN32 << 16) | ERROR_SEVERITY_ERROR)))

#ifdef INLINE_NTSTATUS_FROM_WIN32
#ifndef __midl
__inline NTSTATUS_FROM_WIN32(long x) { return x <= 0 ? (NTSTATUS)x : (NTSTATUS)(((x) & 0x0000FFFF) | (FACILITY_NTWIN32 << 16) | ERROR_SEVERITY_ERROR); }
#else
#define NTSTATUS_FROM_WIN32(x) __NTSTATUS_FROM_WIN32(x)
#endif
#else
#define NTSTATUS_FROM_WIN32(x) __NTSTATUS_FROM_WIN32(x)
#endif


/*lint -restore */  // Resume checking for different macro definitions // winnt
// end_ntsecapi

#endif // WIN32_NO_STATUS // winnt
#endif // _NTSTATUS_
