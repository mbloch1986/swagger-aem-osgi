package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties._

case class OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties (
  managerRoot: Option[ConfigNodePropertyString],
httpServiceFilter: Option[ConfigNodePropertyString],
defaultRender: Option[ConfigNodePropertyString],
realm: Option[ConfigNodePropertyString],
username: Option[ConfigNodePropertyString],
password: Option[ConfigNodePropertyString],
category: Option[ConfigNodePropertyString],
locale: Option[ConfigNodePropertyString],
loglevel: Option[ConfigNodePropertyDropDown],
plugins: Option[ConfigNodePropertyDropDown])

object OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties {
  import DateTimeCodecs._

  implicit val OrgApacheFelixWebconsoleInternalServletOsgiManagerPropertiesCodecJson: CodecJson[OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties] = CodecJson.derive[OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties]
  implicit val OrgApacheFelixWebconsoleInternalServletOsgiManagerPropertiesDecoder: EntityDecoder[OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties] = jsonOf[OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties]
  implicit val OrgApacheFelixWebconsoleInternalServletOsgiManagerPropertiesEncoder: EntityEncoder[OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties] = jsonEncoderOf[OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties]
}