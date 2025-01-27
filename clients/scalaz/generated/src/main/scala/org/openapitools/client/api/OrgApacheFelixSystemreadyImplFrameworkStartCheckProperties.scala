package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties._

case class OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties (
  timeout: Option[ConfigNodePropertyInteger],
targetStartLevel: Option[ConfigNodePropertyInteger],
targetStartLevelPropName: Option[ConfigNodePropertyString],
`type`: Option[ConfigNodePropertyDropDown])

object OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties {
  import DateTimeCodecs._

  implicit val OrgApacheFelixSystemreadyImplFrameworkStartCheckPropertiesCodecJson: CodecJson[OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties] = CodecJson.derive[OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties]
  implicit val OrgApacheFelixSystemreadyImplFrameworkStartCheckPropertiesDecoder: EntityDecoder[OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties] = jsonOf[OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties]
  implicit val OrgApacheFelixSystemreadyImplFrameworkStartCheckPropertiesEncoder: EntityEncoder[OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties] = jsonEncoderOf[OrgApacheFelixSystemreadyImplFrameworkStartCheckProperties]
}
