package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties._

case class OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties (
  ignorePropertyNameRegex: Option[ConfigNodePropertyArray],
configCollectionPropertiesResourceNames: Option[ConfigNodePropertyArray])

object OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties {
  import DateTimeCodecs._

  implicit val OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesCodecJson: CodecJson[OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties] = CodecJson.derive[OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties]
  implicit val OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesDecoder: EntityDecoder[OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties] = jsonOf[OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties]
  implicit val OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesEncoder: EntityEncoder[OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties] = jsonEncoderOf[OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties]
}
