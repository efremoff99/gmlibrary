// delphi 6
{$IFDEF VER140}
  {$DEFINE WEBBROWSER}
  {.$DEFINE CHROMIUM}
{$ENDIF}

// delphi 7
{$IFDEF VER150}
  {$DEFINE WEBBROWSER}
  {.$DEFINE CHROMIUM}
{$ENDIF}

// delphi 2005
{$IFDEF VER170}
  {$DEFINE WEBBROWSER}
  {.$DEFINE CHROMIUM}
{$ENDIF}

// delphi 2006
{$IFDEF VER180}
  {$DEFINE WEBBROWSER}
  {.$DEFINE CHROMIUM}
{$ENDIF}

// delphi 2007
{$IFDEF VER185}
  {$DEFINE WEBBROWSER}
  {.$DEFINE CHROMIUM}
{$ENDIF}

// delphi 2009
{$IFDEF VER200}
  {$DEFINE WEBBROWSER}
  {.$DEFINE CHROMIUM}
{$ENDIF}

// delphi 2010
{$IFDEF VER210}
  {$DEFINE WEBBROWSER}
  {.$DEFINE CHROMIUM}
{$ENDIF}

// delphi XE
{$IFDEF VER220}
  {$DEFINE WEBBROWSER}
  {.$DEFINE CHROMIUM}
{$ENDIF}

// delphi XE2
{$IFDEF VER230}
  {$DEFINE WEBBROWSER}
  {$IFDEF WIN32}
    {.$DEFINE CHROMIUM}
    {.$DEFINE CHROMIUMFMX}
  {$ENDIF}	
{$ENDIF}

// delphi XE3
{$IFDEF VER240}
  {$DEFINE WEBBROWSER}
  {$IFDEF WIN32}
    {.$DEFINE CHROMIUM}
    {.$DEFINE CHROMIUMFMX}
  {$ENDIF}	
{$ENDIF}