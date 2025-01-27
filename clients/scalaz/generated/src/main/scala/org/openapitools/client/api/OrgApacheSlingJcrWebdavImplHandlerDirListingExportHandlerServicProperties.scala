package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingJcrWebdavImplHandlerDirListingExportHandlerServicProperties._

case class OrgApacheSlingJcrWebdavImplHandlerDirListingExportHandlerServicProperties (
  serviceRanking: Option[ConfigNodePropertyInteger])

object OrgApacheSlingJcrWebdavImplHandlerDirListingExportHandlerServicProperties {
  import DateTimeCodecs._

  implicit val OrgApacheSlingJcrWebdavImplHandlerDirListingExportHandlerServicPropertiesCodecJson: CodecJson[OrgApacheSlingJcrWebdavImplHandlerDirListingExportHandlerServicProperties] = CodecJson.derive[OrgApacheSlingJcrWebdavImplHandlerDirListingExportHandlerServicProperties]
  implicit val OrgApacheSlingJcrWebdavImplHandlerDirListingExportHandlerServicPropertiesDecoder: EntityDecoder[OrgApacheSlingJcrWebdavImplHandlerDirListingExportHandlerServicProperties] = jsonOf[OrgApacheSlingJcrWebdavImplHandlerDirListingExportHandlerServicProperties]
  implicit val OrgApacheSlingJcrWebdavImplHandlerDirListingExportHandlerServicPropertiesEncoder: EntityEncoder[OrgApacheSlingJcrWebdavImplHandlerDirListingExportHandlerServicProperties] = jsonEncoderOf[OrgApacheSlingJcrWebdavImplHandlerDirListingExportHandlerServicProperties]
}
