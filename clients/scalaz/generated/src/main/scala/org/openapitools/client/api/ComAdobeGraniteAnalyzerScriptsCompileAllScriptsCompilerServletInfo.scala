package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletInfo._

case class ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletProperties],
bundleLocation: Option[String],
serviceLocation: Option[String])

object ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletInfo {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletInfoCodecJson: CodecJson[ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletInfo] = CodecJson.derive[ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletInfo]
  implicit val ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletInfoDecoder: EntityDecoder[ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletInfo] = jsonOf[ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletInfo]
  implicit val ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletInfoEncoder: EntityEncoder[ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletInfo] = jsonEncoderOf[ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletInfo]
}
