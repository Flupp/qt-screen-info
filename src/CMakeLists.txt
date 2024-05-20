add_executable(qtscreeninfo)

target_sources(qtscreeninfo PRIVATE
    main.cpp
)

target_link_libraries(qtscreeninfo
    Qt6::Widgets
)

install( TARGETS qtscreeninfo ${KDE_INSTALL_TARGETS_DEFAULT_ARGS} )
install( PROGRAMS org.example.qtscreeninfo.desktop DESTINATION ${KDE_INSTALL_APPDIR} )
install( FILES org.example.qtscreeninfo.metainfo.xml DESTINATION ${KDE_INSTALL_METAINFODIR} )
