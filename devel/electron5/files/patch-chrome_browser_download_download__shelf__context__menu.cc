--- chrome/browser/download/download_shelf_context_menu.cc.orig	2019-04-08 08:32:44 UTC
+++ chrome/browser/download/download_shelf_context_menu.cc
@@ -127,7 +127,7 @@ base::string16 DownloadShelfContextMenu::GetLabelForCo
                    : IDS_DOWNLOAD_MENU_PLATFORM_OPEN_ALWAYS;
           break;
         }
-#elif defined(OS_MACOSX) || defined(OS_LINUX)
+#elif defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
         if (can_open_pdf_in_system_viewer) {
           id = IDS_DOWNLOAD_MENU_PLATFORM_OPEN_ALWAYS;
           break;
