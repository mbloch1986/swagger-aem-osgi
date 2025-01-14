package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChProperties._

case class ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChProperties (
  hcTags: Option[ConfigNodePropertyArray])

object ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChPropertiesCodecJson: CodecJson[ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChProperties] = CodecJson.derive[ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChProperties]
  implicit val ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChPropertiesDecoder: EntityDecoder[ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChProperties] = jsonOf[ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChProperties]
  implicit val ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChPropertiesEncoder: EntityEncoder[ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChProperties] = jsonEncoderOf[ComAdobeCqSecurityHcBundlesImplHtmlLibraryManagerConfigHealthChProperties]
}
