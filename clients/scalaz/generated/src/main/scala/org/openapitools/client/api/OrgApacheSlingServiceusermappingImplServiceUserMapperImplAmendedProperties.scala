package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties._

case class OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties (
  serviceRanking: Option[ConfigNodePropertyInteger],
userMapping: Option[ConfigNodePropertyArray])

object OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties {
  import DateTimeCodecs._

  implicit val OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedPropertiesCodecJson: CodecJson[OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties] = CodecJson.derive[OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties]
  implicit val OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedPropertiesDecoder: EntityDecoder[OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties] = jsonOf[OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties]
  implicit val OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedPropertiesEncoder: EntityEncoder[OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties] = jsonEncoderOf[OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties]
}
