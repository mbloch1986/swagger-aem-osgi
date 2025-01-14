package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChInfo._

case class ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChProperties])

object ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChInfoCodecJson: CodecJson[ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChInfo] = CodecJson.derive[ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChInfo]
  implicit val ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChInfoDecoder: EntityDecoder[ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChInfo] = jsonOf[ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChInfo]
  implicit val ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChInfoEncoder: EntityEncoder[ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChInfo] = jsonEncoderOf[ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChInfo]
}
